/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((((min(var_7, 0))) >> (var_0 - 13324))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : ((60810 ? 1 : 1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 *= arr_8 [i_0] [i_1];
                    var_12 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1] [i_1] = var_6;
                                arr_15 [22] [22] [i_2] [i_2] = (arr_9 [i_1]);
                                arr_16 [i_1] = var_9;
                                arr_17 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] = 29296;
                                var_13 = (((var_4 + 0) ? 11894 : (((arr_4 [i_3]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : 1))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_2 - 1]) / (arr_3 [i_2 - 1])));
                }
            }
        }
        var_14 = ((arr_4 [i_0]) && (((1 ? 31642 : 0))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_15 = (max(var_15, ((((var_5 == 1) / (arr_19 [i_7]))))));
                        arr_30 [i_7] [i_5] [i_6] [i_7] = (((arr_23 [i_0] [i_0] [i_0]) ? (((arr_3 [i_0]) ? (arr_27 [7] [i_7] [i_7]) : 1)) : (arr_24 [i_0] [i_0] [i_0])));
                        var_16 ^= arr_27 [20] [0] [i_6];
                    }
                }
            }
        }
    }
    #pragma endscop
}
