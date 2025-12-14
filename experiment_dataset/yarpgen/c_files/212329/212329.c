/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_20 &= (((arr_0 [16]) ? ((var_11 ^ (arr_0 [4]))) : (arr_1 [i_0 - 3])));
        arr_2 [4] &= (((arr_0 [12]) <= (arr_1 [i_0 - 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] [i_0] [i_3] = 8388544;
                        arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_3] = (((arr_6 [i_0 - 2]) <= -2138467326));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((-((((arr_3 [i_0] [i_2]) > var_7)))));
                        arr_13 [0] [i_0 + 1] [i_1] [i_1] [i_2] [i_0] = (arr_9 [i_2] [i_2] [i_1] [6]);
                        var_21 = (3550270762081591445 != var_13);
                    }
                }
            }
        }
    }
    var_22 = var_6;
    var_23 &= ((((((((var_4 ? var_1 : var_9))) ? ((var_5 ? 8055280012887814553 : var_18)) : var_14))) ? var_19 : var_13));
    var_24 = (max(var_24, var_7));
    #pragma endscop
}
