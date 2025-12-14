/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 ^= ((2502150713381221959 ? var_8 : 10650));
    var_21 = ((max((max(var_17, var_12), 1))));
    var_22 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 = (arr_0 [18]);
        var_24 ^= (arr_0 [i_0]);
        var_25 = (min(1, (~216)));
        arr_2 [i_0] = (((((arr_0 [i_0]) && (arr_0 [i_0]))) ? (min(var_5, var_9)) : (((arr_1 [i_0]) ^ var_5))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = (arr_3 [i_1] [i_1]);
        arr_7 [i_1] = 91;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_10 [10] [i_2] = -91;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    {
                        var_26 ^= ((-(arr_12 [i_4 + 1] [i_4 - 3] [i_4 + 1])));
                        arr_18 [i_2] [i_4] = (((arr_4 [i_2 + 1]) ? (arr_4 [i_2 - 1]) : (arr_15 [i_4 - 2] [i_2 + 1])));
                        var_27 = (arr_0 [i_3]);
                        arr_19 [i_2] [i_2] [i_4] [i_4] [i_5 + 2] = (-((var_1 ? var_16 : (arr_15 [14] [i_4 - 3]))));
                        var_28 = (max(var_28, (arr_0 [i_2 + 1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_29 = (max(var_29, (arr_5 [i_6] [i_6])));
        var_30 = (arr_1 [i_6]);
        var_31 = (((arr_20 [i_6] [i_6]) << (((arr_20 [i_6] [i_6]) - 43))));
    }
    #pragma endscop
}
