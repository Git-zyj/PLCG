/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [17] = (max(((((arr_1 [i_0]) > ((((arr_0 [i_0]) && var_8)))))), ((max(var_12, (arr_1 [4]))))));
        arr_3 [i_0] [i_0] = (!(((240 ? 18446744073709551595 : -3755308628662312984))));
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (arr_4 [i_1] [i_1]);
        arr_9 [i_1] = (((!-3755308628662312984) ? (((((!20) || (arr_6 [i_1]))))) : (!-6715818539676390186)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_16 [i_3] = -25;
            arr_17 [i_3] [i_3] [i_3] = (arr_11 [i_3] [i_2]);

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_20 [i_3] [i_3] [1] [i_4] = (((((arr_10 [i_2]) ^ 48183)) & 1));
                arr_21 [0] [i_3] = ((!(arr_0 [i_4])));
                arr_22 [i_2] [i_3] [i_3] = (((arr_15 [i_3] [i_3]) ? (arr_4 [i_2] [i_4]) : (((var_3 > (arr_6 [i_2]))))));
                arr_23 [i_2] [i_3] [i_3] [i_4] = (((!1843341976) ? var_5 : ((var_5 ? var_9 : 1843341978))));
            }
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_27 [i_2] [i_2] [i_2] = ((-(((max(var_10, var_3)) ^ var_9))));
            arr_28 [i_5] = ((+(((min((arr_5 [1]), var_1)) | var_0))));
        }
        arr_29 [i_2] [i_2] = (max(((min(17353, 1627697931170725250))), ((((((arr_25 [i_2] [i_2]) && (arr_15 [i_2] [i_2]))) && ((!(arr_4 [i_2] [i_2]))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    arr_36 [i_6] = min((max((arr_19 [i_7 + 1] [i_7] [i_7 + 1] [2]), (arr_25 [i_7 - 1] [i_7 - 1]))), (((~(arr_4 [6] [i_7 + 1])))));
                    arr_37 [i_2] [i_6] = (((!var_3) || ((var_0 || (arr_12 [4] [7] [i_6])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_45 [i_10] [i_9] [i_8 + 1] [i_9] [i_2] = (((!181) ^ (arr_13 [i_9])));
                        arr_46 [i_2] [i_2] [i_9] [i_2] [i_2] [i_2] = (arr_14 [i_9] [8] [i_9]);
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_49 [i_2] [1] [i_2] [i_2] = ((((!((min(6715818539676390186, -45))))) ? ((((!var_8) ? (((!(arr_14 [i_2] [6] [i_2])))) : ((min(var_2, var_4)))))) : (((max(127, 9223372036821221376)) * (arr_44 [i_2])))));
                        arr_50 [i_8] [i_9] = (min((!1), (((((2998337978633896720 ? 6870437696869489931 : var_12))) && (-28 && 181)))));
                        arr_51 [i_9] = ((-((min((arr_4 [i_8 + 2] [i_8 - 1]), (!var_11))))));
                    }
                    arr_52 [i_9] = 437380152;
                    arr_53 [i_2] [i_2] [i_9] [0] = (arr_4 [i_2] [i_2]);
                    arr_54 [i_8] [i_8] &= (((~(arr_1 [i_8 + 1]))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
    {
        arr_57 [i_12] [i_12] |= ((963 ? 1 : ((19756 ? 1 : (arr_10 [i_12])))));
        arr_58 [5] [i_12] = (((2026812035 - 0) + ((min(var_4, var_4)))));
        arr_59 [i_12] [i_12] = (((arr_1 [i_12]) - 11279));
        arr_60 [8] = (max((((2591637191 ? var_1 : -22237))), var_3));
    }
    #pragma endscop
}
