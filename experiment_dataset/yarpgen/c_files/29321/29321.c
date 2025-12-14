/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 ^= ((((!((max((arr_1 [i_0]), (arr_3 [i_0])))))) ? (min(((-(arr_2 [4]))), 92739215)) : (arr_4 [i_0])));
                arr_5 [i_0] [i_1] = max(((((42442 >= 25390591) ? 1948173333 : 2346793981))), (arr_3 [i_1 - 2]));
                arr_6 [14] = ((((~(min(-9124723435687788893, -2135501359)))) / var_8));
                var_15 = (((270215977642229760 ? 40 : 0)));
            }
        }
    }
    var_16 = var_12;
    var_17 = var_9;

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_15 [i_3] = (min(-4755645512099964678, 1));
            arr_16 [i_3] [i_3] [i_3] = ((arr_12 [i_2 + 1]) ? var_9 : (((~(arr_12 [i_3 - 1])))));
            arr_17 [i_3] [i_3] = ((12 ? ((((arr_14 [i_2 + 2] [i_2 + 2]) ? (arr_14 [i_2 + 3] [i_2 - 1]) : (arr_14 [i_2 - 1] [i_2 + 1])))) : (((arr_7 [i_3 + 2]) ? (arr_14 [i_2 + 3] [i_2 + 2]) : var_1))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_2] = (~(((((-(arr_3 [i_5])))) ? (~11622688914713552401) : (arr_1 [i_2 + 3]))));
                        var_18 = var_3;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_28 [1] [10] [1] [i_7] = var_5;
                        arr_29 [i_7] [i_4] [i_4] [i_2 + 3] = ((!((min((arr_2 [i_2 - 1]), var_1)))));
                        arr_30 [i_4] [i_5] [i_7] = (max((((arr_18 [i_2 + 2]) ? (~-1141082651081564779) : (min(18176528096067321837, var_11)))), ((max((~427247789), 1)))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_19 = 1;
                            arr_34 [2] [2] [i_5] = (((((!270215977642229779) ^ var_4)) & ((min((((arr_31 [i_2 - 1] [i_5]) ? (arr_14 [i_4] [7]) : 0)), (arr_8 [i_2]))))));
                        }
                    }
                    arr_35 [i_2] [i_4] = (arr_10 [i_5 + 2] [i_2 + 2]);
                    var_20 = (-((((max((arr_9 [i_2] [i_5]), (arr_4 [i_5])))) ? (arr_3 [i_2]) : (((max(1, (arr_12 [i_5]))))))));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 8;i_9 += 1)
    {
        arr_38 [i_9] = var_13;
        var_21 *= ((((max(1, (min(0, 4410651347288358062))))) & (((var_12 ? 1 : 1)))));
        arr_39 [i_9] = min((7461596773303263400 | 1948173333), (((var_10 <= (arr_18 [i_9])))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 6;i_10 += 1)
    {
        arr_43 [6] = (arr_37 [i_10 - 2] [i_10]);

        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            var_22 = (arr_45 [i_11] [i_11] [i_10 + 3]);
            arr_47 [i_10] [i_11] = (arr_2 [i_10 - 1]);
        }
        for (int i_12 = 2; i_12 < 6;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    {
                        var_23 = (((((14076724255599884062 ? -788526837 : 4581681199316767980))) ? (arr_14 [i_10] [i_12]) : (arr_31 [i_10 + 2] [i_12 - 2])));
                        arr_55 [i_10] [i_10] &= (var_10 ? var_10 : (arr_8 [i_10 - 1]));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 7;i_16 += 1)
                {
                    {
                        var_24 *= -var_6;
                        var_25 = (((arr_33 [i_10 + 1] [i_12 + 1]) ? 175 : 14076724255599884061));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    {
                        var_26 -= var_1;
                        arr_67 [i_10] [i_12 + 3] [i_17] [i_18] = arr_54 [i_10 - 2] [i_12 + 2] [i_10 - 2] [i_12 + 3];
                    }
                }
            }
        }
        arr_68 [i_10] = (~var_5);
    }
    #pragma endscop
}
