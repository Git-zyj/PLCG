/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (0 ^ -6592234166833340317)));
        arr_2 [i_0] = (((!var_16) ^ (!-1)));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 2] [i_1] = var_4;
        arr_8 [i_1 - 2] = (min((max(((var_19 ? var_14 : var_18)), ((7141291711784594816 ? var_12 : (arr_3 [1]))))), ((min(3270870000, 1)))));
        var_21 = ((-(((arr_6 [3] [i_1 + 1]) & var_14))));
        var_22 += (((var_9 ? var_11 : var_18)));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_23 = var_1;
        arr_12 [i_2 + 2] = var_17;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_24 = ((!(arr_11 [i_3])));
        var_25 = (max(var_4, ((((((arr_11 [8]) ? var_15 : (arr_13 [i_3])))) ? (arr_9 [13] [i_3]) : 0))));
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            arr_19 [i_4] [i_4] [4] = (var_17 / var_19);
            var_26 -= (((arr_10 [i_5 + 3] [i_5 + 1]) > var_4));
            var_27 = var_6;
            var_28 = (((1822588865 ? 0 : -7469046670784053911)) + 266920601);
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                var_29 = (var_10 & -12570);
                var_30 |= var_13;

                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    arr_27 [i_8] [i_8] [i_8 - 1] = ((-(((arr_5 [i_6 - 1] [i_7 - 2]) ? var_14 : var_1))));
                    var_31 = var_5;
                }
            }
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                arr_31 [i_4] = (((var_17 > 1) & ((min(var_10, (arr_18 [i_9] [i_6 - 1] [i_4]))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 6;i_11 += 1)
                    {
                        {
                            arr_36 [6] [i_11] [i_9] [i_10] [i_9] = ((var_1 ? var_15 : (!var_18)));
                            var_32 = (((arr_13 [19]) & var_8));
                            var_33 = (max(var_33, (((!((min(1, 1))))))));
                        }
                    }
                }
                var_34 = ((((min((arr_4 [i_4]), (arr_26 [i_4] [i_4] [9] [i_4] [i_4] [9])))) ? (((arr_14 [i_6 - 1]) ^ var_6)) : ((((((arr_14 [i_4]) & (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (max((arr_20 [i_4]), var_18)) : var_10))));
            }
            var_35 = (((var_1 ^ var_13) ? (((var_5 ? (arr_24 [i_4] [i_6] [i_6] [i_6] [i_6 - 1]) : (!20)))) : var_12));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    {
                        arr_43 [i_4] [i_13] [i_12] [i_13 + 2] = var_11;
                        arr_44 [i_4] [6] [6] [6] &= (arr_23 [2] [i_6] [i_13 - 1]);
                        var_36 -= (((-2032121131 ? 18446744073709551588 : 99)));
                        var_37 = (max(var_5, ((((arr_3 [i_4]) ^ (!var_17))))));
                        arr_45 [i_4] [i_4] [i_13] = (((((arr_34 [i_6 - 1] [i_6 - 1] [i_12] [i_13 - 1] [8]) ? (max(var_17, var_12)) : (((var_19 ? var_3 : (arr_18 [i_4] [i_12] [0])))))) ^ (var_10 ^ var_16)));
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            var_38 = (min(var_38, (((((((1628207223651904290 / var_8) ^ ((((arr_40 [i_4] [i_14] [i_14] [9] [i_14] [i_14]) ? 1 : var_13)))))) ? ((var_11 ? (((var_4 ? var_18 : (arr_4 [i_14])))) : ((18446744073709551607 ? var_12 : (arr_20 [i_14]))))) : ((max(1864295364, 4863300))))))));
            var_39 |= ((((var_15 ? var_2 : var_5)) == var_4));
        }
        arr_49 [i_4] = (((var_3 ^ var_3) > (((((arr_34 [i_4] [i_4] [i_4] [i_4] [4]) ? var_2 : (arr_39 [i_4] [i_4] [6] [2] [i_4] [8])))))));
        var_40 = (!(!var_2));
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] = (max((arr_24 [i_15] [i_15] [i_15] [i_15] [i_15]), ((((arr_26 [i_15] [i_15] [i_15] [0] [i_15] [i_15]) == var_0)))));
        var_41 = (min((((var_1 ? var_2 : (arr_17 [i_15])))), ((var_8 == ((var_4 ? var_13 : var_7))))));
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
    {
        var_42 = (max(var_42, ((((max(var_7, var_17)) == (((min(var_6, (max(var_6, (arr_9 [9] [i_16]))))))))))));
        arr_57 [i_16] [i_16] = var_15;
    }
    var_43 = (-(10987 == 1));
    #pragma endscop
}
