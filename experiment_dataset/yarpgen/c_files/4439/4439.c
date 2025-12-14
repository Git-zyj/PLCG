/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((((max(-828926152575986689, (max(-828926152575986689, 828926152575986697))))) || (((((max(869799821, -1715527290))) ? (var_11 < 1) : -1895747152)))));
    var_19 += (36974 != -1);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_20 *= var_2;
        var_21 = ((var_15 ? var_13 : (arr_1 [i_0 - 2])));
        var_22 = var_13;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 = (max(var_23, var_1));

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 4; i_3 < 17;i_3 += 1)
            {
                var_24 += var_17;
                var_25 = (((arr_7 [i_3 - 1] [i_3] [8]) ? var_12 : (arr_7 [i_3 - 3] [5] [i_3])));
            }
            arr_9 [i_1] [14] = (max(828926152575986688, (((((-590050736 ? -6 : 828926152575986688))) ? ((((arr_4 [1] [i_2]) ? var_17 : 68))) : var_13))));
            var_26 = (min(var_26, (arr_8 [i_1] [i_2] [i_2])));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_27 = max(((max((arr_10 [i_1]), (arr_5 [17] [i_4])))), (max(-4811302941905172056, 1075062391)));
            arr_13 [i_1] = (((max(1237587510, -19) / var_12)));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_28 = (((max((arr_12 [i_5]), var_9)) == (max((arr_12 [i_5]), 384))));
            var_29 ^= (4782089255136968956 < 4228484396);
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            arr_19 [5] [1] [i_6] = 3535372871;
            var_30 = ((~((((41063 && 0) < 85)))));
        }
        var_31 = (4294967295 || -525595025957852953);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_24 [i_7] = (arr_12 [i_7]);
        arr_25 [i_7] = (arr_12 [i_7]);
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_32 += (max((-6348 / -6679716881632486602), ((max(41063, 1)))));
                            arr_39 [i_7] [1] [i_9] [2] [i_7] [i_7] = (max(-1715527314, var_8));
                        }
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            var_33 = ((57345 ? 18446744073709551615 : (!8191)));
                            var_34 += (max((3606789834965516309 != 32656), (max((arr_34 [i_8 - 3]), (arr_34 [i_8 - 3])))));
                            var_35 = (max(var_35, ((max(((-1636 == (65024 + 0))), (57344 < 3145267564))))));
                        }
                        var_36 = (max(((max((arr_6 [i_8 + 1] [i_8 - 2] [i_8 - 3]), var_11))), (max((arr_10 [i_8 + 1]), (arr_17 [i_8 - 2] [i_8 - 2])))));
                    }
                }
            }
        }
        arr_42 [i_7] [6] &= ((!((max(var_1, var_3)))));
    }
    #pragma endscop
}
