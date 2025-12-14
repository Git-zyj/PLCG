/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240216
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
    var_18 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (unsigned short)25247);
                            var_20 = ((/* implicit */long long int) arr_2 [i_0 - 1]);
                            var_21 = ((/* implicit */unsigned int) var_17);
                        }
                    } 
                } 
                var_22 += ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50046))) : (10515824618746408317ULL)))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)15507)) - (1553836841))))));
            }
        } 
    } 
}
