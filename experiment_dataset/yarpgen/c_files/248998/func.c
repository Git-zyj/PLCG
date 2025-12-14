/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248998
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
    var_13 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)15)) ^ (-1775676290))) + (2147483647))) << (0U)));
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) var_6);
                var_16 |= ((/* implicit */short) ((int) ((((/* implicit */_Bool) (short)-4168)) ? (arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3]) : (arr_3 [i_1] [i_1] [i_0 - 1]))));
            }
        } 
    } 
}
