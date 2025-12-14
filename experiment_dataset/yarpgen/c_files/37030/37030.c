/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 5265536235923423717;
    var_21 = (max(var_21, -1));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_22 = (arr_3 [i_0 + 1] [i_0 + 2] [i_1]);
            var_23 = ((-((1 ? -1 : 5265536235923423710))));
            arr_5 [i_0 - 1] [i_0] [i_0] = ((var_13 || (!-18014397435740160)));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_0] = 6;
                var_24 = 14881;
                var_25 = (min(var_25, ((((arr_11 [i_0]) * (((arr_1 [i_0]) ? (arr_9 [1] [1] [i_3 + 2]) : 13181207837786127898)))))));
            }
            for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_20 [i_0] [i_2] [i_2] [i_2] [i_4 + 2] [i_5] = (((((~(arr_13 [i_0] [i_0] [i_0 - 1])))) ? ((((((arr_14 [i_5] [11] [i_2] [i_0]) | 35184372088831))) ? (arr_9 [i_0] [i_0 + 2] [i_4]) : (18446744073709551615 & var_1))) : var_3));
                    var_26 = (max(var_26, ((((((~(arr_7 [i_0 + 1] [i_0] [i_0 - 1])))) ? (min(((min((arr_6 [i_5]), (arr_15 [8])))), ((1 ? var_4 : 489276670088603727)))) : 9067122020900361308)))));
                }
                var_27 = (max((min((~var_15), -12)), var_4));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_28 = (max(var_28, (((2 * (min((((arr_17 [i_0] [i_0] [3] [3] [i_0] [i_6]) / 31)), (arr_21 [i_0 + 2]))))))));
                var_29 &= ((((((arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1]) & (!42)))) ? (min(-35182224605184, (arr_15 [14]))) : (arr_13 [4] [i_2] [4])));
            }
            var_30 = ((~((max((((!(arr_3 [i_0] [i_2] [i_2])))), (max(var_11, var_4)))))));
        }
        var_31 = (((14 ? (arr_0 [i_0 - 1]) : (((arr_6 [19]) ? var_3 : 1)))));
        var_32 = (max(var_32, ((((arr_3 [i_0] [i_0] [i_0 + 2]) / (max((arr_3 [i_0 - 1] [i_0] [i_0 + 1]), (arr_3 [i_0] [i_0 - 1] [i_0 + 1]))))))));
        var_33 = (((((1 ? (((((arr_8 [i_0]) >= (arr_1 [i_0]))))) : 6078082414763425931))) ? ((min(253, 511))) : (((arr_14 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2]) >> (((~255) + 271))))));
    }
    #pragma endscop
}
