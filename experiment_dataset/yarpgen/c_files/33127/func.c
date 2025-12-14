/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33127
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
    var_18 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_5) >> (((var_14) + (7665148062765239541LL))))) >= (((var_5) / (((/* implicit */int) var_12)))))))) >= (((((/* implicit */_Bool) ((unsigned short) arr_2 [(unsigned char)11]))) ? (((/* implicit */unsigned long long int) ((int) arr_0 [i_1]))) : (((arr_3 [i_1] [i_1]) << (((((/* implicit */int) var_13)) - (34708)))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_16 [1U] [i_2] [i_1] [i_4] = ((/* implicit */short) arr_3 [i_1] [i_4]);
                                var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-40)) * (max((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) -5704452623013774893LL)) && ((_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_1] [i_1] [i_1] [i_0] [i_0]))) : (var_16)))) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) ((short) arr_13 [13U] [i_0] [i_2] [i_0] [i_1]))))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) 7933977097130294964ULL);
                    arr_21 [i_1] [7LL] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 17350353871749314671ULL)))) : (((arr_9 [i_0]) ? (var_14) : (((/* implicit */long long int) var_7))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
}
