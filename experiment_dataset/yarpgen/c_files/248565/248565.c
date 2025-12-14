/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_21 = (max(var_21, ((min(var_3, (max((!1), (((arr_1 [i_0] [i_0 - 1]) ^ var_18)))))))));
        var_22 |= (max((min(((-(arr_1 [i_0 + 2] [i_0]))), ((min((arr_2 [i_0] [i_0]), (arr_0 [i_0 - 4] [i_0 - 4])))))), ((~((max(var_17, var_1)))))));
        var_23 = (var_12 & var_4);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_24 *= ((1 ? var_4 : var_18));

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_13 [i_1] = ((((min(var_9, ((max((arr_1 [i_2] [i_3]), (arr_7 [i_2] [i_3] [i_2]))))))) ? ((var_8 ^ (arr_9 [i_1] [i_2] [i_2]))) : ((~(((!(arr_9 [i_1] [i_3] [i_1]))))))));
                        var_25 = ((((((!var_5) >> (((!(arr_5 [i_1] [i_2 + 1]))))))) ? (arr_6 [i_1] [i_2] [i_1]) : var_8));
                    }
                }
            }
            arr_14 [i_1] [i_1] [i_1] = (~var_7);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            var_26 = (min(var_26, var_14));
            arr_17 [i_1] [i_5] [i_5 - 1] = var_5;
            arr_18 [i_1] [i_5 + 1] [i_5] = ((var_7 ? var_0 : (arr_5 [i_1] [i_5 + 1])));
            arr_19 [i_1] [i_5] = ((-(arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_5 - 1])));
            arr_20 [i_1] = arr_6 [i_1] [i_5 + 2] [i_1];
        }
        arr_21 [i_1] = (min((((arr_1 [i_1] [i_1]) << (arr_9 [i_1] [i_1] [i_1]))), ((((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) <= (arr_8 [i_1]))))));
        var_27 = (((((arr_12 [i_1] [i_1]) + ((max((arr_12 [i_1] [i_1]), (arr_15 [i_1])))))) - ((((max((arr_1 [i_1] [i_1]), var_2))) + (arr_1 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_28 = (min(var_28, var_10));
                        var_29 = arr_1 [i_7] [i_1];
                        var_30 = -1;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            {
                var_31 = ((((max(((var_4 ? 4362862139015168 : var_11)), ((var_11 ? var_9 : var_1))))) ? ((~((-(arr_34 [i_9] [i_9]))))) : ((((var_10 > (arr_1 [i_10 - 2] [i_10 + 1])))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_32 &= ((!((((((var_15 ? 18446744073709551615 : (arr_36 [i_9])))) ? (!1) : -var_8)))));
                            var_33 = var_13;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            {
                var_34 = var_15;
                arr_48 [i_13] [i_14] [i_14] = (((((((var_17 ? var_9 : (arr_45 [i_13 - 1] [i_13 - 1])))) ? (arr_45 [i_13] [i_14]) : (min(var_7, (arr_43 [i_14]))))) | ((((var_10 ? 12695343893742104249 : var_5)) % (((((arr_45 [i_14] [i_13 + 2]) || var_12))))))));
            }
        }
    }
    var_35 += var_1;
    #pragma endscop
}
