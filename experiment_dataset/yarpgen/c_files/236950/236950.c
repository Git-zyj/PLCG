/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max((max((max(var_12, var_12)), var_12)), var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = ((~((0 ? 1299 : 3968))));
                        var_16 = ((var_0 + (arr_8 [i_0] [4] [i_2] [i_3 - 1])));
                    }
                }
            }
        }
        var_17 = (min(var_17, (((17579175974633872531 % (arr_11 [i_0]))))));
        arr_12 [i_0] [8] = (((arr_10 [10] [i_0] [i_0] [i_0]) || -91));
        var_18 = 23115;
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        arr_16 [i_4] = ((var_7 ^ (!-53316)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_19 = ((var_3 % ((~(arr_9 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))));
                    arr_23 [0] [i_5] &= (min((~5036820985370182378), ((((arr_1 [i_4 - 1]) % (arr_1 [i_4 + 3]))))));
                    var_20 = max(-783830958, (max((arr_0 [9]), 2147483647)));
                }
            }
        }
        arr_24 [i_4] [i_4 + 2] = 91;
    }
    var_21 &= var_13;
    #pragma endscop
}
