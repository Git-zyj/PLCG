/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((max(1, (min(-4384, var_0))))) * (max(1847155472, (-32767 - 1)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 |= ((1 ? 1 : 1));
                    var_16 = 1;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_17 = ((1 ? (arr_2 [i_0]) : var_11));
                    var_18 = var_8;
                    arr_11 [i_0] [i_1] [i_1] = (~((-2147483632 ? 1 : 1)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_19 = 1;
        var_20 = (((arr_13 [i_4 - 3]) & -4224));

        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            var_21 = ((-(arr_16 [i_5 + 2] [i_5])));
            var_22 = ((1 ? 1 : (arr_16 [i_4] [i_5 - 3])));
            var_23 = (max(var_23, var_10));
            var_24 = arr_14 [i_4 - 3] [i_5];
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_25 -= var_2;
            arr_21 [i_4] [i_4] = 7;
            var_26 = (max(var_26, ((((1 ? 2083674841 : var_14)) > (arr_14 [i_6] [i_6])))));
        }
        var_27 = (min(var_27, ((1 ? 409696015 : (var_9 != 1)))));
        var_28 = (var_5 < (arr_18 [i_4 - 1] [i_4 + 1] [i_4 - 1]));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_29 = (-24261 > -392226455);
        var_30 *= var_4;
    }
    var_31 = (var_7 == -2147483626);
    #pragma endscop
}
