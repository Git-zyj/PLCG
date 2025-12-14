/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((((!(arr_2 [i_0 - 3])))));
        arr_4 [i_0] [i_0] = var_12;
        arr_5 [i_0] = (((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : var_8));
        arr_6 [i_0 + 2] = ((var_4 ? (arr_1 [i_0]) : 676042771));
        arr_7 [i_0] = 129517430;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_18 [i_1 + 1] = -3395705178604936140;
                    arr_19 [10] [i_2] [22] [i_3] = ((var_4 || (((-(arr_11 [i_1] [i_1]))))));
                    arr_20 [i_1] &= (min(var_6, (max(((2106039103 ? 384939870 : -22110)), var_1))));
                    arr_21 [i_1] = -22134;
                }
            }
        }
        arr_22 [i_1] = ((~((((((arr_11 [i_1] [i_1]) / (arr_15 [i_1] [i_1] [i_1])))) ? ((~(arr_9 [i_1 - 1]))) : ((~(arr_12 [i_1])))))));
        arr_23 [i_1] |= (var_6 ? ((-(var_4 / var_12))) : (arr_12 [i_1 + 1]));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                arr_28 [19] = (((((((var_6 ? var_3 : var_3)) % var_12))) ? (((min(var_0, 4130959045)) / (arr_27 [i_4] [12] [i_4]))) : (3910027426 <= 526535126)));
                arr_29 [i_4] [i_4] [i_4] |= (arr_12 [i_4]);
                arr_30 [i_4] [i_5] [i_5] = var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 24;i_7 += 1)
        {
            {
                arr_36 [i_6] [i_7] = (((((((-(arr_33 [i_6] [i_6] [i_7])))) ? (min(64721, 4130959045)) : (arr_34 [21] [21] [i_7]))) == (((var_12 ? (!var_12) : -var_3)))));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_43 [i_6] [18] [18] [18] [21] [i_9] = ((((((((var_0 >= (arr_33 [i_6] [i_7] [i_8])))) < (((arr_41 [i_6] [i_6] [i_8 - 2] [8] [i_6]) ? var_11 : var_11))))) != (((((max(733772358, (arr_33 [i_9] [i_8] [i_6])))) || (arr_37 [23] [23] [i_8 + 2]))))));
                            arr_44 [i_7 + 1] [i_8 + 3] [i_9] = (((((1916240421 ? var_4 : 3835950398))) & (((-(arr_35 [i_6]))))));
                            arr_45 [i_8] [10] [i_6] [i_7 + 1] [i_6] [i_7 + 1] = max((arr_32 [11]), (((~(151268953 || 705279902)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
