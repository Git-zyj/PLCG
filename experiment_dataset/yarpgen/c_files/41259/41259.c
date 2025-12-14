/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_9 ? var_11 : (((!(~var_5)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((((-(arr_0 [i_0] [i_0])))) ? (max((arr_0 [i_0] [i_0]), var_15)) : (((1 ? 1 : 1))))) ^ var_6));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((((min(((min(var_2, (arr_5 [i_0] [i_0] [i_0])))), ((1 ? (arr_5 [i_0] [i_0] [i_0]) : var_17))))) || (((-(min(var_8, var_8))))))))));
                    arr_8 [i_0] [i_2] [i_0] [i_0] = ((min(-var_6, (arr_7 [i_2 - 3] [i_1 - 2] [i_1] [i_1]))));
                }
            }
        }
        arr_9 [i_0] = ((-(min(var_4, var_8))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        var_20 = (!var_7);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_19 [i_3] [1] [i_3] |= (((arr_15 [i_3] [i_4] [i_3 + 1]) ? (arr_15 [i_4] [i_4] [i_3 - 1]) : var_17));
                    var_21 = -1125895611875328;
                }
            }
        }
        var_22 = (min(var_22, 198));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_23 -= (var_12 % var_8);
                    arr_25 [i_3] [i_6] [i_6] [i_6] = ((~(arr_10 [i_3])));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_24 = ((((-var_15 + 2147483647) << (((arr_23 [i_8] [i_8]) - 61)))) & ((-(((arr_11 [i_8]) * (arr_23 [i_8] [i_8]))))));
        var_25 = (max(var_25, var_1));
        var_26 = -41;
        var_27 = ((-(arr_24 [i_8])));
        var_28 = ((((101 | var_3) ? (var_12 & var_2) : (arr_12 [i_8]))) <= ((((((arr_10 [i_8]) + var_7))))));
    }
    #pragma endscop
}
