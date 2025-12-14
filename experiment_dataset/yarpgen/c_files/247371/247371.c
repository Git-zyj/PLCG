/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((min(var_10, var_4))) ? ((0 ? var_2 : var_9)) : (1 & 1))) + ((32 ? var_8 : var_11))));
    var_17 = (max((max(0, 1)), 1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_18 = (max(var_18, (0 + var_7)));
                    arr_10 [i_0] = 0;
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    arr_15 [i_0 - 4] [i_1] [i_0] [i_3] = 127;
                    arr_16 [i_0 - 2] [i_1] [i_0] = var_5;
                    arr_17 [i_0] [16] [3] [i_3] = (min(((-123 ? 1 : 0)), ((max(0, 1)))));
                    arr_18 [i_0] [i_0] [i_0] = (((((-4 + 2147483647) << (1 - 1))) << ((((1 ? 1 : -28)) - 1))));
                }
                arr_19 [i_0] [i_0] [i_1] = (((1 || var_13) + (max(((1 ? 1 : 1)), (!var_13)))));
                var_19 &= ((~((min(-28, 0)))));
            }
        }
    }
    #pragma endscop
}
