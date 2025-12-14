/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((26 != -var_9) ? var_5 : var_2));
    var_11 = (var_8 ? (!-var_2) : 1);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 &= ((~((var_5 ? var_8 : (arr_1 [i_0])))));
        var_13 -= (+((1 ? (arr_2 [i_0]) : (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = (((((((max(var_4, var_2))) ? ((((arr_1 [i_0]) <= (arr_4 [i_0])))) : -var_2))) ? (arr_1 [i_0]) : var_3));
            arr_5 [i_0] = -6137382854770764468;
            arr_6 [6] = ((0 ? 4294967295 : 3673201812846276648));
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_2] = (((((-127 - 1) < (((!(arr_9 [i_0] [i_0])))))) ? var_4 : -26));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = ((((var_2 ? ((((var_4 == (arr_15 [i_0] [i_2 - 2] [18] [18] [i_5]))))) : (arr_0 [i_5]))) > 127));
                            arr_20 [i_0] [i_2 - 2] [i_5] [i_0] = ((((min((~var_2), (~4294967295)))) ? var_5 : ((~((var_6 ? 0 : (arr_16 [i_4] [i_4] [i_2] [i_0])))))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            arr_24 [i_0] [1] [i_6] = ((-7757 ? 1 : 0));

            /* vectorizable */
            for (int i_7 = 4; i_7 < 19;i_7 += 1)
            {
                arr_29 [i_7] = ((((var_8 ? (arr_0 [i_7]) : var_0)) - var_2));

                for (int i_8 = 4; i_8 < 19;i_8 += 1)
                {
                    arr_33 [i_6] [i_0] [i_6] [i_7 - 4] [i_6] [i_0] = ((-19 ? (((~(arr_26 [i_0] [17] [17])))) : (arr_12 [i_7 - 1] [i_7 + 1] [i_7 - 4] [i_7 - 4])));

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_37 [i_0] [i_7 - 3] [i_0] [i_0] = ((((((arr_30 [5] [5] [10] [i_8 + 1]) ? var_3 : var_1))) ? ((((!(arr_3 [i_0] [i_0] [i_0]))))) : (arr_34 [i_6] [i_8 - 4] [i_7 - 4] [i_6 + 1] [i_6])));
                        arr_38 [i_7] [i_7] = ((!(arr_26 [i_9] [i_0] [i_0])));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_16 = (max(var_16, (((1 | ((-(arr_12 [i_10] [i_8 - 3] [i_7 + 1] [i_0]))))))));
                        arr_43 [16] [i_10] [1] [i_0] [i_0] [i_0] [i_0] = arr_39 [i_0] [i_0] [i_7] [i_0] [i_0];
                        arr_44 [i_0] [19] [19] [4] [19] = ((var_3 - ((var_1 ? var_7 : var_3))));
                    }
                    var_17 = 4294967288;
                }
                var_18 = ((162 ? 36 : 19));
                arr_45 [i_0] [i_6 + 2] = (((arr_23 [i_6 + 3]) == ((403849214 ? -8579942980050885775 : -3646274136230677829))));
            }
            /* vectorizable */
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                arr_49 [i_0] [i_6 + 1] [i_6 + 1] [i_11 + 1] = (!var_6);
                arr_50 [i_0] [i_0] [i_0] [i_0] = (((((arr_35 [i_0] [i_0] [i_6 + 3] [i_11 + 1] [i_11 + 1]) ^ var_7)) % 1));
                arr_51 [15] [15] [15] [15] = (arr_42 [i_11 + 1] [i_6] [i_0] [i_0] [i_0]);
                var_19 = (((arr_7 [i_0] [i_0] [1]) ? var_9 : ((-(arr_35 [i_0] [i_0] [i_6 + 1] [1] [i_6 + 1])))));
                var_20 = (min(var_20, (((1 ? ((var_2 ? var_4 : var_3)) : var_4)))));
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        arr_60 [i_12] [i_12] = ((!((((((var_2 ? var_5 : -12))) ? (arr_13 [i_0] [7] [i_12] [i_13] [7] [0]) : (arr_41 [i_0] [i_12] [i_14] [i_13]))))));
                        var_21 = (min(var_21, (((~(!-1454077841147445872))))));
                    }
                }
            }
            var_22 = ((!(~1)));
        }
    }
    #pragma endscop
}
