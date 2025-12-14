/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((((!(arr_1 [i_0])))) <= 10)) ? ((max(var_12, (arr_0 [i_0])))) : var_11));
        arr_3 [i_0] = (((((arr_0 [i_0 - 1]) ? var_2 : (arr_0 [i_0 - 1]))) | (!70)));
        var_18 = ((-(((((max((arr_1 [i_0]), 75)))) + ((1069671100 ^ (arr_0 [i_0 + 1])))))));
        var_19 = (((133 ? ((var_0 ? 186 : 63211)) : 48305)));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = var_4;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_20 = (max(var_20, ((968473311 ? (var_17 + 968473311) : -17416))));
            arr_12 [14] [i_2] |= 63231;

            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                arr_16 [i_1] = (arr_7 [i_1]);
                var_21 = (var_15 || var_0);

                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_21 [i_5] [i_4] [i_5] [i_2] [i_1] &= (((arr_19 [i_5] [i_1 + 3] [i_4] [i_1] [i_5] [i_3]) ? 17238 : var_10));
                        arr_22 [i_1] = (arr_19 [i_1] [i_2] [i_3] [i_2] [i_5] [i_1]);
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_22 ^= 53;
                        arr_25 [i_1] [i_2] [i_1] [i_4] [i_1] [i_6] = (var_7 && -90);
                    }
                    arr_26 [i_1] [i_1] [i_3 + 2] = var_17;
                    arr_27 [i_1] [i_2] [i_3] [i_2] = -17416;
                }
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    arr_30 [i_1] [i_1] [i_3] = (((((2306 ? var_6 : (arr_9 [i_1] [i_2])))) ? ((87 ? var_17 : var_0)) : (arr_19 [i_1] [i_1] [i_3] [i_3 - 1] [i_3 + 2] [i_7 - 1])));
                    arr_31 [i_1] [i_2] [i_3] [i_1] = var_4;
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    var_23 = ((78 ? 28 : 3860671995));
                    arr_34 [i_1 + 2] [i_1] [i_3] [i_8] = 17416;
                }
            }
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                var_24 = ((var_14 ? var_14 : (!var_0)));
                var_25 = var_6;
            }
        }
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_39 [i_10] = ((min((arr_36 [i_10] [i_10] [i_10] [i_10]), var_6)));
        arr_40 [i_10] [i_10] = (((~var_17) ? ((-(max(33, var_11)))) : (((30939 - ((max(var_1, 51416))))))));
        arr_41 [i_10] = (((min((((arr_33 [i_10] [i_10] [i_10] [i_10]) & -1157755219)), (arr_5 [i_10])))) ? -var_1 : ((min(var_2, (!3064053489)))));
        var_26 = ((((max(var_16, var_16))) ? (((((34596 ? -15383 : 46309))) ? var_16 : var_17)) : (~20785)));
    }
    var_27 = ((var_16 <= (min((var_1 / var_10), (5062111511426468716 == var_11)))));
    #pragma endscop
}
