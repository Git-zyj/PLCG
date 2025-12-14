/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (((((max(1692171577, 1047349960))) ? (arr_1 [i_0]) : (arr_6 [i_0] [i_0] [i_1] [i_2]))));
                    var_11 = (~21);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_12 = ((min(((-50 ? var_9 : (arr_2 [17]))), var_1)));
        arr_10 [i_3] [i_3] = ((-(((((var_6 ? (arr_4 [5] [i_3] [5] [5]) : var_7))) ? var_1 : 1692171604))));
        arr_11 [i_3] [i_3] = (max(-1692171604, (((arr_1 [i_3]) - (~-1692171579)))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_16 [i_4] [9] [i_4] = (max(((((arr_3 [i_4]) ? (arr_3 [i_5]) : var_10))), ((((max(1, 4986131551702480458))) ? (arr_2 [i_4]) : var_5))));
            arr_17 [i_4] [i_5] [i_5] = var_6;
            var_13 = (max(var_13, ((-(((max(1692171583, 63488)) - ((max(var_7, var_7)))))))));
        }
        var_14 ^= var_10;
        arr_18 [i_4] [5] = arr_2 [i_4];

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_15 = 1692171598;
            var_16 *= (((((1692171614 << (20672 - 20669)))) || ((min(((min((arr_1 [i_6]), 20596))), (((arr_1 [i_6]) ? -1692171615 : 1)))))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_17 = 0;
            arr_24 [i_4] [i_4] [i_4] = 4986131551702480458;
            var_18 = (arr_14 [i_4] [8] [i_7]);
        }
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            arr_27 [i_8 + 1] [i_4] = ((max(-998049003571105098, var_2)));
            arr_28 [i_4] = ((14247940134956497696 != (!241)));
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_35 [i_9] [i_9] = (((~-125) ? ((((~var_6) ^ (arr_32 [i_9] [i_9])))) : ((~(((arr_32 [i_9] [i_9]) | 12049463607442293691))))));
            var_19 = ((~(((((-(arr_34 [15] [i_10] [i_10])))) ? (max(-35765617, var_1)) : ((var_1 ? var_10 : var_5))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_20 = ((!(((((arr_40 [20] [i_10] [i_9] [i_11] [i_9]) << (-1 + 3)))))));
                        var_21 = (max(var_21, (((var_8 ? (arr_29 [i_10]) : 1)))));
                    }
                }
            }
        }
        arr_42 [i_9] = 56031;
        arr_43 [i_9] [i_9] = var_3;
    }
    for (int i_13 = 2; i_13 < 16;i_13 += 1)
    {
        var_22 -= (((arr_2 [9]) ? ((((arr_34 [i_13 + 2] [i_13 + 2] [23]) - ((var_1 ? (arr_4 [i_13 + 3] [i_13] [7] [i_13 - 2]) : var_2))))) : ((-(arr_2 [i_13])))));
        arr_46 [7] = ((((arr_45 [i_13 + 2]) >= -121)));
    }
    var_23 = max(var_5, (!267073734));
    #pragma endscop
}
