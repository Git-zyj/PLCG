/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (~var_4);
                arr_5 [i_0] [i_1] = ((~(arr_0 [i_0 + 2])));
                arr_6 [i_0] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    var_16 = (max(var_16, ((max(var_5, 2723)))));

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = (((arr_0 [i_2 - 1]) ^ var_6));
        var_17 = (arr_8 [i_2]);
        arr_10 [i_2] = (~3143652545);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_14 [i_3] |= (arr_13 [i_3]);
        arr_15 [i_3] [i_3 - 1] = (arr_12 [i_3 + 1]);
        var_18 = 268435456;
        var_19 = (((arr_4 [i_3 - 1] [i_3 - 1]) ? var_5 : (var_6 ^ var_11)));
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_20 = (max(-1484657163, (((var_1 ? ((1151314745 ^ (arr_16 [i_6]))) : (~255))))));
                var_21 = 20497;
                arr_23 [i_4] [i_4] [i_5] [i_4] = var_8;
            }
            var_22 = ((31 - (arr_1 [i_4 - 1])));
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
        {
            arr_28 [i_4] = (~-2);
            arr_29 [i_4] [i_4] = ((((max(115, 38183))) ? (arr_20 [i_7 - 1] [i_4]) : var_12));
            arr_30 [i_4] [i_4] = (((1151314745 ? 1720443448 : (arr_22 [i_4] [i_7 - 2] [i_4 - 2]))));
        }
        arr_31 [i_4] = (max(var_12, (~58)));
        var_23 &= 0;
    }
    var_24 = ((max(var_4, 7409843248354487669)));
    var_25 = 24;
    #pragma endscop
}
