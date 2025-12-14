/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((var_2 ? var_7 : var_3))) ? var_5 : 567520532))) && ((((var_9 ? 3727446764 : 567520532))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((3727446766 ? ((~(arr_3 [i_1] [i_0]))) : var_3))));
                var_15 = (3071114791 / (((((((arr_2 [i_0] [i_0]) & (arr_1 [i_0]))) != (arr_1 [i_1 - 1]))))));
            }
        }
    }
    var_16 *= 3349882585;
    var_17 = (((!(~var_10))) ? var_10 : (((((var_6 ? var_3 : var_2))) ? (~var_6) : -0)));
    #pragma endscop
}
