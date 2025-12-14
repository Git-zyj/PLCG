/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (30696 >= 30695);
        arr_5 [i_0] [i_0] = -30695;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] |= (((((arr_6 [8]) + 2147483647)) << (((!(arr_6 [i_1]))))));
        arr_9 [i_1] = (((((arr_6 [i_1]) + 2147483647)) << (((((arr_6 [i_1]) + 118)) - 22))));
        var_13 = (max(var_13, var_1));
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_14 |= (var_9 << (((arr_16 [i_3]) - 105)));
                arr_17 [4] [10] [4] [i_2 - 1] = (((var_4 <= -30679) ? (~var_8) : ((var_5 + (arr_14 [i_2] [i_3])))));
                arr_18 [i_3] [i_3] [i_2 - 1] [i_3] = (((((var_11 ? (arr_10 [i_2 - 1]) : 30689))) ? (arr_11 [i_4]) : ((((arr_15 [i_2] [i_3]) ? var_0 : 30679)))));
                var_15 = (((arr_12 [i_2]) ? (var_4 > 780419500) : ((-1024 & (arr_13 [i_3] [i_3])))));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {
                arr_21 [i_3] [i_3] [14] = (((arr_15 [i_2 - 1] [i_2 - 1]) >> (30681 || var_5)));
                var_16 = ((-30679 ? -30649 : -1042));
            }
            arr_22 [i_2] [6] [6] = var_2;
            var_17 = (!(((1026 ? 30688 : 30672))));
            var_18 = (max(var_18, (arr_16 [i_2])));
            arr_23 [i_2 - 1] |= ((var_10 + (arr_16 [i_2])));
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            arr_27 [i_6] = (((arr_24 [i_2] [i_2] [i_6 - 1]) ? (arr_24 [i_2] [i_6 - 2] [i_2]) : var_6));
            arr_28 [i_6] [i_6] = ((((-82 ^ (arr_24 [i_2] [1] [i_2]))) + var_10));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {

            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    arr_36 [i_7] [12] [8] [i_9] [12] = (~(arr_35 [i_2] [i_8 + 3] [i_2 - 1] [i_9]));
                    var_19 += ((30688 ? (~var_9) : (-30679 < 1024)));
                    arr_37 [i_2 - 1] [i_7] [i_7] = (((((var_6 ? 30692 : (arr_12 [i_2])))) && (((arr_13 [i_2 - 1] [i_2]) != var_4))));
                }
                arr_38 [i_2] [i_7] = ((!(((var_9 ? (arr_11 [i_2 - 1]) : 30680)))));
                arr_39 [i_2] [i_7] = ((25447 & (arr_20 [i_8] [i_7] [i_8])));
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                var_20 = (-30682 ? (arr_35 [i_2] [i_7] [i_10] [1]) : var_3);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_47 [i_2] [i_2] [i_10] [i_12] [i_12] [8] |= (((arr_30 [i_2 - 1] [i_7] [i_2 - 1]) == -30686));
                            var_21 = (((arr_11 [i_2]) ? (arr_35 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : -30658));
                            var_22 = (~(1017 + -1026));
                        }
                    }
                }
                arr_48 [i_2] [i_7] [i_10] [i_2] = (((100 - (arr_11 [i_2]))));
                arr_49 [10] [1] [1] [i_7] = ((-30689 ? 101 : (arr_45 [i_2 - 1] [1] [1])));
            }
            var_23 = ((arr_31 [i_2 - 1] [i_7] [i_7]) ? (arr_45 [i_2] [i_7] [i_2 - 1]) : -30690);
            arr_50 [i_2] [1] = ((((((arr_31 [i_2 - 1] [i_7] [i_7]) ? var_7 : var_8))) + (arr_41 [i_2] [i_2] [i_2])));
        }
        arr_51 [0] [0] = (((((var_3 ? -30682 : var_12))) ? var_1 : -85));
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 24;i_13 += 1)
    {
        var_24 = (((arr_54 [i_13 - 4]) >= 1025));
        var_25 = ((!(~-30690)));
        var_26 = (((arr_52 [i_13 - 3] [i_13 + 1]) >> ((((var_10 ? (arr_52 [i_13] [i_13 + 1]) : 1015)) - 14615738236160454546))));
        var_27 = ((!(arr_53 [i_13 - 4])));
        arr_55 [i_13] = ((!((var_9 || (arr_54 [i_13])))));
    }
    #pragma endscop
}
