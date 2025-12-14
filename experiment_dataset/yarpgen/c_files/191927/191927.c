/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (((((16260618830694986480 ? var_9 : (arr_3 [i_0]))) & (((~(arr_3 [1])))))) == (arr_7 [i_0] [i_0] [8]));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((((arr_3 [i_0 + 1]) ? var_11 : -var_5)) + 30555));
                    var_14 = (arr_1 [i_0]);
                    var_15 |= ((3662012258689281413 ? var_11 : (((((arr_0 [11] [i_1]) >> (-2004337916 + 2004337964))) - (min(8880892429027196763, 9385678404890305224))))));
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = var_1;
    var_18 = var_10;
    #pragma endscop
}
