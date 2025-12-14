/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = ((1 | ((131071 + (arr_1 [i_1 - 1])))));
                    var_13 = (((~var_9) ? (arr_0 [12]) : var_9));
                    var_14 = (max((arr_0 [i_0]), ((-(((arr_1 [9]) ? 131078 : 5079211716481821221))))));
                    arr_8 [1] [i_0] = (arr_3 [i_1]);
                }
            }
        }
        var_15 = 131078;
        var_16 = (((1298957298 ? (arr_2 [8] [i_0 + 1]) : (arr_3 [3]))));
        arr_9 [i_0] [i_0] = ((max((arr_0 [i_0 - 3]), ((((arr_1 [i_0]) <= (arr_1 [i_0])))))));
    }
    var_17 = var_0;
    var_18 = ((-(max(-var_10, ((18446744073709420537 ? var_2 : 23671))))));
    #pragma endscop
}
