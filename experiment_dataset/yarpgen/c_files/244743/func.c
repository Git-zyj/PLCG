/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244743
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
    var_10 = max((min((((/* implicit */long long int) var_2)), (var_4))), (min((-3475461334297803448LL), (((/* implicit */long long int) 352248558)))));
    var_11 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) min((arr_2 [i_0]), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((arr_2 [i_0]), (arr_2 [i_0])))))));
        var_13 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) min((max((arr_4 [i_1] [i_1]), (min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (arr_2 [i_1]))))), (arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (long long int i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((arr_11 [i_1] [i_1] [i_2] [i_3]), (((/* implicit */long long int) arr_6 [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((arr_1 [i_1] [i_3 - 2]), (arr_3 [i_1] [i_1]))))));
                                arr_19 [i_2] [i_2] [i_4] [i_4] [i_5] [i_1] [i_1] = ((/* implicit */int) arr_7 [i_2]);
                                var_17 = ((/* implicit */short) max((max((arr_4 [i_1] [i_4]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_1])), (arr_3 [i_1] [i_1])))))), (max((max((((/* implicit */unsigned long long int) arr_15 [i_5] [i_2] [i_3 + 2] [i_4] [i_5])), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3] [i_4] [i_5]))))));
                                arr_20 [i_5] [i_4] [i_3] [i_2] [i_1] |= ((/* implicit */unsigned long long int) arr_6 [i_3] [i_2]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        arr_23 [i_1] [i_2] [i_3 - 2] [i_1] = ((/* implicit */unsigned short) arr_9 [i_1 - 1] [i_1] [i_1] [i_1]);
                        arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_2]);
                        arr_25 [i_3 - 2] = ((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_3 - 1]);
                    }
                    arr_26 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_11 [i_1] [i_1] [i_3] [i_3]);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */long long int) min((((/* implicit */int) min((var_9), (var_9)))), (min((var_5), (((/* implicit */int) var_1)))))))));
}
