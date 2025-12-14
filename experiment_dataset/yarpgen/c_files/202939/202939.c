/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_8 ? var_3 : var_8);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = -var_2;
        var_16 = ((~(arr_1 [i_0 - 2] [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 = var_8;
            var_18 = (!var_6);
            arr_10 [i_2] = (arr_7 [i_1]);
            arr_11 [i_2] [i_2] [i_2] = (((arr_6 [i_1]) > 1));
            arr_12 [i_1] [i_2] = (arr_4 [i_1 + 1]);
        }
        var_19 = 0;
        var_20 = (arr_9 [i_1] [i_1 - 2] [i_1 - 3]);
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_18 [i_3] = (arr_14 [i_3 - 1] [19]);
                arr_19 [i_3] [i_4] = max((arr_16 [i_3 - 1] [i_3 - 1]), ((0 ^ ((var_5 ? 18446744073709551601 : var_6)))));
                var_21 = arr_14 [i_3] [i_3];
            }
        }
    }
    var_22 = (((((-4685646275359866300 ? 1 : var_4))) ? var_10 : var_5));
    #pragma endscop
}
