/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25991
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
    var_18 = ((/* implicit */unsigned int) (+((+(((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) var_11)) - (34912)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (unsigned char)178)), (-5614764407751778933LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))));
                                arr_11 [i_0] [i_4] [(short)4] [i_0] [(unsigned char)10] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_6)) : (arr_5 [i_2 + 1] [i_1] [i_3 - 2] [i_3]))), (((/* implicit */unsigned int) min((var_12), (((/* implicit */short) arr_9 [i_3 - 3] [i_2 + 1] [i_2] [i_4 - 3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
