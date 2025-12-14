/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (((var_12 + 9223372036854775807) << ((((var_9 >> (var_14 + 125))) & var_8))));
        var_17 = (((((var_12 + var_6) + (var_5 - var_5))) == ((((var_9 && (var_11 * var_9)))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = var_11;

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_2] [i_2] = (((((var_14 * (var_7 / var_0)))) && var_11));

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                var_19 *= (((((var_13 && (var_11 < var_3)))) < var_7));
                arr_14 [i_1] [i_2] [i_1] = ((-3745 % 1848443245) > var_1);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_20 = var_8;
                            var_21 *= var_3;
                            var_22 = var_13;
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] = var_2;
                            arr_23 [i_2] [i_3] = var_9;
                        }
                    }
                }
                var_23 = (max(var_23, var_14));
                var_24 *= var_14;
            }
            var_25 = (max(var_25, (((((var_4 / var_5) * var_1)) * var_6))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_26 = (max(var_26, var_6));
            arr_26 [1] = var_13;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_27 = var_13;
                var_28 &= ((((((var_14 * var_3) < var_4))) | var_0));
                arr_29 [i_7] = var_9;
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                arr_32 [i_1] [7] [i_8] [i_1] = (234161067800143282 && 53);

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_35 [i_8] [i_1] = ((var_9 < (var_7 / var_14)));
                    arr_36 [i_8] [i_9] |= var_14;
                    var_29 = var_3;
                }
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                arr_40 [i_1] [i_6] = (var_6 - var_6);
                var_30 = ((var_1 || (18212583005909408334 & 0)));
                arr_41 [i_1] [i_6] = var_10;
            }
            var_31 *= var_12;
        }
        arr_42 [i_1] = var_3;
        var_32 = ((var_7 | (4078630835 + 56990)));
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_33 = (var_12 & var_12);
        var_34 = (var_7 / var_12);
        arr_45 [i_11] = (var_9 < var_8);
        var_35 = var_7;
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        arr_48 [13] [i_12] = (-54 == -199557968);
        var_36 = (var_9 || var_6);
    }
    var_37 = var_9;
    var_38 = var_0;
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 23;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 23;i_14 += 1)
        {
            {
                var_39 = (max(var_39, var_5));
                var_40 = var_11;
                var_41 = var_2;
            }
        }
    }
    #pragma endscop
}
