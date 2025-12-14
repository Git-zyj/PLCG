/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((!var_2) || (!var_3))) && (~0)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-((~(!1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] = ((((!(~1)))) / -1);
                    arr_9 [i_1] = ((-1 < (!-25407)));
                }
            }
        }

        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_3] [i_4 - 1] = ((!(((~(var_3 == var_6))))));
                        arr_19 [i_5] [i_5] [i_4] [i_5] [0] |= ((19561 <= ((-(((arr_16 [i_0]) << (arr_15 [i_0] [i_3] [i_4])))))));
                    }
                }
            }
            arr_20 [i_0] = ((-(((527087348 == -19563) << (((0 - 43170317) + 43170324))))));
            arr_21 [i_3] = (((!1) - (~0)));

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_24 [i_0] [i_3] [i_6] [1] = ((4294967295 < ((((-29 || (!19561)))))));
                arr_25 [i_3] [i_6] [i_6] [i_3] = ((!(~var_10)));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_29 [13] [i_3] [i_3] [i_3] = (~-5951);
                arr_30 [i_0] [i_0] [i_7] [i_0] = (((((arr_10 [i_7] [i_3] [i_0]) >> (((arr_26 [3] [i_3] [3] [i_3]) + 1802414131)))) >> ((((-(arr_23 [i_0] [i_3] [i_3] [i_7]))) + 19))));
                arr_31 [i_3] [i_3] [i_7] = ((!((16 != (arr_17 [i_7] [i_7] [i_3] [i_0] [i_3] [i_0])))));
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_34 [i_0] [i_0] [i_3] [i_0] |= (((~2226855665) && (~var_2)));
                arr_35 [i_0] [4] [i_3] = (((((~384) + 2147483647)) >> ((((!var_9) > ((-(arr_27 [20]))))))));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_39 [i_0] [i_0] [i_9] = (~-933293137);
            arr_40 [i_9] [i_0] = (+-13933);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {

            for (int i_11 = 2; i_11 < 19;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_52 [7] [i_10] [4] [i_11] [i_13 - 1] = ((-(~-16866)));
                            arr_53 [14] [i_13 - 1] [i_12 - 1] [i_11] [i_11 - 1] [i_10] [i_0] = ((~(((arr_6 [i_11] [i_10]) & 0))));
                            arr_54 [i_13] [i_12 - 2] [12] [i_11] [i_11] [i_10] [3] = -var_5;
                        }
                    }
                }
                arr_55 [i_0] [i_10] [i_10] |= (((~29006) / -var_6));
            }
            arr_56 [i_0] [i_10] = ((-(!18661)));
        }
        for (int i_14 = 1; i_14 < 19;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            arr_68 [1] [i_17] [i_15 - 1] [i_17] [i_0] = ((((!(((~(arr_43 [18]))))))));
                            arr_69 [i_0] [i_0] [16] [i_16] [i_0] = (((-(arr_6 [i_0] [i_15]))));
                            arr_70 [i_17] [i_17] [i_15] [i_17] [4] = (((~(var_9 % var_9))));
                            arr_71 [i_15 + 1] [i_16] [i_0] = ((((((2068111630 ^ 3) + (223 || var_5)))) && ((((~2226855669) ^ (var_5 & var_10))))));
                            arr_72 [i_17] [i_17] = (--22004);
                        }
                    }
                }
            }
            arr_73 [i_14 - 1] [i_0] = ((~((((779415840 - var_5) && (~var_1))))));
        }
    }
    #pragma endscop
}
