/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((((var_4 ? var_8 : 29397))) || var_15))));
    var_17 = ((!(((~(max(var_0, 2749847152)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [18] [i_2] &= 24;
                            var_18 = (max(var_18, ((min(var_2, ((max((min(36146, 108)), var_13))))))));
                            arr_11 [i_2] [i_1] [i_2 + 3] = (max(-var_5, (max(var_13, ((2588474020143399461 ? var_4 : var_1))))));
                            arr_12 [10] [i_1] &= ((max(((var_1 ? var_9 : 2749847150)), (((var_11 ? var_1 : var_12))))));
                        }
                    }
                }
                var_19 &= ((((max(var_9, var_14))) >> (935251780931513658 - 935251780931513658)));
            }
        }
    }
    #pragma endscop
}
