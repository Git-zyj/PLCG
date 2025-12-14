/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 26;
        var_15 = (((arr_2 [i_0 + 1]) >= -26794));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    var_16 = var_0;
                    var_17 = (((arr_7 [i_1] [i_1 + 1] [i_4 - 2]) ? 14410210714322957750 : (arr_14 [i_1] [i_1 + 1])));
                }
                arr_15 [i_1] [i_2] [i_2] = 531284275;
                var_18 = ((!((((arr_1 [i_2]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]))))));
                arr_16 [i_1] = ((((((arr_5 [i_1 + 1]) ? var_3 : 31424710))) ? -83 : ((((((-(arr_10 [i_1] [i_2] [i_1])))) && var_6)))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                arr_19 [i_1] [i_1] [i_5] = (arr_18 [i_1 - 1] [i_2] [i_2] [i_1 + 1]);
                arr_20 [i_1] [i_1] [11] = (((arr_6 [15] [i_1]) ^ (~31424710)));

                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    var_19 = (arr_1 [i_1]);
                    var_20 = (arr_12 [i_1] [i_1] [7] [i_1]);
                    arr_23 [17] [17] [i_1] [17] [i_1 - 1] = (((((arr_6 [i_5] [i_1]) ? var_14 : var_13)) / (arr_1 [i_1 + 1])));
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    arr_28 [1] [i_1] [i_5] = ((2199006478336 ? 12 : 1));
                    var_21 = var_9;
                }
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
            {
                var_22 = var_1;
                var_23 = (arr_31 [i_1 + 1] [i_1 + 1]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_40 [i_1] = (((arr_5 [i_1 - 1]) >= (arr_0 [i_1])));
                            arr_41 [i_1] = (arr_33 [i_1] [i_1] [i_1 - 1] [i_1]);
                        }
                    }
                }
            }
            arr_42 [i_1] [17] = (((((arr_39 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_2]) >= (arr_39 [i_2] [i_2] [10] [i_1] [i_1 - 1]))) ? (((arr_39 [i_2] [i_2] [i_2] [i_1] [i_1 - 1]) - var_8)) : (!-83)));
        }
        var_24 = (-597277525 ? -673740613 : 22608);
        arr_43 [i_1] = (((!-106) ? (arr_33 [i_1] [i_1 + 1] [i_1] [i_1]) : (((var_3 || -2199006478336) ? (arr_10 [i_1] [i_1] [20]) : var_1))));
    }
    var_25 = (min(var_13, var_1));
    #pragma endscop
}
