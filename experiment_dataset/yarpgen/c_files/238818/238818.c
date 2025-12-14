/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (~var_8);
    var_20 = (!-2621);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = ((!(((-31128 ? 16128 : 2619)))));
        var_22 = var_2;

        for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_1 - 2]);
            arr_8 [i_0] [i_1] [i_0] = ((((!(arr_2 [i_0] [1])))));
            var_23 = var_5;
            arr_9 [i_1] = (!-1);
        }
        for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_24 = (max(var_24, (((-((((var_11 + (arr_6 [i_0] [i_2 + 1]))))))))));
                var_25 = 65531;
                arr_17 [i_2] [i_2 - 2] &= ((((~((var_5 ? var_18 : var_13))))) ? 2621 : var_1);
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
            {
                var_26 = var_0;
                arr_20 [i_2] [i_2] [i_4] &= (arr_5 [i_0] [i_0] [1]);
                var_27 = var_15;
                arr_21 [i_4] [12] [i_4] [i_4] = arr_3 [i_0];
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                var_28 = (!var_17);
                var_29 = (-1073741824 != ((2620 ? -4927 : (!828121814248699056))));
                var_30 = var_7;
            }
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                var_31 = ((!(-4927 % 110108701)));
                arr_26 [i_0] [i_0] = (~0);
                arr_27 [12] [i_2] [i_0] = 828121814248699056;
            }
            arr_28 [i_0] [i_2] = (arr_16 [i_0]);
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_32 = (!-1034908953);
            arr_33 [i_0] [i_7] [i_7] = ((~(~5333219919243811002)));
        }
        var_33 = (((49047 ? 1 : 3758299258827735300)));
        var_34 = var_10;
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_35 = (((~186) ? (((arr_37 [i_8]) * var_12)) : ((~(!var_2)))));
            var_36 = ((((((arr_12 [i_8] [i_9]) ? var_17 : (arr_12 [i_8] [i_9])))) ? (arr_12 [i_8] [i_9]) : ((13529 ? (arr_18 [i_9] [i_8] [6]) : (arr_18 [1] [i_9] [1])))));
        }
        var_37 = (min(var_37, ((((!-var_13) ? 13113524154465740592 : (6958 > -10157))))));
    }
    #pragma endscop
}
