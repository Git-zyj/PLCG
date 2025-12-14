/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = var_6;
                    var_19 += (4781880641789456973 < 0);
                    arr_7 [i_0] [i_0] [i_2] = ((~((-1627133308297058466 ? 536870911 : 3758096384))));
                }
            }
        }
    }
    var_20 = var_15;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_21 = (var_6 <= var_2);

        for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_22 = (((-var_12 + 2147483647) >> (((var_12 + var_4) - 27672))));
            var_23 = (!var_13);
        }
        for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_24 = (!var_7);
                var_25 = ((var_1 ? var_4 : var_4));
            }
            var_26 = (~var_15);
        }
    }

    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        var_27 ^= var_15;

        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_28 += var_17;
                var_29 = -var_7;
            }
            var_30 |= ((var_3 ? var_7 : var_4));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_31 ^= ((var_1 ? -var_7 : var_17));
            var_32 ^= (!var_14);
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_33 = (min(var_33, (((((max(((var_14 ? var_7 : var_13)), var_4))) ? ((((var_15 != (~var_2))))) : (min((((var_0 ? var_2 : var_3))), var_0)))))));
            var_34 = var_6;
        }
        var_35 ^= var_3;
        arr_32 [i_7] [i_7] = var_11;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_36 = ((var_3 ? var_10 : var_5));
        arr_35 [i_12] = ((var_15 ? var_15 : var_5));
        arr_36 [i_12] [i_12] = (~var_3);
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 20;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 19;i_16 += 1)
                {
                    {
                        var_37 += var_6;
                        var_38 = (var_13 - -54196);
                        var_39 = var_7;
                    }
                }
            }
        }
        var_40 ^= ((var_8 ? var_11 : var_4));
        var_41 = (var_15 * var_15);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                {
                    arr_53 [i_13] [i_13] [i_13] [i_17] = ((var_9 ? var_8 : var_0));
                    var_42 = (max(var_42, (((var_13 ? var_9 : var_12)))));
                }
            }
        }
    }
    #pragma endscop
}
