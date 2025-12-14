/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~95);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (min(-37718, -var_10));
                    var_17 = -160;
                    var_18 = ((~((((1 ? 13730851590595052517 : var_10))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_19 = ((~(~848061038)));
        arr_12 [i_3] [i_3] &= (min(((1 ? var_7 : 0)), (~1)));
    }
    var_20 = -var_2;
    #pragma endscop
}
