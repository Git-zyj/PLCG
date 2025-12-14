/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191345
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
    var_12 |= ((/* implicit */long long int) min((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) var_10);
                            var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (signed char)-97))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+((+(arr_3 [i_0] [i_0 + 2] [i_1 + 1]))))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) 1224574071);
            }
        } 
    } 
}
