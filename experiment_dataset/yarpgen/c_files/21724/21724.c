/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = ((-((+((6955274669947886758 ? (arr_2 [i_0]) : (arr_5 [i_1] [i_1])))))));
            var_17 &= ((23 ? -1 : 11491469403761664867));
            var_18 = (max(((max((arr_2 [i_0 - 2]), (arr_2 [i_0 + 1])))), (((arr_5 [i_0] [i_0]) - 2555021219))));
        }
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_2] = ((-((var_1 + (((arr_4 [9]) ? (arr_1 [i_2]) : var_12))))));
            var_19 = ((((2869382522 || (arr_7 [i_2]))) ? 65535 : ((-(arr_0 [i_2 - 1])))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [i_4] [i_4] [i_4] [1] = (max((arr_3 [i_3] [1] [4]), var_12));
                    var_20 = var_9;
                    var_21 = (arr_11 [i_0 - 1] [i_0 + 1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {
                    var_22 = ((~(~-23)));
                    var_23 = ((var_14 >= ((~(-90 & var_1)))));
                    arr_19 [i_0] [5] [i_6 - 1] &= ((-(arr_18 [i_0 + 1] [i_5] [i_6])));
                    var_24 = var_7;
                    var_25 = (min(((~(min((arr_3 [i_0] [i_5] [i_6 + 2]), var_12)))), (((((min(1, (arr_6 [i_0])))) && ((!(arr_12 [i_5]))))))));
                }
            }
        }
        arr_20 [1] = (arr_11 [i_0] [i_0 - 1]);
        var_26 = var_11;
    }
    for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_27 = ((var_5 ^ ((((var_7 ? var_12 : var_15)) * (((-(arr_17 [i_7] [i_7 + 1] [i_7 - 2] [i_7]))))))));
        arr_24 [i_7] = (arr_21 [i_7] [i_7 - 3]);
    }
    for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = (arr_1 [i_8]);
        var_28 = (arr_10 [i_8]);
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 13;i_11 += 1)
            {
                {
                    var_29 = ((-(((arr_35 [i_11 - 1] [i_11 + 2] [i_11 - 3] [i_11 + 2]) ? var_8 : (arr_35 [i_11 + 2] [i_11 - 2] [i_11 - 2] [i_11 - 4])))));
                    var_30 = (arr_30 [1]);
                }
            }
        }
    }
    var_31 = ((((var_8 ? var_12 : var_11))));
    #pragma endscop
}
