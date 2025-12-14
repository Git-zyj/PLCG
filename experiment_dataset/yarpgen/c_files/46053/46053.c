/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(arr_0 [0] [i_0])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = -5650059109215182343;
        arr_7 [i_1] [i_1] = (min((((((((arr_5 [17] [i_1]) ? 112 : (arr_5 [i_1] [i_1])))) ? (arr_5 [7] [i_1 + 1]) : ((min((arr_5 [i_1] [14]), var_3)))))), 0));
        arr_8 [i_1] = 4028224798;
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_19 [0] [i_3] [i_4] [i_5] |= ((~((~(arr_18 [10] [i_2 + 2] [i_2] [i_5])))));
                        var_13 = ((var_4 ? 4294967295 : (12370 | var_8)));
                        arr_20 [i_5] [i_5] = (((((20 ? -32248 : 246))) ? 81 : -65525));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_5] [12] [i_4] |= ((-(arr_18 [i_2] [i_5 + 4] [i_6] [i_5])));
                            arr_25 [i_5] [13] [i_4] [i_3] [i_5] = (max((0 & var_8), ((max((arr_10 [i_2 - 1]), (arr_10 [i_2 + 2]))))));
                            arr_26 [i_5] [i_3] [4] [i_5] [3] = (arr_11 [i_6] [i_2 + 4]);
                        }
                    }
                }
            }
        }
        var_14 = (((-(((arr_4 [i_2] [i_2]) ? 1321609742 : (arr_18 [i_2] [14] [i_2] [i_2 + 3]))))));
    }
    var_15 = 1042906916989648011;
    var_16 = (max(var_12, 16244));
    #pragma endscop
}
