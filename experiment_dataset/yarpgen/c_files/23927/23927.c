/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (min(var_13, ((((123 && 18) == ((((arr_1 [i_0] [i_0]) > var_1))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, ((((arr_2 [i_0] [i_1 - 3] [i_0]) <= ((((arr_0 [i_1 - 2]) > var_10))))))));
                        arr_11 [i_3] [i_1 - 2] [i_1] [i_2] [i_0] [i_2] = ((((~(arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 3] [i_1 - 3]))) == (!-3797)));
                        var_15 = var_11;
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || (arr_4 [i_0])));
        var_16 = (((arr_10 [i_0] [i_0]) >= (arr_10 [i_0] [i_0])));
        var_17 = (max(var_17, 4294967293));
    }
    var_18 ^= ((~(((((var_7 ? -22196 : var_8))) ? (3797 >= var_10) : var_4))));
    var_19 = var_6;
    #pragma endscop
}
