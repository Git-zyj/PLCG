/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 = var_1;
        var_16 = ((var_11 ? (((((var_8 ? var_13 : var_10))) ? var_4 : (arr_1 [18]))) : (((((var_8 ? var_1 : var_5)))))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_17 = (max(var_17, (((!(!var_5))))));
            var_18 &= ((((((arr_4 [i_0] [i_1]) ? var_8 : ((((arr_4 [i_0] [i_1]) << (var_12 - 13063519736698247753))))))) ? (((((arr_2 [i_0 - 2] [i_1]) ? var_5 : var_8)))) : (var_3 >= var_5)));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_19 = (((((var_2 ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 3])))) ? (arr_3 [i_0 - 2]) : (!var_6)));
                            var_20 = ((arr_4 [i_1 - 1] [i_0 - 1]) >> (((((arr_11 [i_0] [i_2 + 1] [i_2] [i_0 - 1] [i_4] [i_2] [i_0]) + var_11)) + 726518118120034303)));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_16 [16] [i_0] [i_5] = (i_0 % 2 == 0) ? ((((((var_7 << (((((arr_7 [i_1] [13]) ? (arr_14 [i_0] [i_0] [i_0]) : var_13)) - 2746821091867086986))))) ? (!var_1) : ((var_1 ? var_10 : (arr_8 [i_0] [i_1 - 2] [11] [i_0])))))) : ((((((var_7 << (((((((arr_7 [i_1] [13]) ? (arr_14 [i_0] [i_0] [i_0]) : var_13)) - 2746821091867086986)) - 1276872870499938024))))) ? (!var_1) : ((var_1 ? var_10 : (arr_8 [i_0] [i_1 - 2] [11] [i_0]))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_21 [i_1] [i_1] [i_0] [i_1] [i_0] [i_1] = (arr_15 [i_0]);
                            arr_22 [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = (arr_10 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1]);
                            var_21 = ((~(((arr_12 [i_0] [i_0] [i_0 - 3] [i_0] [i_1 + 2]) ? (arr_5 [i_0]) : (!var_5)))));
                        }
                    }
                }
                var_22 = (-(arr_10 [i_0] [18] [i_0 - 3] [3]));
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_23 = (max(var_23, var_3));
            var_24 &= var_13;
            var_25 = (((((var_7 ? ((var_3 ? var_3 : var_1)) : (((var_1 ? var_10 : var_0)))))) ? (arr_15 [i_0 + 1]) : var_12));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                arr_35 [i_0] [i_9] [i_9] [i_0 - 1] = (((arr_7 [17] [17]) >> (((arr_17 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 3]) ? (arr_25 [i_0 + 1] [i_0] [i_0 - 2]) : (arr_25 [i_0 - 2] [i_0] [i_0 + 1])))));
                var_26 = (((((var_4 & ((var_11 ? var_0 : var_9))))) ? var_1 : (!var_2)));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                arr_39 [i_0 - 2] [18] &= var_9;
                var_27 += ((~(arr_23 [i_0] [i_0 - 2] [16])));
            }
            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                var_28 = (-(((arr_8 [i_0] [i_0 - 2] [i_0] [i_0 - 1]) ? ((var_10 ? var_0 : var_1)) : ((var_5 ? var_11 : (arr_4 [i_0] [i_0 - 3]))))));
                var_29 = (((arr_24 [i_0] [i_9]) ? var_5 : ((var_8 ? (arr_23 [i_0 - 3] [i_12 + 3] [i_12]) : var_13))));
                var_30 = var_0;
            }
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {

                for (int i_14 = 3; i_14 < 19;i_14 += 1)
                {
                    var_31 = -var_1;
                    var_32 &= -var_3;
                    var_33 = (arr_46 [i_14] [i_13] [i_13] [i_9] [i_9] [i_0 - 2]);
                }
                for (int i_15 = 2; i_15 < 18;i_15 += 1)
                {
                    var_34 = (i_0 % 2 == zero) ? ((+((((arr_24 [i_0] [i_9]) >> (((arr_42 [i_0] [i_0] [i_13 + 1]) - 14170527353799304955))))))) : ((+((((arr_24 [i_0] [i_9]) >> (((((arr_42 [i_0] [i_0] [i_13 + 1]) - 14170527353799304955)) - 2745333221791330942)))))));
                    var_35 = (((arr_12 [i_9] [i_15 + 1] [i_15] [i_15] [16]) ? var_1 : var_6));

                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        var_36 = (max(var_36, var_10));
                        arr_55 [i_0] [i_0] [i_13] [i_16] = var_3;
                    }
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        var_37 = (((((-var_8 ? var_5 : ((var_2 ? (arr_8 [i_0] [i_0] [i_0] [9]) : var_7))))) ? var_9 : (((arr_37 [i_15 + 1] [i_13 - 1] [i_13]) ? (arr_37 [i_15 + 2] [i_13 + 1] [i_13 - 1]) : var_12))));
                        var_38 = (min(var_38, (arr_42 [i_15] [i_15] [i_15])));
                    }
                }
                for (int i_18 = 1; i_18 < 19;i_18 += 1)
                {
                    var_39 = var_13;
                    var_40 &= var_2;
                    var_41 += (!var_7);
                    var_42 ^= var_13;
                }
                arr_60 [i_0] [i_9] = (~var_12);
            }
            var_43 = ((((((arr_31 [i_0 - 3] [i_9] [i_9]) ? var_3 : (var_4 + var_8)))) ? (var_4 < var_10) : ((var_10 ? var_4 : (arr_52 [i_0 - 3] [i_0])))));
            var_44 = (arr_42 [i_0] [i_0] [i_9]);
        }
    }
    for (int i_19 = 0; i_19 < 17;i_19 += 1)
    {
        var_45 = (((arr_9 [i_19] [i_19] [i_19] [i_19] [i_19]) ^ var_11));
        arr_64 [i_19] = (arr_6 [i_19] [i_19] [0] [i_19]);
    }
    #pragma endscop
}
