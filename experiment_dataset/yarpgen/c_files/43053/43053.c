/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (-(((4920394413843400082 > 81364466) ? (((arr_1 [i_1 + 1] [4]) * var_14)) : (((arr_1 [8] [13]) ? var_9 : -91)))));
                var_20 = (~((-(arr_6 [i_0]))));
                arr_8 [1] [1] |= (((arr_5 [i_1 + 1]) != ((max(2696281930, -24)))));
                var_21 |= 7625533887609322311;
                var_22 = (((arr_0 [i_0]) & ((min(((((arr_2 [i_1]) <= (arr_5 [i_0])))), (max(14, 99)))))));
            }
        }
    }
    var_23 = var_16;
    #pragma endscop
}
