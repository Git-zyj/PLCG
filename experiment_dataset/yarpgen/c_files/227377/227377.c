/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (!1);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (((min(1, 26))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = (((1 / 1) - 2147483647));
                        var_17 -= 7;
                        arr_13 [8] = ((((min(((var_3 ? 7 : var_0)), ((1 * (arr_7 [i_2])))))) ? var_0 : (((((var_10 ? var_10 : var_3))) ? -431269973 : ((28 ? -431269973 : var_8))))));
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, (!var_10)));
    #pragma endscop
}
