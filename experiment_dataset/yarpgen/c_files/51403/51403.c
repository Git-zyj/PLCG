/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~(~var_8))) << (var_12 + 6164861188440365110));
    var_15 = 18446744073709551615;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((!(((~((max(1, 1))))))));
        var_17 = (((-(~1))) << (((min(-var_3, (max((arr_1 [i_0]), (arr_1 [i_0]))))) - 809230824)));
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        arr_3 [i_0] = 32755;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = (max(((min(var_1, (arr_4 [i_1])))), (arr_5 [i_1])));
        var_19 = (!((max((min(65535, (arr_5 [i_1]))), 65535))));
    }
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [9] [9] [i_2] [9] [i_2] = 1;
                        arr_20 [i_2] = (((((-1 ? (arr_11 [i_2] [i_3]) : -1))) || ((((65513 ? 0 : (arr_10 [i_2])))))));
                        var_20 = ((((!(arr_8 [i_2] [i_5]))) ? ((((((arr_5 [19]) && -1)) || 2128152477))) : var_7));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_25 [i_2] [i_3] [i_2] [i_2] = (min(1, (((6709985833242200806 ? 0 : -73)))));
                        arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] = 65535;
                    }
                    arr_27 [i_2] [i_3] [i_4] [i_2] = ((((min(63, (max((arr_0 [i_3] [i_2]), 237))))) ? (arr_10 [i_4]) : (arr_7 [i_2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 8;i_8 += 1)
            {
                {
                    arr_34 [i_2 + 2] [8] [i_8] [i_2] = (max((((arr_22 [i_7]) ? (arr_18 [4] [i_8 - 1] [4] [i_2]) : (arr_22 [i_2 - 1]))), var_13));
                    var_21 = (max(var_21, (579575616 <= 4467570830351532032)));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 13;i_11 += 1)
            {
                {

                    for (int i_12 = 1; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_9] [i_10] [i_11 + 2] [i_11 + 2] = (min((max((arr_36 [i_11]), 3715391700)), 15));
                        arr_48 [i_9 - 2] [i_10] [i_11 - 4] [i_10] = (arr_35 [i_9]);
                    }
                    for (int i_13 = 1; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        var_22 = 30178;
                        var_23 = ((((((((arr_41 [6]) + 2147483647)) << (((min((arr_46 [11] [i_10] [i_10] [14]), (arr_5 [i_9]))) - 8331655476215784356))))) ? var_0 : (arr_43 [i_13 - 1] [i_11 - 4] [i_11] [i_11])));
                    }
                    var_24 = ((-1 || ((((((arr_5 [i_10]) ? (arr_43 [i_9] [i_9] [i_9] [i_9 + 1]) : (arr_39 [i_9])))) || ((min((arr_40 [i_9] [i_10] [i_11]), (arr_1 [i_9]))))))));
                }
            }
        }
        arr_51 [i_9] = 371793549;
    }
    #pragma endscop
}
