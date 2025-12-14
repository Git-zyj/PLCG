/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1480469742;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1946717226;
        arr_3 [i_0] [i_0] = (((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (1946717237 - 1946717219))) >> ((((-(3150 | 1))) + 3165))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 += ((+((((4046642401395883577 && 0) || var_16)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_22 = 1;
                    arr_12 [i_3] [i_1] [i_1] [i_1] = (((!-97) * var_4));
                    arr_13 [i_1] [i_1] [i_3] = 667466184;
                    var_23 = ((((1463820087207514631 ? -15475 : -38))) ? (min(8057103545930631540, 259729104926048767)) : ((0 + (1472919803 % 1))));
                }
            }
        }
        var_24 ^= 667466186;
        arr_14 [i_1] [i_1] = -20363;
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_25 = ((!((((~4575891168127514457) << (((~-27638) - 27589)))))));
        var_26 = ((~(~var_11)));
    }
    var_27 = var_0;
    #pragma endscop
}
