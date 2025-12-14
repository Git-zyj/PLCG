/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (min(0, (min(((((-9223372036854775807 - 1) || var_6))), var_4))));
    var_14 = var_2;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_9;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_15 = (max(var_15, (((((((arr_6 [i_3]) ? (max(var_4, 5)) : ((min(var_2, var_0)))))) ? (((arr_1 [i_0] [7]) ? (arr_12 [i_2] [i_3] [i_4]) : var_3)) : (35541 - -835597618))))));
                            var_16 = ((((~(arr_13 [i_0 + 2] [i_1 + 3] [i_3 + 1] [i_4] [i_4]))) > var_0));
                        }
                        arr_15 [i_0] [i_1] [i_3] [i_3] &= var_8;

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_19 [i_0] [0] [i_2] [i_3] [i_1] = (((arr_8 [i_1] [i_2 + 2]) < (arr_2 [i_3 - 2])));
                            arr_20 [10] [i_1 - 1] [i_2 + 3] [i_2 + 3] [i_3] [i_5] |= ((((((arr_3 [i_2 + 3]) ? (arr_3 [i_2 + 3]) : var_4))) ? (arr_11 [i_0] [i_5 + 1]) : var_7));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_17 *= (arr_7 [i_3] [i_3] [i_6]);
                            arr_24 [i_0] [i_1] [i_1] [i_3] [i_0] = ((var_2 >> (((arr_11 [i_2 + 2] [i_0 + 2]) + 3879748321365904811))));
                        }
                        arr_25 [4] [i_1] [i_2 + 2] [i_1] = ((((((var_9 ? var_10 : var_5)) - (arr_1 [i_3] [i_1]))) == ((((-9223372036854775807 - 1) < 235)))));
                    }
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
