/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((7774100025481032352 ? 17683402939325138594 : 62650)))));
    var_14 = (max(var_14, var_6));
    var_15 = ((13843219249069678854 - ((-3111289887376929003 ? 17683402939325138598 : 17683402939325138594))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0 + 4] = ((((min(var_0, (arr_0 [i_0 + 1])))) ? (arr_0 [i_0 + 3]) : (max((arr_0 [i_0 + 4]), var_11))));
                arr_8 [i_0] [i_1] [i_1] = (arr_2 [1]);
            }
        }
    }
    var_16 = ((4 ? 1 : 1));
    #pragma endscop
}
