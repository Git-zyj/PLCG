/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((((((arr_2 [i_0]) ? -1 : (arr_2 [i_0])))) || ((((arr_2 [i_1]) ? (arr_2 [i_1]) : -1247196839)))));
                    arr_9 [i_2] [i_1] [i_1] [i_2] = (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [8])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_3] [i_6] [i_3] [i_6] = ((!(((~((var_0 ? 1889972241 : 1738887392)))))));
                            var_14 = (arr_12 [i_5]);
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        var_15 = ((var_0 ? ((~((9 ? var_2 : var_2)))) : (~var_9)));
                        var_16 = ((max((arr_23 [i_4] [i_7]), var_8)));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_9] [i_7] [i_3] [i_3] = (arr_18 [i_3 - 4] [i_4 + 2]);
                        var_17 -= (arr_14 [i_4 - 1]);
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        var_18 = (((1247196838 ? (!var_4) : var_1)));
                        var_19 &= ((-(min((~var_9), var_10))));
                        arr_35 [i_10] [i_7] [i_3] [i_3] [i_3] = 46;
                    }

                    for (int i_11 = 2; i_11 < 24;i_11 += 1)
                    {
                        var_20 = (arr_18 [i_3 + 3] [i_4 + 2]);
                        arr_39 [i_4] [i_11 - 2] = ((((!(arr_23 [i_4] [i_4]))) ? (~var_3) : (arr_32 [i_11 - 2] [i_3] [14])));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_21 = ((var_3 ? var_1 : (arr_36 [i_4 + 2] [i_4 - 1] [i_4] [i_4 - 1])));
                        var_22 ^= var_3;
                        var_23 = (min(var_23, ((((arr_26 [i_4] [i_12] [i_12] [i_4 + 1] [i_4] [i_4]) ? (arr_26 [i_12] [i_12] [i_4] [i_4 + 2] [11] [2]) : (arr_26 [1] [5] [1] [i_4 + 2] [1] [i_4]))))));
                    }
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    arr_44 [i_13] [i_3] [i_3] [i_3] = (((((~(arr_34 [i_3] [22] [i_4] [i_13] [i_4 + 1])))) ? (arr_41 [i_4]) : (arr_17 [i_13])));
                    var_24 = (((~(arr_10 [i_3 - 1] [i_4 + 1]))));
                    var_25 = (~var_7);
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_26 = ((!(arr_49 [i_3 + 3] [i_3 + 3] [i_4] [i_3 + 3])));
                            arr_50 [5] [i_14] [i_4 - 1] [i_4] [i_3] = ((((!(((~(arr_12 [i_15]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
