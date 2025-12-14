/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [7] [7] [13] |= (!-1);
                var_22 = (arr_0 [i_0]);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_23 ^= var_7;
                                var_24 = ((~(arr_8 [i_1 + 1] [i_1 + 1] [i_2] [i_3])));
                            }
                        }
                    }
                    var_25 -= (~var_19);
                    var_26 = ((~(((arr_13 [i_1 + 1] [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_0]) | (arr_13 [1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_0])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_27 = (arr_19 [i_1] [i_1] [i_1] [i_1 - 1]);
                        arr_20 [i_0] [i_0] = ((!(arr_0 [i_0])));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            var_28 = (min(var_28, ((((arr_11 [i_8 - 3] [i_8] [i_7 + 1] [i_1 - 1] [i_0]) == (arr_22 [i_7 + 1] [i_8 - 2] [i_8] [i_8] [i_8] [18]))))));
                            var_29 |= ((!(arr_8 [i_1 - 1] [i_7 + 1] [i_8 - 1] [i_8 - 2])));
                            var_30 = (min(var_30, (((-(arr_19 [i_0] [i_0] [i_1] [2]))))));
                        }
                        var_31 = (arr_9 [i_1 - 1] [i_7 - 2] [i_0] [i_7 - 1]);
                    }
                    arr_25 [i_0] [i_0] [i_5] [i_5] = (arr_17 [i_0] [i_1] [i_5]);
                    var_32 |= (arr_3 [i_1 + 1] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_33 = (((arr_15 [i_9 - 3] [i_9] [i_9] [i_1 + 1]) ? var_18 : (max((!var_6), (arr_24 [i_10] [12] [i_0] [i_9] [i_0] [i_0] [i_0])))));
                            var_34 ^= (arr_6 [5]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
