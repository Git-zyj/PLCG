/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 -= ((var_11 - (20 - var_7)));
    var_16 = (max(var_16, var_3));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 ^= ((((((((((arr_1 [i_0]) ^ var_8))) > (arr_2 [i_0]))))) == (((arr_0 [i_0] [i_0]) & (-20 + var_10)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [20] = (arr_3 [i_0] [i_0] [2]);
                    var_18 = ((var_4 && ((((-(arr_0 [i_1] [i_1])))))));
                    arr_9 [i_0] [i_1] [18] [i_0] = 20;
                    var_19 = (min(var_19, (arr_5 [i_2] [i_1] [i_0])));
                    arr_10 [10] [i_0] [i_2] = (((var_0 / (arr_5 [21] [i_1] [i_2]))));
                }
            }
        }
        var_20 = var_10;
        var_21 = ((32767 || ((var_9 && (arr_5 [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
