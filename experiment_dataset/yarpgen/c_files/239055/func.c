/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239055
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0))))))))));
    var_12 = ((/* implicit */unsigned long long int) (short)-21726);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] [i_2] = (+(arr_9 [i_0] [i_0] [i_1 + 2] [i_4]));
                            arr_15 [i_1] [i_0] = arr_7 [i_0] [i_0] [i_2] [i_3];
                        }
                        arr_16 [i_0] [i_1] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 1]))));
                    }
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_20 [i_0] [i_1] [(unsigned char)12] [i_2] [(short)11] [i_0] = (short)0;
                        arr_21 [i_0] [i_0] [14] [1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned char)73), (((/* implicit */unsigned char) var_2))))), (min((arr_17 [(short)13] [i_0] [i_0] [6LL]), (((/* implicit */unsigned long long int) 4247465152278618138LL))))))) ? (min((min((((/* implicit */unsigned long long int) (short)-21844)), (arr_9 [i_0] [i_0] [5] [i_5]))), (((/* implicit */unsigned long long int) -4247465152278618149LL)))) : (((/* implicit */unsigned long long int) -1391260383))));
                    }
                    arr_22 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 6752917740290414584ULL)))))))), (min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) var_6)), (4247465152278618142LL)))))));
                }
            } 
        } 
    } 
}
