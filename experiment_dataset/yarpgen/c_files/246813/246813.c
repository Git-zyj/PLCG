/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (~11750590269029594734);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 &= var_10;
                    var_21 = ((var_7 ? var_11 : ((((!(arr_1 [12] [i_0])))))));
                }
            }
        }
        var_22 = ((arr_6 [i_0] [i_0]) | (min((var_12 && var_8), var_16)));
        var_23 = ((((((arr_3 [i_0 + 2]) < var_6))) + (~var_7)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_24 = (!var_17);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_25 = (((var_4 + 9223372036854775807) >> (var_7 != 63)));
                            var_26 -= (arr_21 [1] [i_4] [i_7] [i_6] [i_7] [i_7] [i_6 + 1]);
                            arr_22 [i_3] [i_6 - 2] [i_5] [i_4] [4] [i_3] = var_6;
                        }
                    }
                }
            }
            var_27 = -599639331;
        }
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            var_28 = (var_7 % var_8);
            var_29 = (min(var_29, 0));
        }
        var_30 *= var_0;
        var_31 = var_0;
        var_32 = (var_2 ^ 419486631);
        var_33 *= ((var_6 ? (arr_24 [i_3 + 1]) : (arr_24 [i_3 + 1])));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_34 = (((arr_16 [i_9] [i_9] [2] [i_9]) ? (max(((var_4 ? var_1 : (-9223372036854775807 - 1))), (arr_12 [6]))) : var_7));
        var_35 &= (max((((0 >= (var_11 | var_18)))), (max((var_6 + 12), (var_16 < var_1)))));
        var_36 = ((((((arr_6 [i_9] [i_9]) != (arr_6 [i_9] [i_9])))) ^ var_3));
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_37 -= ((~(((arr_26 [i_10]) ? var_17 : (arr_26 [i_10])))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 8;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        var_38 |= (((((arr_26 [i_12 - 2]) <= (arr_29 [i_10] [i_12 - 2]))) ? (((!(~var_16)))) : (((3154249208 ? -1 : 252)))));
                        var_39 -= ((((var_19 > (~1))) ? (arr_11 [10] [1]) : ((~(min((arr_25 [i_13] [i_11]), (arr_10 [i_10] [i_11] [i_11])))))));
                        var_40 = (min(var_40, ((((((((arr_13 [i_10] [i_11] [9]) + var_7)) ^ var_16)) < (((~(4611684918915760128 && var_15)))))))));
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_41 -= var_16;
                        var_42 = (min(var_42, (arr_6 [i_10] [14])));
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 8;i_15 += 1)
                    {
                        arr_41 [i_10] [i_11] [i_11] [i_12 + 2] [i_15] = ((~(((var_18 != (arr_18 [i_11]))))));
                        arr_42 [i_15] [i_15] [i_15] = (var_3 * 0);
                    }
                    var_43 *= var_8;
                }
            }
        }
    }
    var_44 = (((((var_0 ? var_14 : (((var_18 ? 1326209792 : var_19)))))) ? ((var_0 % ((var_1 ? var_11 : var_2)))) : (((4503599593816064 ? -25391 : ((var_16 ? -4503599593816065 : 1)))))));
    var_45 = (min(var_45, (var_18 == 1)));
    #pragma endscop
}
