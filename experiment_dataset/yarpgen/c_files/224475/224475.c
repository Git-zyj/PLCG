/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((55 ? 1 : 1));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((((34 ? (arr_3 [i_0] [i_0]) : 1))) ? ((((((1 ? 1 : (arr_8 [i_0])))) ? var_7 : (arr_2 [i_1 + 2] [i_0])))) : ((498986227 ? ((1442950499 ? 0 : 7476725431303367287)) : (((1 ? 0 : 184)))))));
                    var_13 -= var_9;
                    arr_9 [i_0] [i_0] [15] = (arr_1 [i_0]);
                    arr_10 [i_0] = arr_4 [i_1 + 4] [i_1 + 2] [i_0];
                    arr_11 [i_0] [i_1] [i_0] = var_1;
                }
            }
        }
        var_14 = (arr_0 [i_0]);
        var_15 = (((((var_0 ? 7476725431303367287 : 1))) ? (((((var_3 ? 1 : var_1))) ? var_9 : (((var_6 ? (arr_7 [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))))) : (arr_5 [i_0])));
        var_16 += (arr_7 [10] [16]);
    }
    var_17 = ((0 ? 8862401287675273041 : 13043057943621592793));
    var_18 ^= 1;
    #pragma endscop
}
