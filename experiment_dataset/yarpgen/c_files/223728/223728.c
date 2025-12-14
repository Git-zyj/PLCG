/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_11, ((((var_2 ? var_11 : var_3)) / ((var_13 ? 34084860461056 : 301840399278086806))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (arr_1 [2] [i_1]);
                    var_17 = (max((((var_14 || (arr_2 [i_1 - 1] [i_1 - 1])))), (((arr_2 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1 + 1] [i_1 - 2]) : (arr_0 [i_1 + 1] [i_1 - 1])))));
                }
            }
        }
    }
    var_18 = var_5;
    var_19 ^= ((~((1406154544 << (var_12 + 1871260827)))));
    var_20 = var_13;
    #pragma endscop
}
