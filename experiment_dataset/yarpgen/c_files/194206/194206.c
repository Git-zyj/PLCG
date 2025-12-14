/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (max((arr_9 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_0]), ((((((arr_6 [i_0 - 1]) ? 26 : (arr_1 [i_1] [i_2])))) ? 119 : 230))));
                    arr_11 [i_0] [i_0] = ((138 ? (((arr_1 [i_0 + 1] [i_0]) - -4960176991158261054)) : ((18446744073709551607 ? (arr_8 [i_0 + 2] [i_0] [i_0]) : (arr_1 [i_0 + 2] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
