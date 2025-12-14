/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_2 ? -23123 : (((((var_9 >> (var_7 - 29663))) == (!var_10)))));
    var_15 = (min(var_15, ((((((var_11 ^ (-23123 ^ var_7)))) ? (((var_10 ? var_1 : ((23105 ? var_1 : 9279))))) : (~var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_3] = ((32655 ^ ((32654 ? (((((arr_12 [i_0] [i_1]) + 2147483647)) << (29 - 29))) : var_6))));
                                var_16 = (min(var_16, ((((var_5 ? 32885 : (arr_8 [i_4] [i_3] [i_3 + 1] [i_3 + 3])))))));
                                var_17 = (arr_1 [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_1] [i_1] [i_0] = (arr_15 [i_6 + 1]);
                                arr_22 [6] [i_1] [i_1] [i_1] [i_5 + 1] [6] [i_1] = var_0;
                                arr_23 [i_1] [i_1] [0] [i_1] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_11;
    var_19 = -6840;
    #pragma endscop
}
