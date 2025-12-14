/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((-(min(0, 1956332301)))), (((!(~var_7))))));
    var_11 = var_6;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((max(((max(1, (arr_2 [i_0])))), -121)), ((-((((arr_1 [i_0] [i_0]) >= 3460009874)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_1] = (arr_7 [i_1] [i_1] [8]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_14 [0] [i_3] [i_1] [i_1] [i_0] = (arr_9 [i_1] [i_1] [i_1]);
                        arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = ((-(91 + 1)));
                        arr_16 [i_3] [i_1] [i_1] [i_0 + 2] = ((-(((arr_6 [i_0]) + 41281))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4 - 1] [1] = (((arr_12 [i_4] [8] [i_4]) && 1792));
        arr_21 [i_4] = 8358870738110366444;
        arr_22 [i_4] [i_4] = ((+(((arr_19 [i_4]) + -1793))));
        arr_23 [i_4] [i_4] = (arr_5 [12]);
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_27 [i_5] = 24255;
        arr_28 [i_5] = arr_18 [i_5];
        arr_29 [i_5] = (arr_4 [6]);
        arr_30 [5] = (!106);
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_35 [i_6] = (arr_12 [i_6] [i_6] [3]);
        arr_36 [8] [i_6] = ((~(arr_24 [i_6] [0])));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_39 [i_6] [i_7] = 63;
            arr_40 [i_6] = (((arr_25 [i_6]) || (((-(arr_11 [10] [i_6] [6] [i_7]))))));
            arr_41 [i_6] = (((((100 / (arr_13 [i_6 - 1] [i_6] [i_7] [i_7])))) || 8193));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_46 [i_6] [i_6] [i_8] = ((+((((arr_32 [i_6 + 1]) == (arr_18 [i_6]))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_55 [i_11] [i_8] = (arr_18 [8]);
                            arr_56 [i_11] [i_6] = (arr_5 [i_6]);
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            arr_61 [i_6] [i_8] [i_9] [2] [i_8] [10] [1] = (arr_57 [0] [i_8] [i_8] [i_12] [i_10]);
                            arr_62 [i_6] [i_8] [i_9] [i_10 + 1] [i_6] [i_10] [i_12] = ((117 && (arr_0 [i_8])));
                            arr_63 [i_6] [12] [2] [2] = 864691128455135232;
                            arr_64 [i_6] [0] [8] [i_10 - 1] [i_12] = (~0);
                            arr_65 [i_6] [i_8] = (((arr_7 [i_6] [i_8] [i_8]) > (arr_37 [i_6])));
                        }
                        arr_66 [i_6 - 1] [i_8] [i_6] [i_6 - 1] = 1741640095;
                        arr_67 [i_6] [i_6] [i_6] [i_10] = ((~(arr_11 [12] [i_6] [i_9] [i_9])));
                        arr_68 [i_6 - 1] [0] [i_9] [12] [i_8] = 0;
                    }
                }
            }
            arr_69 [i_6] = (~(((arr_25 [i_8]) | 0)));
        }
    }
    var_12 = ((min(2055, var_0)) + (max(var_4, var_9)));
    #pragma endscop
}
