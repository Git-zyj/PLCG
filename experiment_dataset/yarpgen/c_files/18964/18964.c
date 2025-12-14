/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((!3), ((max(28752, 3)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2 - 3] [i_0] = min(-914743349, -1866742791);
                    var_21 ^= (-9223372036854775807 - 1);
                }
            }
        }
        arr_11 [i_0] = min((max((var_16 * var_11), var_12)), (((var_4 ? -914743349 : var_0))));
    }
    var_22 = var_0;
    var_23 = var_6;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (!var_0);
        arr_15 [i_3] = (~var_8);
        arr_16 [i_3] = (10755 >= 6805);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_24 |= max(3, (min(((var_17 ? 0 : -914743344)), -0)));
        var_25 = (max(var_25, -var_13));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_26 = (max(((~(min(var_7, -914743344)))), (min(var_15, -8792))));
        var_27 = (max((max(2427195290528333362, 10)), -58731));
        var_28 = 18446744073709551615;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = ((~(max(58733, -914743344))));
        arr_26 [11] |= var_7;
    }
    #pragma endscop
}
