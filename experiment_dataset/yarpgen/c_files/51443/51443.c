/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (!1359307123);
    var_19 = 2484388614;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 += (var_13 ^ ((~(min(1543013024, 1810578690)))));
                var_21 = max(185311693, (min((!3999366026), (min(3723827373, (arr_2 [i_0 + 1]))))));
                var_22 = (max(var_22, ((((((arr_4 [i_0 - 1]) | var_15))) ? ((~(arr_4 [i_0 + 3]))) : 3995497549))));
            }
        }
    }
    var_23 = (min(var_23, 3668969933));
    #pragma endscop
}
