/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_3));
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_13 = (((arr_6 [i_2 + 1] [i_0 - 1]) ? (((((arr_14 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 1] [i_0 - 3]) && (arr_4 [i_0]))))) : (((arr_4 [i_4]) % (arr_7 [i_2 + 1] [14])))));
                            var_14 &= (arr_2 [i_0]);
                            var_15 &= arr_11 [i_3] [i_3] [i_3] [14];
                        }
                        arr_15 [i_0] = (arr_6 [i_0 + 1] [i_0 - 1]);
                        var_16 &= var_2;
                        var_17 = ((~(arr_7 [i_0 - 2] [i_0 - 2])));
                    }
                }
            }
            arr_16 [i_0] [i_0 + 1] [i_1] = (~56424);
            arr_17 [i_0] = ((~(arr_12 [i_0] [i_1] [1])));
        }
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_18 ^= (((arr_6 [i_0] [i_0 + 2]) + (arr_21 [i_5 - 1] [i_5] [i_5])));
                arr_22 [i_0] = ((~(arr_1 [i_5 + 1])));
            }
            var_19 = ((((((arr_5 [i_0] [i_0] [i_0]) && var_7))) ^ (arr_0 [i_0 - 2] [i_0 - 1])));
            var_20 *= (((arr_2 [i_0 - 2]) ? (arr_5 [i_0 + 1] [i_0 - 3] [22]) : (arr_5 [i_0] [i_0 - 3] [i_0 + 1])));
            arr_23 [i_5 - 1] [i_5 - 1] = (arr_0 [i_0] [i_0]);
            var_21 ^= ((-(arr_2 [i_0 - 1])));
        }
        var_22 = ((18446744073709551615 ? 134 : 3590552634));
        var_23 *= var_8;
    }
    #pragma endscop
}
