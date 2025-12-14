/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = max((((((var_3 ? 1 : (arr_0 [i_0] [i_0])))) ? (((!(arr_1 [i_0 + 2])))) : var_12)), 0);
        var_18 = -18445;
        arr_2 [i_0 + 1] = -18444;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = 18443;
        var_20 = (max(var_20, (arr_3 [i_1])));
        arr_6 [4] [i_1] = ((var_7 && (((var_14 ? 18446744073709551609 : var_3)))));

        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_1] = (arr_3 [i_2]);
            var_21 = (max(var_21, ((((((arr_7 [i_2] [i_2 - 1] [i_2 - 3]) + 2147483647)) << (2147483647 - 2147483647))))));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_12 [i_1] = ((((((arr_5 [20]) && (arr_8 [i_3])))) > (arr_7 [i_3 + 3] [i_3 + 2] [i_3 + 2])));
            var_22 = (-18444 > 1);
        }
        arr_13 [i_1] [i_1] = 2147483645;
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            {
                var_23 = -2147483645;
                var_24 *= (((((~(arr_19 [i_4 - 1] [i_4 - 1] [i_5 + 3])))) && ((((arr_16 [i_4 - 1] [i_4 - 1]) ? (arr_16 [i_4 - 1] [i_4 - 1]) : (arr_16 [i_4 - 1] [i_4 - 1]))))));
                arr_20 [i_4] [i_4] = ((!((((arr_15 [i_5 - 2] [i_4 - 1]) ? (arr_15 [i_5 - 2] [i_4 - 1]) : (arr_15 [i_5 + 2] [i_4 - 1]))))));
            }
        }
    }
    var_25 = (min((((((var_1 ? var_4 : var_9))) ? 0 : (((min(var_15, var_2)))))), var_2));
    var_26 *= (max(1, (~18444)));
    #pragma endscop
}
