/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, var_3));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((!(((13 ? var_14 : var_10)))));
            var_17 = (!var_14);
            var_18 = ((26128 << (((arr_4 [i_0 - 1] [i_1 + 2]) - 3517362261))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_19 |= ((var_9 << ((((211109254 << (arr_0 [i_2]))) - 422218503))));
                            var_20 = var_3;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_21 = var_7;
            var_22 = ((~(4083858061 <= 3967627415789203823)));
            var_23 = (((var_0 <= -8734055243913721995) ? ((var_1 ? (arr_17 [i_5] [1]) : var_12)) : (arr_15 [3] [3] [i_5] [i_5 - 3] [i_5 + 1])));
            var_24 = var_11;
        }
        var_25 = (((!var_10) ? (arr_20 [i_5] [i_5]) : ((var_3 ? 14768513301006661676 : (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5 - 3])))));
        var_26 = (((14768513301006661676 / -3967627415789203824) ? var_4 : 4083858079));
        var_27 = var_8;
    }
    #pragma endscop
}
