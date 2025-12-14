/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = ((-((((((255 ? 124 : 88))) >= (min(var_15, 43464)))))));
                                var_20 = (min((((1 >= (arr_3 [i_0])))), var_16));
                                arr_14 [i_0] [i_1] [i_4] [i_3] [1] [i_1] [i_3] = 15389;
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((((((arr_4 [i_2] [i_3] [i_4]) * (arr_4 [i_0] [i_1] [i_2])))) ? ((((((42 ? (arr_10 [i_0] [i_1]) : (arr_3 [i_0])))) != ((var_5 << (165 - 139)))))) : (min(((((arr_3 [i_0]) || var_9))), var_11))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_21 = (~var_16);
                            arr_20 [i_6] [i_5] [i_0] [i_0] [i_0] = ((((var_13 >= (((var_17 ? (arr_18 [i_0]) : 52944))))) ? ((max(52944, (!var_10)))) : (((((8812564552050872720 ? var_3 : (arr_12 [i_0] [i_5] [17] [i_0] [i_6])))) ? (~var_6) : 13))));
                        }
                    }
                }
                arr_21 [i_0] = (((((-43 ? 1 : 42))) ? (min(7, 0)) : (var_17 <= var_3)));
            }
        }
    }
    var_22 = var_14;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_32 [i_10] [i_8] [i_8] [i_7] = 5;
                            arr_33 [i_7] [i_8] [i_9] [i_8] = (arr_28 [i_7 + 1] [i_8]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_41 [i_8] [i_11] [i_7] = (max(2097151, ((var_2 - (min(40484, var_14))))));
                                var_23 |= ((((max((arr_34 [2] [i_11] [i_11]), -var_5))) ? (arr_23 [10]) : -1));
                                var_24 = (max(var_24, (arr_35 [i_7])));
                            }
                        }
                    }
                }
                arr_42 [i_7 - 1] [i_8] = ((((max((((-(arr_29 [i_8] [i_8 + 2] [i_7] [i_8])))), (max(-32739, (arr_30 [i_8] [i_8] [i_7 + 1] [i_7 - 1] [19] [i_7])))))) ? (arr_39 [i_7 - 1] [i_7 - 1] [i_8] [i_8] [i_8]) : (min((!0), (((arr_29 [i_8] [i_8] [i_8] [14]) + 40484))))));
            }
        }
    }
    #pragma endscop
}
