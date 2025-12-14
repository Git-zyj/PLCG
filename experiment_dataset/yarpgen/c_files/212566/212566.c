/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-var_3 ? ((((min(var_10, var_11))) ? var_4 : var_6)) : 1123883344));
    var_13 = ((((285057398 / (((var_10 ? 8 : var_11)))))) ? (((((-15 ? 169370529 : -3706127956058536280))) ? ((12107 ? 3 : var_0)) : 3)) : 17);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [0] [i_2] [i_3] &= (((((min((arr_5 [8] [i_1] [8]), var_1))) ? (((-1189112824 ? (arr_0 [2] [i_1]) : 1))) : 618116989836006094)));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = -947980254238035319;
                        }
                    }
                }
                arr_14 [i_0] = (arr_4 [i_0]);

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_14 = (max(var_14, (!var_10)));
                    var_15 = (((((((var_9 == (arr_7 [0] [3] [3] [i_4])))) >= var_9)) ? var_2 : (((!((((arr_11 [i_0 + 2] [i_1] [i_4] [i_4] [i_4] [i_0]) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) : (arr_17 [i_0] [i_0] [i_4])))))))));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_16 = var_2;
                    arr_20 [i_1] [i_0] = var_4;
                }
                for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
                {
                    var_17 = var_11;
                    arr_25 [i_0] [i_0] [i_6] = ((~(((arr_0 [i_0] [i_0]) / (max(55014, var_2))))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((-(arr_30 [i_0] [i_0] [i_0] [i_7] [i_8]))))));
                                var_19 = (max(var_19, (((((((arr_29 [i_0 - 2] [i_1] [i_0 - 2] [i_7 - 3] [4]) ? (arr_4 [i_6]) : (arr_29 [6] [i_6] [i_6] [i_1] [6]))) == (arr_11 [i_0 - 4] [i_1] [i_1] [i_6] [i_7] [2])))))));
                                var_20 = (max(var_20, ((((~(arr_23 [8])))))));
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
                {
                    arr_35 [3] [i_1] [i_0] = ((!((((arr_19 [i_9] [i_1] [i_0 + 2] [i_0 + 2]) ? (arr_18 [i_0 + 1]) : var_6)))));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 7;i_11 += 1)
                        {
                            {
                                var_21 = ((18971 ? (((!(((var_11 ? 19196 : (arr_24 [i_0] [i_10 + 2] [i_9 + 1] [i_0]))))))) : ((((!(arr_10 [i_0] [i_10] [i_9] [i_0]))) ? -12108 : ((((arr_30 [i_0] [i_1] [0] [i_10] [i_11]) || (arr_32 [i_1]))))))));
                                arr_40 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] = (!var_2);
                                arr_41 [i_0] [i_1] [i_9] [i_10] [i_0] = ((~(((arr_27 [i_0]) ? var_3 : (!var_1)))));
                                var_22 = (max(var_22, (arr_6 [i_0] [i_9] [i_9] [i_10])));
                            }
                        }
                    }
                    arr_42 [i_0] [i_1] [i_0] [i_0] = (max((arr_8 [i_9]), (!var_6)));
                }
            }
        }
    }
    #pragma endscop
}
