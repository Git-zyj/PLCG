/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46168
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */unsigned long long int) var_9);
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), ((~(1760907552U)))))) ^ (((var_1) % ((+(var_7))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((short)7071), ((short)7060)))), (((min((((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned short)13])), (arr_0 [i_1]))) % (min((18000910114701619254ULL), (((/* implicit */unsigned long long int) (short)4647))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) <= (max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (11781381816559542041ULL))), (((/* implicit */unsigned long long int) ((18000910114701619254ULL) >= (((/* implicit */unsigned long long int) -1713203865))))))));
                                var_15 = ((/* implicit */int) ((((var_7) | (((/* implicit */unsigned long long int) -1713203865)))) | (((12906663122018981042ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4647)))))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((18000910114701619241ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7076))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(unsigned char)12] [i_3 + 1] [i_1 - 1] [(unsigned char)12])) << (((arr_6 [i_0 + 2] [i_1 - 1] [i_1] [i_2 - 2]) - (1442208575538161065ULL)))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((11781381816559542041ULL) | (((arr_10 [i_0] [i_0] [i_0] [i_1 - 2] [8ULL]) << (((((/* implicit */int) arr_2 [i_1 - 2])) - (9460))))))), (((/* implicit */unsigned long long int) max((min((-443389308), (((/* implicit */int) (short)4647)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((min(((+(((/* implicit */int) var_10)))), ((+(((/* implicit */int) var_10)))))), ((-(1780416481)))));
    var_19 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_4)), (var_8))), (max((2681191463U), (((/* implicit */unsigned int) -1780416487))))));
}
