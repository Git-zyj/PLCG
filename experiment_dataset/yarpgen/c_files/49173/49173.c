/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = var_6;
        var_13 = (max(-23, 1));
        var_14 = ((((((arr_1 [i_0] [i_0]) > 8456))) == (!249)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((((23 ? var_0 : (arr_3 [i_1])))) && (((var_6 % (1748211139 + var_2)))));
        var_15 = (min(var_15, (((~((var_9 << (var_2 - 28662))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_16 = (~6);

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_17 = 23;
                        var_18 = (((arr_7 [i_2] [i_1]) ^ (((((arr_12 [i_1] [i_1] [i_2 + 2] [i_1] [i_1] [i_4]) ? 978972349 : var_0)) + 0))));
                    }
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_19 |= var_1;
                        arr_16 [i_1] [i_1] [i_3] = (~(var_3 > 8730789475020209507));
                    }
                    var_20 = (max(((((-2109679341 != var_10) > ((7 ? -79 : -11334))))), (min(((var_1 / (arr_11 [i_1] [i_1] [i_1] [i_3]))), -79))));
                }
            }
        }
        var_21 = (((arr_11 [i_1] [14] [i_1] [i_1]) == (max(var_3, (min(131941395333120, 82))))));

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_22 = (max(var_22, var_7));
            var_23 = 112;
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            var_24 = (((arr_7 [i_7] [i_7]) ? var_4 : (arr_12 [i_7] [i_7 - 1] [i_7 - 2] [1] [13] [i_1])));

            for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
            {
                var_25 -= (var_8 != 156);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_31 [i_1] [i_7] [i_8 + 1] [i_9] [i_1] [i_7] = ((~(arr_20 [i_7] [i_7])));
                            arr_32 [i_10 - 2] [i_7] [8] [i_7] [i_1] = var_1;
                            var_26 = (min(var_26, (arr_10 [i_8] [i_8 + 1] [i_9] [i_9])));
                        }
                    }
                }
            }
            for (int i_11 = 2; i_11 < 17;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_27 = var_7;
                            arr_40 [i_1] |= ((var_8 ? -5 : (arr_29 [i_1] [i_1] [i_12] [i_1])));
                            arr_41 [i_7] [4] [i_7] [i_1] [i_1] = var_1;
                            var_28 = (max(var_28, (((var_2 ? -79 : 2109679339)))));
                        }
                    }
                }
                var_29 = (min(var_29, (((-291759425 * (!-23))))));
                var_30 = (min(var_30, 5423275558392036619));
            }
            for (int i_14 = 2; i_14 < 17;i_14 += 1) /* same iter space */
            {
                var_31 = ((arr_33 [i_7 - 3] [i_7 - 3] [i_14 - 2]) ? (arr_33 [i_7 - 2] [i_7 - 1] [i_14 + 1]) : 47052);
                var_32 = ((-67 && (((arr_38 [3] [i_7 - 1] [3] [i_7] [i_7 - 3] [3] [i_7 - 3]) || 1365145170))));
                var_33 = (max(var_33, ((((((var_2 ? var_0 : var_9))) ? -var_9 : (!var_2))))));
            }
        }
        for (int i_15 = 3; i_15 < 17;i_15 += 1)
        {
            var_34 = (((min(8191, 0))) ? ((-12 ? -8310300396452085957 : -291759425)) : (arr_6 [i_15] [i_15 + 1]));
            var_35 = (((((min(-36, (arr_2 [i_1] [i_1])))) ? (((arr_15 [i_1] [i_1] [1] [i_15 - 1] [i_15]) ? var_8 : var_6)) : (1 > -24))));
        }
    }
    var_36 |= ((var_0 ? (min(-128, -43)) : (((var_1 && (~1))))));
    #pragma endscop
}
