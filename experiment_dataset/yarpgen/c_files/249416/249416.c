/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = var_6;
                var_16 = (((arr_1 [13] [2]) << (((~var_9) - 1619670226))));
                arr_4 [0] [i_0 - 1] [i_1] &= ((((((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 - 1])))) ? (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
                arr_5 [14] [i_1] [i_1] = (max(9869200072797701097, (9869200072797701083 & 38443966)));
                arr_6 [i_1] [i_1] = min((((!(arr_2 [i_0 + 1] [i_1 + 1])))), ((-(arr_2 [i_0 - 1] [i_1 - 2]))));
            }
        }
    }
    var_17 = var_7;
    var_18 = (~(max(((max(95, 8388096))), 133693440)));
    #pragma endscop
}
