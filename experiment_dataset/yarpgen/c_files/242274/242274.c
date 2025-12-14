/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? ((var_9 ? ((min(9223372036854775807, 53796))) : (var_1 / var_9))) : ((((min(var_10, var_10)) * var_0)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, var_5));
        var_13 = ((((min((arr_2 [i_0] [15]), (arr_2 [i_0 + 2] [i_0 + 1])))) ? ((min((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 + 2] [i_0 + 2])))) : (min(-1, 246))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (arr_7 [i_1] [i_1] [i_0]);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [3] [i_0] [i_1] [i_2] [i_3] [i_3] = (arr_0 [i_0 - 1] [i_1]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_15 [15] [i_0] [i_2] [i_1] [i_1] [12] [i_0] = var_6;
                            var_15 ^= (min((arr_1 [i_4] [i_2]), (arr_1 [i_1] [i_2])));
                            var_16 ^= ((-(arr_6 [i_1] [i_1] [i_0 - 1] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (max(((max((arr_3 [i_0] [i_0 + 1] [i_0 - 1]), (arr_13 [1] [i_1] [6] [i_1] [6])))), (min((arr_9 [17]), (min(-1, (arr_7 [i_1] [12] [i_2])))))));
                            var_17 = (((arr_9 [8]) & var_9));
                            var_18 *= (arr_6 [17] [17] [5] [16]);
                        }
                        var_19 = (max(var_19, ((min((arr_10 [i_0] [i_0 + 2]), (arr_10 [i_0] [i_0 - 1]))))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_20 = (min(((((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? 44973 : (arr_1 [i_0 + 1] [i_0 + 1])))) - var_10)), ((~(min((arr_21 [i_6] [i_2] [i_1] [i_1] [i_0]), (arr_22 [i_2] [i_1] [i_2] [i_2] [i_0])))))));
                        var_21 = (min(var_21, ((min(((min((((44973 >= (arr_8 [i_0] [3] [i_2] [i_6])))), (arr_8 [i_6] [i_2] [i_1] [i_0])))), (arr_1 [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_22 += var_7;
                        var_23 = (max(var_23, ((-(((-1 + 2147483647) >> (var_8 - 13004)))))));
                        var_24 = (max(var_24, ((((arr_12 [i_7] [i_7] [3] [i_0 + 2] [i_0 + 2]) - (arr_12 [i_0] [4] [i_1] [i_0 - 1] [i_2]))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 = var_2;

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_30 [1] [i_2] [i_2] [13] [i_0] = (((arr_12 [9] [i_8] [9] [i_1] [i_0 - 1]) - (min(((((arr_7 [i_2] [i_8] [i_8]) || -1610657318))), (arr_13 [i_0] [i_1] [i_2] [16] [i_0 + 1])))));
                            var_26 = (min(var_26, (arr_28 [0] [i_1] [i_9] [i_8] [0] [i_1] [i_9])));
                            var_27 ^= var_3;
                        }
                        var_28 = (min(((((((arr_25 [i_0]) ? (arr_28 [17] [i_1] [17] [14] [8] [i_8] [9]) : var_4)) == (arr_8 [i_0] [i_1] [5] [i_8])))), (min((((arr_6 [i_8] [i_2] [i_1] [i_0 - 1]) ? var_10 : 11840098310828718083)), (((-(arr_29 [i_2] [i_2] [i_8] [i_2] [i_2]))))))));
                        var_29 = ((!(arr_4 [14])));
                    }
                    var_30 = (arr_18 [18] [i_1] [i_1] [i_1] [1] [8] [0]);
                }
            }
        }
        var_31 ^= (arr_13 [i_0] [i_0 + 2] [i_0] [i_0] [i_0]);
    }
    for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                        {
                            var_32 &= arr_37 [14] [i_11];
                            arr_46 [i_10] [i_10] [i_10] [i_10] [11] [i_10 - 1] = ((((((var_9 + (arr_35 [0] [i_11] [i_11]))) - (arr_41 [i_11] [i_11] [i_11] [i_11] [i_11]))) > (arr_20 [9] [14] [i_12] [i_11] [i_10])));
                        }
                        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                        {
                            var_33 = var_9;
                            var_34 = (min(var_34, (min((arr_16 [i_15] [14] [14] [i_10]), (((arr_45 [i_10 - 1] [i_10 - 1]) ? (arr_14 [i_13] [i_10 + 2]) : (arr_14 [i_10 + 2] [i_12])))))));
                            var_35 &= var_10;
                            arr_51 [i_10] [i_11] [i_12] [11] [i_13] [i_11] = var_9;
                        }
                        var_36 = ((((max((min(var_1, (arr_20 [i_10] [2] [i_10] [4] [i_10]))), (!var_0)))) ? (arr_0 [i_10 - 1] [i_10 - 1]) : (min((arr_34 [i_10]), ((min((arr_37 [i_11] [i_11]), (arr_37 [3] [i_11]))))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    {
                        arr_59 [i_10] [13] [i_16] [1] [i_18] = var_2;
                        var_37 = min(((min((min((arr_48 [i_10] [5] [i_16] [i_17] [i_18]), 20551)), (arr_16 [i_17] [i_17] [i_17] [i_10 + 2])))), (min((arr_39 [1] [i_10 + 1] [i_17]), (arr_39 [i_10 + 1] [i_10 + 2] [i_17]))));
                    }
                }
            }
        }
        var_38 = ((+(((arr_33 [i_10 + 2]) | (arr_22 [i_10] [i_10 - 1] [7] [i_10 + 2] [i_10 + 2])))));

        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 18;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    {
                        var_39 = (arr_36 [8] [i_19]);
                        arr_70 [i_21] [i_20] [i_10 + 2] [i_19] [i_10 + 2] [i_10 + 2] = (arr_44 [i_10 + 2] [i_10 + 2] [i_20 + 1] [i_21] [i_21]);
                    }
                }
            }
            arr_71 [i_10] [i_10] [0] = -12519;
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 19;i_22 += 1)
        {
            arr_75 [i_10] [i_10] = -var_10;
            arr_76 [i_22] [i_22] = (((((arr_24 [i_22] [i_22] [i_10]) ? (arr_54 [i_10] [i_22] [i_10]) : (arr_69 [i_10] [i_10] [18] [i_10]))) == (arr_27 [i_10] [4] [i_10 - 1] [i_10 - 1] [i_10])));
            var_40 ^= var_6;
        }
    }
    #pragma endscop
}
