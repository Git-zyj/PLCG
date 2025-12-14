/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (((arr_1 [4]) / (arr_0 [i_0] [i_0])));
        var_12 = (var_6 / var_0);
        arr_2 [i_0] = var_10;
        var_13 = ((var_3 ? 14455 : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_14 = 0;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 = 16503080858178603478;
                    arr_11 [i_1] [i_3] = (var_3 ? ((1023 ? 1943663215530948137 : 16382)) : var_0);
                    var_16 = ((+(((arr_10 [i_1] [3] [i_3]) ? var_6 : (arr_1 [i_1])))));
                    arr_12 [i_1] [i_3] [i_3] = 1004;
                }
            }
        }
    }
    var_17 = (max(var_17, ((max(var_2, 10259530194260704283)))));
    #pragma endscop
}
