/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_10 > (((max(var_2, (27177 <= 17400)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_1] = (min((arr_5 [i_1]), (max((((arr_1 [i_0] [i_0]) + -46)), var_7))));
            var_18 = ((((!(arr_1 [i_1 + 1] [i_1 + 1]))) ? (((!(arr_1 [i_1 + 1] [i_1 + 1])))) : ((((arr_1 [i_1 + 1] [i_1 + 1]) || var_16)))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_11 [i_0] [i_1] [i_0] = var_15;

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_14 [i_1] = 4294967295;
                    var_19 = (arr_12 [i_0] [i_1] [i_2] [2] [1]);
                    var_20 = var_5;
                }
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    var_21 = (arr_3 [i_0]);

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_19 [8] [8] [i_2] [8] [i_0] [i_1] [13] = (arr_8 [i_1] [i_1] [i_1 + 1] [i_1 - 1]);
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] = ((var_5 ? (!var_7) : var_4));
                        var_22 += (~11);
                        var_23 = (arr_16 [21] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_24 = ((arr_4 [i_6 - 1] [i_1] [i_0]) & (var_4 < var_0));
                        var_25 -= ((var_7 && (~250)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_27 [i_0] [19] [19] = (((-9906 ? var_1 : -7856)));
            arr_28 [10] [i_7] = (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_26 = (min(var_26, ((((var_12 >= -8489) ? var_14 : 46)))));
        }

        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            arr_31 [i_8] = (((((-8509 ? 98 : ((1018131962 ? var_9 : 12177))))) ? (1018131961 || 4) : -var_16));
            var_27 = (((~(arr_21 [i_0]))));
            arr_32 [i_8] [i_8] [i_8] = (!var_7);
            var_28 = (((arr_29 [i_0] [i_0]) ? (((arr_9 [i_0] [i_8 + 2] [i_8 + 2] [i_8 + 2]) ? (arr_9 [i_0] [i_0] [i_8 + 1] [i_8 + 2]) : (arr_9 [i_0] [i_0] [i_8 + 2] [i_8 - 1]))) : (((min((min(-4161, -4155)), (((!(arr_7 [i_8] [i_0] [i_0] [i_0]))))))))));
        }
        var_29 = (((!224) > var_3));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_36 [i_9] = var_12;
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_44 [i_12] [i_12] [18] [i_12] = ((var_0 ? (((min((!232), (4159 > 21681))))) : (((((-10195 ? var_12 : var_0))) ? var_0 : (var_8 < var_16)))));
                        arr_45 [i_12] [i_12] [i_12] [i_12] = min(((max(18, var_4))), (397272729 - 110));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 14;i_13 += 1)
    {
        arr_48 [i_13] [i_13 - 1] = (-1268008337 ? (arr_15 [i_13] [i_13] [i_13] [9] [i_13 + 2] [i_13 + 1]) : var_7);
        var_30 = (var_15 | var_7);
        arr_49 [i_13 - 1] = ((var_15 ? (~2377304908) : (45 + 3276835314)));
    }
    #pragma endscop
}
