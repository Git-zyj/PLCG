/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50606
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
    var_13 = ((/* implicit */long long int) max(((-(4294967293U))), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == ((-9223372036854775807LL - 1LL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (5343010558463312820ULL)))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (-(arr_2 [i_1] [i_1] [(unsigned char)11])));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((((((5343010558463312829ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) 7335837329187356745LL)) : (((var_1) & (var_1))))), (arr_9 [3LL] [i_1] [i_1] [i_0])));
                                arr_12 [i_4] [i_1] [(unsigned char)11] [i_2] [5LL] [i_1] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1] [i_1] [i_2])), (max((9223372036854775791LL), (7335837329187356773LL)))))) || (((arr_2 [i_1] [6ULL] [i_1]) == (var_1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
