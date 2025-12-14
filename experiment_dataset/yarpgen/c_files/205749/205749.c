/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-(~var_6));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = (min(-32, (min(1, (~14631)))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                }
            }
        }
        var_12 = (!var_0);

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_14 [i_0] [i_3] [i_0] &= (--14648);
            arr_15 [4] [i_0] [i_0] = ((-(((((var_8 ? 6998455555867212362 : (arr_6 [i_0] [i_3] [i_0])))) ? (arr_2 [i_0]) : (~var_9)))));
            var_13 = var_3;
        }
        var_14 = ((~((-(min(var_9, var_6))))));

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_18 [i_0] [i_0] = (arr_12 [i_0] [i_0]);
            var_15 = (min((((~(min(var_6, var_1))))), (var_4 ^ var_5)));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_21 [i_0] = (i_0 % 2 == 0) ? (((((arr_0 [i_0]) & var_10)) << (((arr_12 [i_0] [i_0]) + (((arr_1 [i_5]) * (arr_7 [i_0] [i_0] [i_0] [i_5]))))))) : (((((arr_0 [i_0]) & var_10)) << (((((((arr_12 [i_0] [i_0]) + (((arr_1 [i_5]) * (arr_7 [i_0] [i_0] [i_0] [i_5]))))) + 1087876281)) - 13))));
            arr_22 [i_0] [i_0] = (arr_16 [i_0]);
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_16 *= (~var_6);
        arr_25 [i_6] = (((!1) && ((max((min((arr_23 [i_6] [i_6]), (arr_23 [i_6] [i_6]))), ((~(arr_23 [i_6] [i_6]))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = var_7;
        var_17 = (max(var_17, (((9934909549131713385 + (!419501375416375006))))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_39 [i_8] [15] [i_10 + 1] [i_11] = (((((~(arr_33 [i_10 + 1] [i_8] [i_11] [i_9 - 1])))) ? ((min((arr_33 [i_10 + 1] [i_9] [5] [i_9 - 1]), var_10))) : var_9));
                        arr_40 [7] [i_9] [i_10 - 1] = ((((((-2147483647 - 1) * 1))) ? var_1 : ((-(arr_24 [i_9 + 2] [i_10 + 1])))));

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_18 = ((var_8 >= ((min((arr_26 [i_11]), (arr_29 [i_8]))))));
                            arr_43 [i_9] [i_10] [i_11] [i_12] = (arr_37 [i_8] [i_9] [i_10 + 1] [i_11] [i_11]);
                            var_19 = (((!(1 < var_3))));
                        }
                        var_20 = ((~(((!var_9) ? ((((arr_30 [4]) == var_5))) : (-2147483647 - 1)))));
                    }
                }
            }
            arr_44 [i_8] = var_4;
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_21 = (min(var_21, (((!((((((var_6 ? (arr_31 [i_14]) : var_0))) ? (~var_5) : (((min((arr_45 [i_8] [i_8]), 3139))))))))))));
                arr_49 [i_8] [1] [i_13] [i_14] = (max((((~(-127 - 1)))), (max(var_6, (max(56213, 6327918195331745697))))));
            }
            var_22 = (!1);
        }
        /* LoopNest 3 */
        for (int i_15 = 3; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    {
                        arr_57 [i_16] [i_16] [i_15 + 1] [i_17] = (arr_29 [i_17]);
                        var_23 = (arr_46 [i_8]);
                        var_24 = (((arr_33 [i_15 - 2] [i_15 - 2] [i_15 - 1] [i_15 - 3]) * ((~(arr_46 [i_15 + 1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 16;i_19 += 1)
            {
                {
                    arr_64 [i_18] [0] = (~var_10);
                    arr_65 [i_8] [i_8] [i_18] [i_18] = var_2;
                    var_25 += (!(arr_42 [i_8] [i_8] [i_18] [i_18] [i_18] [i_19 + 1] [i_19]));

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        arr_68 [i_20] [i_18] [i_19] [i_8] = var_4;
                        arr_69 [i_8] [i_19] [i_19] [5] [i_8] [i_8] = ((!((((arr_29 [i_18]) ? (arr_59 [i_18] [i_18]) : 244)))));
                        arr_70 [i_8] [5] [0] [i_8] = 18845;
                    }
                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        arr_73 [i_8] [i_18] [i_19] [i_21] = var_6;
                        arr_74 [i_8] [i_8] [i_18] [i_18] [i_18] [i_18] = (~-116);
                    }
                    arr_75 [i_8] [i_8] [1] [i_8] = (((((~(((arr_61 [i_19 - 1] [i_8] [i_8]) ? (arr_32 [i_19] [i_18] [i_19]) : var_7))))) >= -4073640206413400561));
                }
            }
        }
        arr_76 [i_8] [i_8] = (arr_32 [i_8] [15] [i_8]);
    }
    #pragma endscop
}
