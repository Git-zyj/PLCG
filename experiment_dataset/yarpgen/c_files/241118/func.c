/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241118
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1]))))));
                var_17 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) 0)), (6266077055361081347LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)-26333)))))))), (((/* implicit */long long int) (short)-11148))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (min(((+(((((/* implicit */_Bool) (short)2149)) ? (((/* implicit */unsigned long long int) 6266077055361081347LL)) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) (_Bool)0)))))))));
                            var_19 &= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                            {
                                var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0))));
                                arr_15 [i_3] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_1 - 1] [i_3 + 1] [i_0 - 1]);
                                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) > (((/* implicit */int) ((unsigned char) arr_11 [i_3] [i_3] [i_3])))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_5] [i_1] = ((/* implicit */short) (!(((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) arr_17 [i_5] [i_1] [i_1] [i_0]))))));
                                arr_20 [i_1] [i_1] = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_5]);
                            }
                            var_22 = ((/* implicit */unsigned int) arr_8 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_10);
}
