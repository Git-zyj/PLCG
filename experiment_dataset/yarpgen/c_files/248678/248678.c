/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 2] [i_1] [i_0 + 2] [i_2] = ((~(arr_0 [i_0])));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [3] [i_2] [i_0] = ((-(min((max((arr_11 [i_0 - 1] [6]), (arr_5 [i_2] [i_2] [i_2 - 2]))), ((min((arr_10 [i_0] [i_1] [i_2] [i_3]), (arr_10 [12] [i_1] [1] [i_0]))))))));
                        arr_13 [i_3] [i_3] [i_3] [i_2] [4] [12] = ((!((((-(arr_7 [i_3] [i_1] [i_0])))))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_4] [i_2] [i_4] = (((!((max(var_5, (arr_3 [i_0 + 2])))))));
                        arr_17 [i_1] [i_1] [i_2] [i_4] = ((+((min((arr_8 [i_0] [i_0] [i_0]), var_4)))));
                    }
                }
            }
        }
        arr_18 [i_0 + 2] = (arr_4 [14] [2] [3]);

        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_5] [i_6] [i_7] [i_8 + 3] = ((!((!(arr_19 [i_0])))));
                            arr_31 [i_0 + 3] [i_8] [i_6] [10] [i_8] = (max((max(((((arr_4 [i_0] [i_0] [i_0]) || (arr_1 [i_8])))), var_2)), (max((arr_3 [i_0]), ((max(var_0, (arr_24 [i_0] [i_0 + 2] [i_0 + 2] [i_7] [12] [i_8]))))))));
                        }
                    }
                }
            }
            arr_32 [i_5] = (arr_2 [i_5]);
            arr_33 [i_5] [i_5] [i_5] = (max(((min((~var_10), var_4))), ((-((-(arr_22 [13] [i_0] [i_0])))))));
        }
        arr_34 [i_0] = (max((arr_24 [i_0] [i_0] [0] [0] [i_0] [i_0]), (max((arr_4 [i_0] [i_0] [i_0 - 1]), var_1))));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] [i_9] = ((+(max((min((arr_35 [i_9]), var_3)), (~var_2)))));
        arr_38 [i_9] = (min((arr_35 [i_9]), var_0));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        arr_41 [i_10] [i_10] = (max((arr_40 [i_10] [i_10]), ((~((((arr_39 [i_10]) <= var_1)))))));

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_46 [i_10] [i_10] [i_10] = ((max((arr_42 [i_11] [i_11] [i_10]), (arr_40 [i_10] [i_11]))));
            arr_47 [i_10] = ((~(((!(((-(arr_39 [7])))))))));
            arr_48 [i_10] [i_11] [15] = (!var_7);
        }
        arr_49 [i_10] = (+(((arr_43 [i_10]) & ((var_0 | (arr_40 [i_10] [i_10]))))));
        arr_50 [i_10] = (min((((max(var_2, (arr_45 [1]))) - (((max(var_9, var_1)))))), -var_2));
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_55 [i_12] [i_12] = (max(((-(arr_54 [i_12] [i_12]))), (((!((!(arr_54 [1] [i_12]))))))));
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        arr_62 [i_15] [i_12] [i_12] [i_12] = (!(arr_54 [i_13] [i_13]));
                        arr_63 [i_12] [i_13] [i_13] [i_15] [i_15] [i_15] = ((!(arr_59 [i_13 + 3] [i_14 - 1] [i_15])));
                        arr_64 [i_13] = var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
