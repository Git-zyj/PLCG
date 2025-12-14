/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 &= -0;
        arr_3 [i_0] [i_0] = ((((8 && (arr_1 [6])) ? (((arr_2 [i_0]) ? (arr_1 [i_0]) : var_4)) : ((~(arr_2 [i_0]))))));
        var_20 = min(((((var_13 - 0) & (((arr_2 [14]) ? 246 : (arr_2 [i_0])))))), ((((1855793339 ? (arr_0 [11]) : 46)) % (((arr_2 [i_0]) ? 1453303078 : 73)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, ((((arr_9 [i_1] [i_1] [2]) ? var_7 : (~3267252969))))));

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_12 [i_3] [i_2] = (arr_9 [i_2] [i_2] [i_2]);
                        var_22 = (min(var_22, 9));
                        var_23 = (arr_10 [i_2] [i_2] [i_3] [i_2]);
                    }
                    arr_13 [i_2] [i_2] [i_2] [i_2] = 17713227218119221906;
                    var_24 = -var_3;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_23 [i_1] [i_1] &= (((((arr_5 [i_5 - 2]) > (arr_8 [3] [10]))) ? var_5 : ((((arr_15 [i_5] [i_5] [i_5]) ? (arr_7 [i_1] [i_1] [i_6]) : 19833)))));
                        var_25 &= (arr_15 [i_1] [i_6] [i_6]);
                        var_26 = ((+(((arr_14 [i_1]) ? var_11 : var_12))));
                    }
                }
            }
        }
        arr_24 [i_1] [i_1] = ((-(arr_17 [i_1] [i_1] [i_1] [i_1])));
        var_27 += -7;
        var_28 |= 171;
    }
    var_29 = (~var_11);
    #pragma endscop
}
