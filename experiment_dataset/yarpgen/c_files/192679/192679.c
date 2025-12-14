/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 8;i_4 += 1)
                        {
                            var_20 = ((-29807 ? var_0 : (arr_10 [i_0])));
                            arr_13 [i_0] [i_1] [1] [i_2] [i_1] [i_4 - 2] = 132;
                        }
                        arr_14 [8] [i_1] [1] [i_2] [i_3] = (((((0 ? var_1 : 1114659592))) ? -1506483279 : (arr_7 [i_1] [1] [i_2] [i_3])));
                    }
                    arr_15 [i_1] = (((arr_10 [i_2]) ? ((((arr_10 [i_0]) << (arr_1 [i_2])))) : (((arr_1 [i_0]) ? var_14 : var_4))));
                    var_21 += (((arr_10 [i_0]) ? (((min((arr_1 [i_1]), (arr_1 [i_2]))))) : 10973143231247731775));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_20 [1] [1] [1] [i_1] [1] = ((((0 ? ((var_12 + (arr_7 [i_1] [i_1] [i_1] [i_5]))) : 124))) ? (((var_8 ? (arr_9 [i_1] [i_1] [0] [i_1] [i_1]) : -7))) : 0);
                                var_22 = (arr_0 [i_0] [i_6]);
                                arr_21 [i_1] [i_5] [i_2] [i_2] [i_0] [i_1] = ((!(arr_9 [i_0] [i_0] [10] [i_1] [i_0])));
                                var_23 = ((29807 ? (arr_16 [i_5] [i_2] [i_1] [i_0]) : 64295));
                                var_24 ^= var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_19;
    #pragma endscop
}
