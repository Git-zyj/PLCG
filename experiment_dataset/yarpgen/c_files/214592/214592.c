/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (!(((var_12 ? (var_12 <= var_13) : ((min(var_10, 4)))))));
    var_16 = (min(var_16, ((min(var_8, (-var_3 ^ var_14))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 *= (((arr_0 [i_0]) << (272868818 - 272868811)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] [4] [i_1] [i_0] = 27571;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 ^= (((arr_10 [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 + 1]) ? 39088 : (arr_7 [i_1] [i_1])));
                                var_19 -= var_6;
                            }
                        }
                    }
                    arr_14 [i_1] |= (((~var_8) >> (52980 - 52946)));
                }
            }
        }
        var_20 = (min(var_20, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [6])));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_21 = (~var_10);
            arr_19 [i_6] = ((-((-(arr_0 [i_5])))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_22 *= (!0);
                            arr_27 [i_5] [i_5] = (~-var_5);
                            var_23 += 45;
                            var_24 = (max(var_24, (((var_5 ? -1 : (arr_8 [i_7] [i_7] [i_7 - 1] [i_7 - 2]))))));
                        }
                    }
                }
            }
            var_25 -= ((!(arr_8 [i_5] [i_6] [i_6] [i_5])));
            var_26 += var_4;
        }
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            var_27 = min((min((((var_1 ? var_10 : var_13))), (((arr_12 [i_5] [i_5] [i_10] [i_5] [14] [i_5] [2]) ? (arr_20 [i_10]) : 1)))), (min((arr_25 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1]), (var_9 - var_7))));

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_28 = (((arr_10 [i_5] [i_10] [i_11] [i_5] [i_5]) >> (var_6 - 26707)));
                var_29 = ((((min((arr_24 [i_5] [i_11]), ((var_3 ? (arr_32 [i_5] [i_5] [i_5] [i_5]) : 32738))))) ? (min(51023, (arr_32 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 2]))) : (min((max(var_4, var_8)), 115))));
                var_30 = (max(var_30, (arr_8 [i_5] [i_10] [i_11] [12])));
            }
        }
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            arr_36 [i_5] [i_12] = (max(((max((max((arr_26 [i_5] [i_5] [i_5] [i_5] [i_12] [i_12 + 1]), (arr_3 [i_5] [i_5] [0]))), 1))), (arr_5 [i_5] [i_12])));
            var_31 -= ((+((((arr_3 [i_12] [i_12] [i_12]) < 1)))));
            arr_37 [i_12] [i_12] = var_6;
        }
        arr_38 [i_5] [10] = min((((((((12727 ? -76 : 27296)) + 2147483647)) << ((((~(arr_30 [i_5] [i_5] [i_5]))) - 999954865175033556))))), ((~(46701 ^ var_8))));
        arr_39 [i_5] = ((min(-var_0, (arr_1 [7]))));
        var_32 = (((((6478778258952234055 / (arr_3 [i_5] [i_5] [i_5])))) ? (!1) : (39298 || var_3)));
        arr_40 [i_5] [i_5] |= var_2;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        arr_44 [i_13] = (((((var_4 ? 1 : -1))) ? var_13 : (arr_0 [i_13])));
        arr_45 [i_13] = (1 >= var_1);
    }
    var_33 = (min((((249 ? (max(2017523918, var_4)) : (((var_2 ? var_4 : var_13)))))), (max(var_6, var_1))));
    #pragma endscop
}
