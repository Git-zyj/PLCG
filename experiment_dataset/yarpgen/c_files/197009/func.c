/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197009
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_2 + 1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)15)) ^ ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_2] [i_0 + 1])), (arr_6 [i_2] [i_2 + 2] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) arr_6 [i_2 + 1] [i_2 + 1] [i_4]))));
                                arr_15 [i_0 - 2] [(short)23] [(short)23] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) min(((signed char)26), ((signed char)15)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_8))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (var_9))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23913)) || ((_Bool)1))))));
}
