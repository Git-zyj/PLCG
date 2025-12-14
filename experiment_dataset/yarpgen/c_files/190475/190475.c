/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = ((((min(var_3, 56813))) && ((((var_3 != var_2) ^ (2147483647 ^ 13304))))));
                    var_11 = var_5;
                    var_12 ^= ((((((((128 ? 1 : var_0))) ? -224 : (-127 - 1)))) && ((min((arr_8 [i_0] [i_1] [i_2] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_2]))))));
                    var_13 = (((((((((arr_5 [i_0] [i_0] [9]) ? -1 : 220))) ? (!233) : (((arr_1 [i_0] [i_0]) ? var_0 : (arr_4 [i_1] [i_2])))))) || ((max((min(28, var_9)), ((((arr_7 [11] [i_1] [i_0]) || var_5))))))));
                    var_14 ^= (arr_3 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    var_15 = (arr_10 [i_3]);
                    arr_16 [i_5] [0] = (var_3 ^ 9692);
                    arr_17 [10] [i_5] = (((-((var_3 ? var_1 : (arr_14 [i_3] [i_4] [i_5]))))));
                    var_16 ^= (arr_5 [i_3] [0] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
