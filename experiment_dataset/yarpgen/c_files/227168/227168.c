/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, 383227038));
        arr_2 [11] = (max((max((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0]))), ((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) ? (((arr_1 [2]) ? 729235166 : 8388544)) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = min((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))), ((((arr_0 [i_0] [i_0]) > (max(47, (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] &= (((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])));
        var_12 = (~-2094192857);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_13 = (arr_4 [i_1]);

                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        arr_17 [i_4] [i_3] = (arr_10 [i_1] [i_2]);
                        var_14 = (arr_15 [i_1] [i_3] [8] [i_1]);
                        var_15 = -20;
                        arr_18 [i_3] [i_3] [i_1] [5] [i_2] = (((((arr_13 [i_3]) ? -153541118 : -1))) ? (arr_10 [i_1] [i_3]) : 2094192878);
                    }
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_16 = (arr_8 [i_1] [i_1] [13]);
                        var_17 = arr_19 [i_1] [i_1] [i_2] [i_3] [i_5] [i_5];
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_18 = (max(var_18, (((!(arr_19 [i_1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_1]))))));
                        var_19 = ((((0 ? (arr_15 [i_1] [i_2] [i_2] [i_6]) : 8388557))) ? (arr_12 [i_3] [i_2] [i_3 + 1]) : (arr_9 [i_1]));
                    }
                    arr_23 [i_3] [i_2] = ((((((arr_19 [i_3] [i_2] [16] [i_2] [i_2] [i_2]) / -64))) ? (arr_12 [i_1] [i_3 + 1] [i_3 + 1]) : (arr_19 [i_3] [i_2] [i_2] [i_2] [4] [i_2])));
                }
            }
        }
        arr_24 [i_1] = ((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_22 [i_1] [19] [i_1] [i_1] [i_1] [i_1]) : (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_20 = (min((max((-127 - 1), ((~(arr_26 [i_7] [14]))))), ((max(((max(-94, 120))), (min((arr_25 [i_7]), (-127 - 1))))))));
        var_21 = (min(var_21, (arr_25 [23])));
    }
    var_22 = 4095;
    var_23 = (min(var_23, ((max((~var_4), (min(4294967279, ((min(453346618, var_1))))))))));
    var_24 = (var_10 ? var_0 : var_10);
    #pragma endscop
}
