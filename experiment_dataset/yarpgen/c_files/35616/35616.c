/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = 3342534889;
                    var_13 ^= var_5;
                }
            }
        }
    }
    var_14 = (~var_11);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_13 [i_5] [i_5] = (max((max(var_2, 952432422)), var_10));
                    arr_14 [i_3] [7] [i_5] = ((0 ? (max((!3342534907), (arr_8 [i_3] [i_3] [5]))) : (((((var_4 || 64) && var_10))))));
                    var_15 = (arr_6 [i_3]);
                    var_16 ^= var_6;
                }
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
