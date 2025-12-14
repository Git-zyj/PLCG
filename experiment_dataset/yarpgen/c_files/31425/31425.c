/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((7 == (!var_11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [5] = (1284686065 || -505175124);
        var_19 = (1 != (-2565494923431384913 || 69));
        var_20 = -1284686067;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_21 ^= -var_9;
                        var_22 = ((((13238894946733182784 & (arr_5 [6]))) ^ (((1 ? var_14 : (arr_0 [i_1] [i_1]))))));
                    }
                }
            }
        }
        var_23 = var_11;
    }
    var_24 = ((-7988378588937279372 ? 4294967276 : 19));
    #pragma endscop
}
