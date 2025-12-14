/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216538
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (var_16)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_4 [i_2] [i_2] [i_2 + 1])))) > (((6ULL) % (((/* implicit */unsigned long long int) var_17))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_2 - 3] [i_2 - 3]), (arr_7 [i_2 + 1] [i_4])))) ? ((-(arr_7 [i_2 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 + 1])) ? (arr_7 [i_2 - 3] [i_2 - 3]) : (((/* implicit */unsigned int) arr_0 [i_2 - 3] [i_2 - 3]))))));
                                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((arr_9 [i_4] [(signed char)9] [i_2 + 1] [i_1] [i_0]) ? (31ULL) : (var_18))), (((/* implicit */unsigned long long int) var_0)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_5] [i_5 - 1] [5U] [i_5 - 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2] [i_2] [i_2 - 3])) ? (1729224314049030185ULL) : (((/* implicit */unsigned long long int) 7340032)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_1] [i_6] [i_6] [i_2])) ? (((/* implicit */int) (signed char)124)) : (arr_3 [i_0])))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))) : (2314773597U))))));
                                var_23 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [(signed char)8]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = min((((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 715586495U)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_19)))))))), (var_18));
}
