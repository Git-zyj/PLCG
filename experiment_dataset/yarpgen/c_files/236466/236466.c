/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 -= (arr_1 [0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = ((+(((arr_2 [i_0] [i_1]) ? 54926 : (((arr_1 [i_0]) / var_10))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (arr_5 [13] [i_1] [i_2] [i_2]);
                }
            }
        }
        arr_8 [i_0] = (((arr_0 [i_0]) / (10609 + 54927)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_16 += var_1;
                    arr_13 [i_0] [i_0] [i_4] = ((((arr_6 [i_0] [i_3] [i_4] [i_0]) ? (arr_0 [i_0]) : (var_6 / 54940))));
                    var_17 = var_9;
                    arr_14 [i_0] = (min((arr_11 [12] [i_3] [i_4]), ((54914 ? 91 : 14037360239186390580))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_18 = ((((min(25322776, (arr_15 [i_5])))) ? (arr_16 [i_5]) : ((~(arr_15 [i_5])))));
        var_19 |= ((23967 ? 1856526515203874569 : -29007));
        var_20 = (min((min(1137001133, (arr_16 [i_5]))), ((10609 & (arr_16 [i_5])))));
        arr_17 [i_5] = (((~(max(165, -635599750)))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_21 = ((10605 ? 2974044016 : (-32767 - 1)));
        arr_20 [i_6] [i_6] = ((var_7 & ((((arr_18 [i_6]) ? (arr_18 [i_6]) : (arr_18 [i_6]))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    arr_28 [i_7] [i_8] [i_8] [i_7] = ((54934 / (arr_18 [i_6])));
                    var_22 = ((!(arr_24 [i_8] [i_8] [i_8])));
                    var_23 = (((arr_21 [i_7] [i_7] [i_7]) ? (arr_21 [i_7] [i_7] [i_7]) : -111));
                    var_24 += (min((var_5 + var_11), ((~(arr_24 [i_6] [i_7] [i_6])))));
                    arr_29 [i_6] [i_8] = (arr_18 [i_6]);
                }
            }
        }
    }
    var_25 = -11178971;
    var_26 = (((17481 / var_9) ? ((43 ? var_9 : (var_0 / var_5))) : (!var_3)));
    #pragma endscop
}
