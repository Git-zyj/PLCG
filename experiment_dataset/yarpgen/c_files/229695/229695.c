/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_3, ((max(var_11, var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (arr_0 [12] [i_0])));
        arr_3 [i_0] = (((arr_0 [9] [9]) - 16672));
        arr_4 [8] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (!28)));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_2] |= (arr_9 [4] [i_2]);
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_17 = (arr_1 [i_1] [i_4]);
                            var_18 = (min(var_18, (arr_9 [i_1] [0])));
                            var_19 -= -13;
                            var_20 = (max(var_20, (arr_13 [i_1] [i_2] [i_2] [i_5])));
                            var_21 = ((!(arr_5 [i_4 - 2])));
                        }
                    }
                }
            }
        }
        arr_18 [i_1] = ((-(arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    #pragma endscop
}
