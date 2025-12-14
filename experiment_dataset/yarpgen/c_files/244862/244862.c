/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_1, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (max((max((min((arr_3 [i_0]), -9647)), 15918083970563611492)), var_9));
                arr_6 [i_1] = (~42681);

                for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
                    {
                        var_18 &= (arr_13 [9] [i_1] [i_1] [3] [1]);

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            arr_17 [i_1] [2] [i_2] [i_2] [i_3 - 1] [i_4] &= (2528660103145940151 ? 9647 : -31624);
                            var_19 *= (arr_3 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_20 = ((!(arr_14 [i_2 - 1] [i_2] [i_3 + 1] [i_2] [i_5])));
                            arr_22 [i_0] [i_0] [i_1] &= (arr_16 [4] [i_1] [i_2 - 1] [i_1] [i_5] [i_5]);
                            var_21 = (max(var_21, (((arr_14 [i_3 + 2] [i_1] [i_1] [i_1] [i_1]) ? (min((~var_8), (((arr_16 [i_0] [i_0] [6] [i_1] [i_3] [i_5]) | (arr_1 [i_2]))))) : (arr_13 [i_3 + 1] [i_3] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [10] [i_2 - 1] [i_2] = ((arr_10 [i_2 - 1] [i_2 - 1] [i_2]) ? var_15 : ((13 ^ (((arr_14 [i_0] [i_1] [i_0] [i_2] [4]) ? var_12 : 15244850619280247418)))));
                        arr_26 [i_0] [i_0] [i_2] [i_6 + 3] = (arr_15 [i_0] [i_0] [i_0]);
                        arr_27 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] = ((229 ? 2528660103145940124 : 31624));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_22 += ((+(max((arr_11 [i_1] [i_1] [i_2 - 1]), (arr_29 [10] [i_1] [i_2 - 1] [i_2])))));
                        var_23 &= -31650;
                        arr_31 [i_0] [i_1] [i_2] [7] [i_2 - 1] [i_7] = (((62177 ? (arr_16 [i_1] [i_1] [i_1] [i_2] [i_2 - 1] [i_2 - 1]) : (arr_12 [i_2 - 1] [i_2] [8]))));
                        arr_32 [i_2] = (arr_19 [i_2] [6] [i_2] [i_7] [6] [9] [i_7]);
                        arr_33 [i_0] [i_2] [i_2 - 1] [i_7] [i_7] [0] = ((((~(-32767 - 1)))) ? var_7 : 8989784178008850657);
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 4; i_9 < 10;i_9 += 1)
                        {
                            var_24 = ((min(var_15, 31647)));
                            arr_39 [i_9] [i_2] [i_2 - 1] [i_2] [i_0] = (((-32763 ? 22 : 31650)));
                            var_25 += (arr_36 [i_0] [i_1] [i_2] [6] [i_9 - 2] [8]);
                            arr_40 [i_0] [i_1] [i_1] [i_2] [i_2] [i_9] = ((((min(15918083970563611456, (arr_36 [i_9 - 3] [i_9] [i_9] [i_9 - 3] [i_9] [7])))) >> (((min(var_12, (~var_1))) - 855121081))));
                            var_26 = ((84 ? 3 : 4660168238683113984));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            arr_43 [2] [i_2] [2] [i_2] [i_10 - 1] = (((arr_42 [i_1] [i_1] [i_1] [i_1] [i_2 - 1] [i_2 - 1]) >> (((arr_13 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]) - 81))));
                            arr_44 [i_2] [i_2] = (((arr_28 [i_2 - 1] [i_2 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_2]) ? (arr_28 [i_2 - 1] [i_2 - 1] [i_10 - 1] [i_10 - 1] [4] [i_2]) : 10));
                        }
                        var_27 = ((1 ? (((max(22038, 20377)))) : (((arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_41 [i_8] [8] [i_8] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_9 [i_2 - 1] [i_2 - 1] [2] [i_2 - 1])))));
                        arr_45 [i_2] [i_1] [i_2 - 1] [i_8] = ((!(((~(arr_14 [i_0] [4] [5] [i_2] [5]))))));
                        arr_46 [i_0] [i_2] [4] [i_8] = (~16821);
                    }
                    arr_47 [i_2 - 1] [i_0] [i_0] [6] |= ((~(~var_8)));
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_50 [i_0] [i_1] [i_11] [5] = 255;
                    var_28 = (((arr_35 [i_11 - 1]) || var_7));
                }
                for (int i_12 = 3; i_12 < 10;i_12 += 1)
                {
                    var_29 = (min(var_29, (!var_8)));
                    var_30 = 1648305445;
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_56 [i_0] [i_1] [i_0] [6] = (((arr_14 [i_0] [i_0] [i_0] [i_1] [i_0]) ? 2528660103145940162 : ((var_14 ? var_3 : (arr_4 [i_0] [i_0] [i_0])))));
                    var_31 = (max(var_31, (((~(arr_54 [i_1] [i_1] [i_13]))))));
                }
                arr_57 [i_0] [i_0] [1] = var_0;
            }
        }
    }
    var_32 += var_7;
    #pragma endscop
}
