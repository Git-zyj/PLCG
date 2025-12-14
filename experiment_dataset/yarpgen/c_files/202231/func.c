/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202231
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
    var_12 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_11);
                                arr_16 [i_0 - 3] [i_0] [i_0 + 3] [i_0 + 3] [i_0 + 3] = max((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (var_11)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 3] [i_0] [i_0])) : (((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                    var_13 ^= ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) var_5))))));
}
