/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_15));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = (((((~(((arr_1 [12]) ^ var_0))))) ? (arr_0 [i_0]) : ((~(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = 249;
                    var_19 = (~0);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = (max(var_20, 20059));
                        arr_10 [i_3] [i_2] [i_1] [i_0 + 3] = 127;
                    }
                }
            }
        }
        arr_11 [i_0] = ((-(arr_0 [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        var_21 = var_6;
        arr_15 [i_4] = (((arr_5 [i_4 + 2] [i_4 + 1] [i_4 - 2]) % var_10));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_6] [i_7 + 1] = var_9;
                        arr_25 [i_4] [0] [i_7] [i_7 + 1] [i_4] [i_5] = (arr_12 [i_6]);
                        arr_26 [i_4] [i_5] [i_6] [i_7 + 1] = (arr_8 [i_7 - 1] [i_7] [1] [1] [i_7 + 1] [i_7 - 1]);
                        var_22 = (arr_5 [0] [i_5 + 2] [i_5 + 1]);
                    }
                }
            }
        }
    }
    var_23 |= var_9;
    var_24 = var_4;
    var_25 = (-(!0));
    #pragma endscop
}
