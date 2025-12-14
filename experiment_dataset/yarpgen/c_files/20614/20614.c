/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((var_8 ? ((-(arr_2 [i_2]))) : (~var_1))) + -92)))));
                    arr_9 [i_0] [i_0] [i_0] [6] = 147830144318878674;
                    var_14 = (min(((((max((arr_4 [i_0]), 62102))) ? (var_7 ^ 147830144318878668) : (arr_6 [i_0]))), var_3));
                    var_15 = (((max(var_11, ((var_2 ? var_2 : var_7)))) << (((max(((((arr_1 [i_0]) - var_6))), ((7339949309300502027 ? 984125202 : var_4)))) - 984125202))));
                }
            }
        }
    }
    var_16 *= ((max(((var_9 ? var_2 : var_8)), var_5)));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_17 = ((!((((arr_11 [i_3] [i_3 - 2]) | 5204251115555395970)))));
                                var_18 = (max(var_18, (arr_15 [3])));
                                var_19 = (max(var_19, ((((arr_16 [i_4] [2] [i_5] [2]) ? (((arr_3 [i_3] [i_6]) ? (arr_2 [i_7 - 1]) : 147830144318878654)) : ((min((41 * 75), -1192859222761722261))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_29 [i_3] = var_4;
                            var_20 = (((arr_11 [i_3] [i_3]) ? var_4 : (((((8238233319083632841 ? 1 : 1))) ? (((arr_18 [i_3] [i_3] [1] [i_8] [7]) ? (arr_11 [i_3] [i_9]) : (arr_13 [i_8] [i_3]))) : var_6))));
                            var_21 = var_1;
                            arr_30 [i_3] [i_8] = ((~((var_7 ? (arr_8 [i_8 + 3] [5] [i_8 + 1] [i_8 + 2]) : var_5))));
                        }
                    }
                }
                var_22 &= 1115643361156208318;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_23 = (max(((((max(var_11, (arr_35 [i_10])))) ^ ((18298913929390672946 ? (arr_38 [i_10] [i_10] [i_14]) : (arr_39 [i_10] [i_13] [i_10] [7] [i_10]))))), (arr_39 [i_10] [i_11] [i_12 + 2] [i_13] [i_10])));
                                var_24 += (max(var_9, ((2615888848 ? (arr_40 [i_10] [i_11] [12] [i_10] [0] [4]) : 16069))));
                            }
                        }
                    }
                    var_25 = 14221209817908167697;
                    var_26 = (18298913929390672946 - ((-(min(var_2, var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
