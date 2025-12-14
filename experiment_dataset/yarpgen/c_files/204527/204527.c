/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [20]);
        var_10 ^= (1 < 1);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_11 += (((arr_4 [i_3] [2]) << (1 << var_2)));
                        var_12 = (min(var_12, ((((arr_5 [i_0 - 1] [i_2 + 3]) ? (arr_12 [i_2 + 1] [i_2 + 2]) : (arr_12 [i_2 + 4] [i_2 + 3]))))));

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            arr_16 [i_0] [i_4 - 2] [i_3] [i_0] [i_1] [i_0] = ((arr_6 [i_2 + 4] [i_0 + 1]) ? var_2 : (arr_6 [i_2 + 2] [i_0 + 1]));
                            arr_17 [20] [0] [0] [i_4] |= ((-(arr_13 [i_3 - 1] [i_4 - 2] [i_2] [i_0 + 1] [i_2] [i_2 + 3] [i_3])));
                            arr_18 [i_0] [i_0] [i_2] [i_3 - 1] [i_0] = -9682;
                            var_13 = (arr_6 [i_0 - 1] [i_0 + 1]);
                        }
                    }
                }
            }
            var_14 = 1;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_1] [i_0] = (arr_15 [9]);
                            arr_28 [i_0] [i_1] = (4294967295 * 2146503410);
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_15 = (((arr_21 [i_0] [i_0 + 1] [i_8] [1]) ? 1 : (arr_26 [i_0] [i_0 - 1] [i_0])));
            var_16 -= (~var_4);
            var_17 *= ((!(((var_6 ? (arr_1 [i_0] [i_8]) : var_3)))));
            arr_33 [i_0] = (var_6 <= 2146503410);
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_18 &= (((((var_4 ? (arr_8 [22] [22] [i_9] [1]) : 0))) ? 1 : 1));
            var_19 += (var_2 || 1);
        }
        var_20 *= var_9;
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_39 [i_10] = (arr_19 [i_10] [i_10] [i_10]);
        var_21 = (max(var_21, 4294967281));
    }
    var_22 = (max(var_22, (((var_0 ? 1 : (min(((4227807602 ? 1 : 0)), var_9)))))));
    #pragma endscop
}
