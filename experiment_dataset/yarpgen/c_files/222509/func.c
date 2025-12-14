/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222509
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (~((~(var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] [10U] [i_1] [i_3 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_12 [i_3 - 2] [i_3 - 1]), (arr_4 [i_0] [i_2 + 1] [i_3 + 1]))))));
                                var_12 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_7 [i_3] [i_3] [i_3 - 1] [(signed char)0] [i_3 - 2])))));
                                arr_15 [i_1] [i_1] [2U] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_3 - 2])) && (((/* implicit */_Bool) max((arr_4 [i_4] [i_2 + 1] [i_0]), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_2]))) : (arr_9 [i_0] [4LL] [i_2])))))))) : (var_3)));
                                var_13 = arr_7 [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_1] [i_2];
                            }
                        } 
                    } 
                } 
                var_14 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+((-(arr_1 [i_0] [i_0])))))), (min((max((12210001624740061568ULL), (((/* implicit */unsigned long long int) 1128909593U)))), (((/* implicit */unsigned long long int) var_4))))));
            }
        } 
    } 
    var_15 = var_10;
}
