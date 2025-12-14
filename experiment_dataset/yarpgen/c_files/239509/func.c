/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239509
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */unsigned int) min((18446744073709551615ULL), (1ULL)));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551602ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))) != (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [(signed char)16] [i_3 + 1]))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-127)), (min((((18446744073709551615ULL) / (1ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                    var_20 = ((/* implicit */_Bool) min((min((((/* implicit */signed char) ((-3556020783123000847LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))), (max(((signed char)-127), (((/* implicit */signed char) var_14)))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */signed char) var_12)), ((signed char)125)))))))));
                }
                var_21 = ((unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0] [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((1ULL), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((unsigned long long int) var_11)))))));
}
