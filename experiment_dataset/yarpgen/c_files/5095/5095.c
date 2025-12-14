/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = ((~(max((min(542419780, 3758096384)), ((536870900 % (arr_7 [i_2])))))));
                                var_21 = 3758096390;
                                var_22 = (min((!-1), ((!(arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_2 + 1])))));
                                var_23 = (min((((arr_2 [i_0] [i_0]) | (max(1400633051, 0)))), ((var_8 | ((536870911 ? (arr_1 [i_0]) : 122))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_2 + 1] = ((arr_8 [i_2] [i_2] [i_2] [i_2 - 1]) ? (3758096384 - 3758096384) : (arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [9]));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [3] [i_1] [3] [3] [3] [i_1] = ((-(((!(!120))))));
                                var_24 = (3758096384 ^ 181);
                                arr_19 [i_0] [0] [i_1] [i_2] [0] [i_6 - 1] = (arr_17 [12] [i_5] [13] [8] [i_5 - 1] [i_5] [i_5 - 1]);
                                arr_20 [i_0] [i_0] [i_0] [i_5 - 2] [10] = 73;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_25 = var_8;
                                var_26 = (max(3758096384, 3758096365));
                                arr_25 [4] [i_1] [i_2] [i_7] [i_2] = ((((((var_11 == -32363) || (3758096384 < 70)))) * (((!((max(var_2, 1))))))));
                                arr_26 [i_0] [i_0] [i_7] = (min((((var_11 || 186) <= (arr_9 [1] [7] [i_2 + 1] [i_7 + 1]))), ((-249 == (70 + 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (((((~536870931) - var_1)) >= var_6));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_35 [i_9] [i_9] = (((((1 ? (arr_1 [i_10]) : 70))) && ((min((max(2381674567, var_5)), (~91))))));
                    arr_36 [1] [i_10] [i_11] &= (((((3758096385 - (arr_0 [i_10] [i_11])))) * (var_12 & 253)));
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_45 [i_9] [i_9] [i_9] [i_12 - 2] [1] = (max(var_15, (((min(1396876507877221857, (-2147483647 - 1))) / ((max(var_19, 1)))))));
                            arr_46 [i_9] [i_10] [i_12 - 3] [i_12] = (arr_17 [i_9] [i_9] [13] [i_9] [i_9] [i_13 - 1] [4]);
                        }
                    }
                }
                var_28 = 2147483646;
            }
        }
    }
    #pragma endscop
}
