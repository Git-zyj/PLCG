/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232523
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */long long int) 4294967291U)) * (max(((-(1305362328396277605LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)60781)) * (((/* implicit */int) (unsigned short)0))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */long long int) 24U);
                    arr_11 [i_0] [i_1] [i_2 - 2] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_9 [i_0] [i_1] [i_2 + 2]))));
                    arr_12 [i_1] [i_0] [i_1] [i_2] = arr_4 [i_0];
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_1 - 1])) : (var_1)));
                    arr_13 [i_0] [4LL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_2 - 2] [i_1 - 1]))));
                }
                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1] [i_1 - 1])) ? (arr_6 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_6 [i_1 - 1] [i_1] [i_1 - 1]))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) 3313097725U)))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_1))))))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((8929571384299275501ULL) * (((/* implicit */unsigned long long int) 6146143009316332819LL)))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((unsigned char) 16775168U)))));
                var_15 = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
}
