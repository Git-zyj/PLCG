/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = var_10;
                    var_11 = (arr_3 [i_1 - 1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = 18446744073709551609;
                    arr_18 [i_3] |= ((-(arr_16 [i_3] [i_3])));
                    var_12 = (arr_12 [i_3] [i_4]);
                    var_13 = var_9;
                }
            }
        }
    }
    var_14 = (max(var_0, (((var_7 == var_7) ? var_9 : var_10))));
    #pragma endscop
}
