/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 += (max(var_5, (((-(arr_8 [i_0] [i_1 - 2] [i_3 + 1]))))));
                        var_20 = ((!(arr_4 [i_1 + 2])));
                        var_21 = ((24576 ? ((var_4 + ((min(32783, 25460))))) : (arr_0 [i_2])));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((~(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_22 = var_8;
        var_23 |= (((((var_8 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : 32783))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) - 25460)) : (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0])))));
        var_24 = (max(((-523264 ? (arr_10 [2] [2] [i_0] [2]) : (((var_18 ? (arr_4 [i_0]) : 0))))), 0));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = 40075;
        var_25 = (((((~(((arr_4 [i_4]) ? 40076 : (arr_0 [i_4])))))) ? ((((((1 != (arr_6 [i_4] [i_4]))))) + -2242132782247410027)) : ((max(var_3, (arr_3 [i_4]))))));
        var_26 = ((((max((arr_1 [i_4]), var_7))) ? (arr_1 [i_4]) : ((2242132782247410026 ? (arr_1 [i_4]) : (arr_1 [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_19 [i_5] = ((var_7 != (arr_2 [i_5])));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_27 = (arr_2 [i_5]);
            var_28 |= (((1 <= 0) ? (((arr_11 [i_5] [i_5] [i_5] [i_5]) ? var_7 : var_8)) : 32753));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_28 [i_6] = (arr_9 [i_6] [i_6] [i_7 + 2] [i_7 + 3]);
                        var_29 = (((arr_21 [i_7 + 1]) ? (arr_21 [i_7 + 2]) : (arr_21 [i_7 + 2])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    {
                        var_30 ^= ((2242132782247410027 != ((((32783 == (arr_14 [i_6])))))));
                        var_31 = (min(var_31, -2242132782247410027));
                    }
                }
            }
            var_32 = (min(var_32, var_0));
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_33 += (1 + 15369200346204206988);

        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            arr_40 [i_11] [i_12 - 1] [i_12 - 1] = (((0 - 16) == (var_10 / -3403271786590996928)));
            var_34 = ((((((var_18 > (arr_38 [i_11] [i_11]))))) == (arr_10 [2] [i_12 - 1] [i_12 - 1] [2])));
            var_35 = (min(var_35, (arr_10 [0] [i_12] [i_12 - 1] [i_12 - 1])));
            var_36 = (min(var_36, ((((arr_4 [i_12 - 1]) <= var_7)))));
        }
        var_37 = (max(var_37, (((-(arr_38 [i_11] [i_11]))))));
    }
    #pragma endscop
}
