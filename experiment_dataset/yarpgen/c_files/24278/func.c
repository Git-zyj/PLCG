/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24278
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                            var_11 = max((-8484580554063960869LL), (-8484580554063960857LL));
                        }
                    } 
                } 
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 + 1])) : (var_4))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2]))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (((long long int) -8388608LL))))));
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_9)))));
    var_15 += ((long long int) ((signed char) 8388632LL));
}
