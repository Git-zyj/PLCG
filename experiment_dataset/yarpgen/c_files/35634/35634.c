/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1 + 2] [i_0] = (max(((var_0 >> (!5807240201875272017))), (~1)));
            arr_5 [i_1] = var_4;
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_8 [1] = (min((~var_6), var_8));
            arr_9 [i_0] = (arr_7 [1] [i_2] [1]);
            arr_10 [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [4] = ((var_7 ? ((73 ? var_4 : (arr_7 [i_0] [i_3 + 1] [i_3 + 2]))) : (arr_11 [3] [i_0])));
            arr_14 [6] [6] [6] = var_10;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_17 [i_0] [i_4] [i_0] = arr_0 [i_4];
            arr_18 [8] [i_0] [i_4] = var_1;
            arr_19 [i_0] = (arr_12 [i_0] [i_4] [11]);
        }
        arr_20 [i_0] = ((var_8 ? (min((arr_3 [i_0] [i_0] [i_0]), 65535)) : (arr_0 [i_0])));
        arr_21 [i_0] = (arr_3 [i_0] [i_0] [2]);
        arr_22 [i_0] [i_0] = 3514273159532036309;

        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_25 [i_0] = (arr_1 [i_0]);
            arr_26 [i_0] = (~-var_3);
            arr_27 [i_0] = (arr_11 [0] [i_5]);
            arr_28 [i_5] [i_0] = ((var_0 ? var_2 : ((var_4 ^ (((arr_2 [i_5] [i_0]) ? 12077496523785357204 : (arr_6 [11])))))));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_32 [i_0] = (min(var_9, (((-(!var_9))))));

            for (int i_7 = 4; i_7 < 10;i_7 += 1)
            {
                arr_36 [i_6] &= var_13;
                arr_37 [i_7] = arr_12 [i_0] [i_6] [i_7];
            }
            for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
            {
                arr_42 [i_6] = ((!(((-10399 ? (arr_2 [i_0] [i_6]) : ((-1896672888 ? (arr_23 [i_8 + 2]) : (arr_11 [i_0] [i_6]))))))));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_47 [1] = (((99742049 | 3514273159532036315) + 191));
                            arr_48 [6] [i_0] = max((((arr_23 [i_8 - 1]) * (arr_23 [i_8 + 3]))), (max(var_13, (arr_23 [i_8 + 3]))));
                            arr_49 [i_0] [i_0] = ((((min((arr_34 [i_8 + 2] [i_9 - 2] [i_8 + 2]), (arr_34 [i_8 + 2] [i_9 + 1] [2])))) ? (((arr_45 [i_9 - 2] [i_6] [i_9 + 1] [i_9] [i_8 + 1]) ? 51813 : (arr_45 [i_0] [i_0] [i_9 + 1] [i_9] [i_8 + 1]))) : (arr_23 [i_0])));
                            arr_50 [i_8] = (!var_6);
                            arr_51 [i_0] [i_8 + 2] [i_8 + 2] = (-(!135));
                        }
                    }
                }
                arr_52 [i_0] = var_2;
            }
            for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
            {
                arr_55 [i_0] [i_0] [7] [i_11 + 3] = ((((((arr_45 [i_11 + 3] [i_11 + 3] [i_11] [i_11] [i_11]) ? (arr_3 [i_11 - 1] [i_11 + 2] [i_11]) : var_3))) ? (arr_45 [i_11 + 2] [i_11 - 1] [i_11] [10] [i_11]) : 65371));
                arr_56 [i_0] [i_0] [i_0] &= (65381 ? 10 : 1);
            }
            arr_57 [7] = ((!((max(var_13, (arr_1 [i_0]))))));
            arr_58 [i_0] = (arr_7 [i_6] [i_0] [i_0]);
        }
    }
    var_14 = 4550372576732441973;
    #pragma endscop
}
