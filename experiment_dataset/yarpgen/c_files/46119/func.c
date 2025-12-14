/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46119
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
    var_15 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_12);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_16 = ((((/* implicit */int) arr_1 [i_2] [i_3])) << (((((((/* implicit */int) var_13)) + (139))) - (13))));
                        var_17 = ((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned short)0)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) (short)11311)) & (((/* implicit */int) (unsigned char)69)))))));
                            var_19 = ((/* implicit */long long int) ((arr_5 [i_1] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(signed char)2] [i_2])))));
                            var_20 = ((/* implicit */_Bool) var_13);
                        }
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_2] [(short)19] [i_0] [i_2] = ((/* implicit */short) (((~(((/* implicit */int) var_3)))) < (((/* implicit */int) var_0))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_7 [i_0] [i_1] [i_2] [i_3] [(signed char)18]))));
                            var_22 &= ((/* implicit */unsigned int) arr_14 [i_0] [(signed char)2] [i_5]);
                            var_23 = ((/* implicit */long long int) arr_0 [i_2]);
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_5]))));
                        }
                    }
                }
                arr_16 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)1482);
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned long long int) var_14);
}
