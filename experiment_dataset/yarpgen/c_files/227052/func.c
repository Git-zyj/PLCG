/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227052
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
    var_17 *= ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) & (min((-1), (1))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((((unsigned short) min((((/* implicit */unsigned long long int) 11)), (1217093012242634196ULL)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)11907)) && (((/* implicit */_Bool) -17)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_19 &= ((/* implicit */long long int) (short)-11907);
                    var_20 &= ((/* implicit */unsigned long long int) var_15);
                    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_0 + 1] [i_0 + 1])) ? (var_12) : (arr_5 [i_1] [i_0 + 1] [i_0 + 1])));
                    var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2])) ? (arr_3 [i_0 - 1] [i_0 + 1]) : (arr_3 [i_0 - 1] [i_1])));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_23 &= ((/* implicit */long long int) arr_2 [i_3] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((unsigned short) var_4));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((1) / (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [19ULL] [1ULL] [i_5 - 2] [19ULL]))))) ? (((/* implicit */unsigned long long int) ((2535013405163018480LL) + (((/* implicit */long long int) (-2147483647 - 1)))))) : ((+(arr_4 [9] [9])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (((((/* implicit */_Bool) -14)) ? (var_12) : (((/* implicit */unsigned long long int) -11))))))) ? (((var_14) / (min((((/* implicit */unsigned long long int) var_9)), (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
}
