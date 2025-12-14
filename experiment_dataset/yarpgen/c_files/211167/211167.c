/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (213 & 0)));
                    var_16 *= ((((1 ? (arr_8 [i_1 - 3] [i_1 - 3] [i_1]) : var_0))) & (arr_7 [i_1 - 3] [i_1 - 3] [i_1 - 3]));
                    arr_10 [9] [i_0] [i_0] [i_2] = var_9;
                    var_17 ^= (((((((min(14391593521005073777, 0))) ? (arr_7 [i_0] [i_0] [i_0]) : (-2147483647 - 1)))) <= (((0 + var_10) ? var_2 : (((arr_9 [i_0] [i_1 + 2] [i_2] [9]) - var_3))))));
                }
            }
        }
        arr_11 [i_0] [i_0] = (((arr_1 [i_0]) ? (((((max(var_1, (arr_0 [9])))) ? (((arr_1 [i_0]) ? var_0 : (arr_4 [i_0]))) : var_12))) : var_1));
    }
    var_18 &= (((min(var_9, -var_13))) ? var_13 : var_8);
    var_19 *= var_11;
    #pragma endscop
}
