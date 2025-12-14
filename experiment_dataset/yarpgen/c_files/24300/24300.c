/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 &= (min((max(65509, var_4)), (max(var_3, var_8))));
    var_14 = ((((max(22773, var_11))) ? (((var_6 && (14205 / var_5)))) : 569907782));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [12] [i_2] [i_4] = -14206;
                                var_15 = 642764095;
                            }
                        }
                    }
                    arr_15 [i_0 - 3] = (max((arr_7 [i_0 - 3]), ((((((arr_12 [i_0] [i_0] [0] [0] [i_0] [i_0 - 1]) ? (arr_4 [i_0]) : var_9))) ? -14183 : (min(9826904781579079722, 3099452947))))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_16 &= (arr_22 [i_0] [i_1] [i_5] [8] [i_1]);
                                var_17 = (14225348003502310392 == -14205);
                                var_18 &= (arr_2 [i_7] [i_1]);
                            }
                        }
                    }
                    var_19 = min(2148827977172794395, 10);
                    arr_23 [i_1 - 2] [i_1 + 2] [i_5] = var_10;
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_20 = (max((((arr_22 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2]) >= 100663296)), ((!(((-(arr_0 [i_0]))))))));
                    arr_26 [i_0] [i_0] [i_0] = var_1;
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_21 = (min(var_21, ((min((max((arr_10 [i_0 - 3] [i_1] [i_1 - 1] [i_1]), -14205)), (arr_28 [i_0] [i_1] [i_9]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_34 [i_0] [i_0] [i_0] [i_10] [i_11 - 3] = 178;
                                var_22 += (min((~var_6), var_6));
                            }
                        }
                    }
                    arr_35 [i_0] [14] [i_9] [i_0] = ((((((arr_22 [3] [4] [3] [i_0 - 4] [i_1 + 2]) >> (((arr_20 [i_1] [4] [i_9] [i_0 - 4]) - 179))))) ? (~59) : (min(var_5, (arr_30 [i_9] [15] [i_9] [i_0 - 4])))));
                    arr_36 [i_1 + 1] = (((((max(17, (arr_9 [8] [i_9] [i_9]))))) ? 22774 : (!-14206)));
                }
                arr_37 [19] = ((((~3965358421914271587) ? ((((-100663296 + 2147483647) >> (1631206908 - 1631206888)))) : ((1012138992530574667 ? (arr_2 [i_0 - 4] [i_1]) : var_6)))));
                var_23 = (((arr_0 [i_0]) ? ((min(-1447893540, (arr_2 [i_0] [i_0])))) : (((arr_2 [i_0] [i_1]) ? (arr_21 [i_1]) : (arr_3 [i_1 + 2])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            arr_46 [i_0] [i_1] [i_12] [i_13] = var_5;
                            var_24 = (max(var_24, ((max(-61, (max((~var_1), (arr_10 [i_0] [i_1] [i_12] [i_13 + 1]))))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, var_4));
    #pragma endscop
}
