/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 ^= ((((arr_2 [i_0] [i_2] [i_3]) || var_15)));
                                var_19 = -28;
                                var_20 += (arr_9 [i_0] [i_1] [i_2] [10] [i_3] [10]);
                                arr_14 [i_1] [i_1] [i_2] [3] [i_4] = (71 == -19964);
                            }
                        }
                    }
                    var_21 = (max((((arr_2 [i_0] [i_0] [i_2]) ? (arr_2 [i_0] [i_1] [i_2]) : (arr_0 [i_1] [i_2]))), ((~((min(var_17, 27777)))))));
                    var_22 = (arr_8 [i_1] [11] [i_1]);
                    var_23 = (((((arr_8 [i_1] [i_1] [i_1]) + (arr_11 [i_1] [i_2] [i_1] [i_0] [i_0] [i_1]))) - ((min((min(-1, -28)), (max(var_13, (arr_12 [i_1] [i_1] [i_2]))))))));
                    var_24 = (max(var_24, (((~(-19964 <= -1))))));
                }
            }
        }
    }
    var_25 = (max(((((min(var_8, var_7))) ? var_6 : (-114 / -16635))), ((-11 ^ ((var_12 ? var_7 : -1))))));
    var_26 = var_15;
    var_27 = 30320;
    #pragma endscop
}
