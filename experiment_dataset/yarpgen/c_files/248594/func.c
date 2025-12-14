/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248594
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) == ((~(((/* implicit */int) (unsigned char)210))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) > (((((/* implicit */int) (unsigned char)254)) | (((/* implicit */int) max(((unsigned char)64), (((/* implicit */unsigned char) (_Bool)1)))))))));
                var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) / (11962353056278329060ULL)))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)200)), (268435455))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)10701)) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [(short)1] [i_1] [(short)1])), ((short)-10702)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1851504250354601618LL)))))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (unsigned char)197))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_18 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_0] [(_Bool)1] [i_3 - 1]), (arr_5 [i_0] [(signed char)10] [i_3 - 1]))))) - (((long long int) arr_5 [(unsigned char)16] [(signed char)0] [i_3 - 1]))));
                                arr_14 [i_1] [i_3] [i_4] = (+((-(var_1))));
                                arr_15 [i_1] [i_1] [2LL] = ((/* implicit */_Bool) arr_1 [(unsigned char)15] [7U]);
                            }
                            var_19 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) ((_Bool) (signed char)11)))))) >> (((/* implicit */int) ((var_3) != (max((((/* implicit */long long int) arr_3 [i_2])), (var_3))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
