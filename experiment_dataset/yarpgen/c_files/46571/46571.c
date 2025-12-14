/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (max(var_20, ((((3057019930 || 140) ? (((max((arr_1 [i_0]), ((max(var_3, 145))))))) : 5377187800066516222)))));
        var_21 |= var_7;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_8 [i_0] [2] [i_0] [2] = (arr_2 [i_0]);
                arr_9 [i_0] [i_1] [i_2] &= var_3;
            }
            var_22 = max((max((max((arr_0 [i_0] [i_1]), var_7)), var_9)), ((min((max((arr_5 [i_0] [i_0] [1] [i_1]), var_17)), (((10120362702050653038 ? -1512699926 : (arr_0 [i_1] [i_1]))))))));
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [9] [i_3] [i_5] [i_5] [i_4] = (~var_18);
                        var_23 = var_10;
                    }
                }
            }
            arr_18 [i_3] [i_0] &= ((arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? ((((max(var_3, 4294967295))) ? (max((arr_16 [i_0] [i_0] [i_3] [i_3]), 1)) : var_15)) : (((((((arr_12 [i_0] [i_0] [2] [2]) | 4294967295))) ? ((~(arr_10 [i_0]))) : (arr_16 [i_0] [i_3] [i_0] [i_3 - 1])))));
        }
        var_24 *= (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [10] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
        arr_19 [i_0] = 739334177;
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = (((((+((var_0 ? (arr_0 [i_6] [i_6]) : 0))))) ? (max(((min(var_6, (arr_7 [i_6] [i_6] [i_6] [i_6])))), var_4)) : (((var_0 ? (((var_6 ? 3 : var_2))) : (max(var_12, (arr_3 [i_6] [i_6]))))))));
        arr_23 [i_6] [i_6] = (!4294967288);
        arr_24 [i_6] [3] = ((~(max(((min(var_8, var_0))), var_11))));
        var_25 -= (arr_3 [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = (!8548822004518491776);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {

                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            arr_40 [i_8] [i_10] [6] [i_8] [i_8] = (arr_16 [i_7] [i_8] [i_7] [i_10]);
                            var_26 -= ((((var_9 ? var_0 : var_18))));
                            arr_41 [i_11] [i_8] [i_8] [i_8] [i_8] [8] = ((!(!var_13)));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_45 [i_8] [i_10] [i_9] [i_8] [i_8] = (((max(1, (arr_16 [i_12] [i_9] [i_7] [i_7])))));
                            arr_46 [i_7] [i_7] [i_8] [i_9] [i_8] [i_8] [i_12] = ((!((max((arr_1 [i_8 - 1]), (arr_1 [i_8 - 1]))))));
                            var_27 = (arr_4 [i_12]);
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_28 = (min(var_28, ((max(var_0, (max(3476059477, 1)))))));
                            arr_51 [0] [i_8] [i_10] [i_8] = ((-(arr_39 [i_7] [i_8] [i_9] [i_10] [i_13])));
                        }
                        arr_52 [i_10] [i_10] [i_8] [i_8] [i_7] = var_7;
                        arr_53 [i_8] = 7521511225950495796;
                        var_29 = max((arr_1 [i_8 - 1]), (((!(arr_38 [i_8] [i_10] [i_10] [i_8] [i_10])))));
                    }
                }
            }
        }
    }
    var_30 = var_2;
    #pragma endscop
}
