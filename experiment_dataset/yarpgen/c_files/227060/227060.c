/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(!var_1)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [13] [i_0] [i_2] [i_3] = (!(arr_6 [i_3] [3] [i_0]));
                        var_12 = (min(var_12, (((-(arr_9 [i_3] [2] [i_3] [i_3] [i_3] [i_3]))))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = 32327;
        var_13 *= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_14 = (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]);
        arr_16 [i_4] [i_4] &= (arr_5 [2]);
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_15 = (min(var_15, (arr_9 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5])));
        arr_20 [i_5] = ((~(((~(arr_7 [10] [10] [11] [i_5]))))));
        arr_21 [i_5 - 1] = 0;
    }
    var_16 = var_9;
    #pragma endscop
}
