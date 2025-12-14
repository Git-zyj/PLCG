/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 ^= (arr_2 [i_0]);
                    var_15 ^= (arr_2 [i_0 - 4]);
                    var_16 = ((((max((arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_1]), (arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_1])))) ? (max((arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_1 + 1]), (arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_0]))) : (min((arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_1]), (arr_5 [i_1] [i_0 - 2] [i_1 + 1] [i_0 + 1])))));
                }
            }
        }
    }
    var_17 = ((min(var_8, var_4)));

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 |= ((arr_7 [i_3]) ? (((arr_9 [i_3] [i_3]) / (arr_8 [i_3]))) : (max(-4668967540931581665, 4294967285)));

        for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_19 = (arr_10 [0] [0] [i_3]);
            var_20 = ((((((4294967273 ? 402653184 : 4294967280))) ? ((max(var_13, var_10))) : ((-(arr_10 [i_3] [i_3] [i_4 + 2]))))));
        }
        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_14 [i_3] [1] [i_5] = (min((arr_7 [i_3]), (arr_10 [19] [i_5 - 2] [i_5])));
            var_21 = -28;
            arr_15 [i_5 - 1] [21] = (max(((4294967293 ? -3885 : 1669826893)), ((max((arr_13 [i_3] [0]), (max((arr_8 [i_5]), (arr_12 [7]))))))));
        }

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            arr_20 [3] [i_6] = ((var_9 ? (((-(((var_4 != (arr_17 [i_6] [6] [i_3]))))))) : (arr_9 [i_3] [i_3])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((17418939868488733953 + (((arr_28 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1]) ? (arr_28 [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1]) : (arr_28 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1]))))))));
                            arr_30 [i_9] [i_9] [7] [i_9] [i_9] = ((-(arr_28 [i_8] [i_6 - 2] [i_8] [i_9] [i_6 - 1] [12])));
                            var_23 = (arr_12 [i_9]);
                            var_24 = (((arr_29 [i_8] [i_7] [i_6 + 1] [i_6] [i_6 - 2] [i_3]) != (max((arr_24 [i_6 + 1] [i_7]), ((min((arr_11 [i_3] [i_3] [i_3]), (arr_28 [i_3] [1] [i_7] [i_8] [i_8] [i_6]))))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_25 = ((-(arr_31 [i_3] [i_3] [i_3])));
                                var_26 -= ((((max(369808774870728935, 1027804205220817678))) ? (arr_10 [i_12] [i_12 - 3] [i_12 + 1]) : (arr_34 [i_12 - 1])));
                                var_27 = ((var_1 > ((1027804205220817662 ? 247 : 2639114915306124638))));
                                arr_42 [i_3] [i_3] [7] [i_12] [i_13] = var_4;
                                arr_43 [i_3] [i_10] [i_12] [i_12] = var_11;
                            }
                        }
                    }
                    var_28 = (((((-(arr_28 [i_3] [i_10] [i_10] [i_11] [i_11] [2])))) ? (((arr_24 [i_3] [i_3]) ? (arr_24 [i_11] [i_10]) : (arr_36 [i_3] [i_10] [i_11] [i_3] [i_10] [i_3]))) : (17095 * 24220)));
                    arr_44 [i_3] [4] [i_11] [4] = ((((max(4294967292, 6))) ? -369808774870728935 : -18535));
                }
            }
        }
    }
    #pragma endscop
}
