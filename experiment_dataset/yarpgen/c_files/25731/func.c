/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25731
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
    var_11 = var_4;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3579))) : (((long long int) var_9)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_11 [10LL] [i_1 - 4] [i_1] [10ULL] [i_3] = ((/* implicit */_Bool) 4205280020441415942LL);
                            arr_12 [i_0] [i_0] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_2 - 2])) ? (((/* implicit */int) (short)10289)) : (((/* implicit */int) arr_2 [i_2 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
