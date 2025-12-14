/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 -= -7244073037462538315;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [10] &= (((((((var_7 ? var_16 : var_6))) ? var_1 : (max(var_16, (arr_3 [i_0] [6] [i_2]))))) | (arr_0 [i_0])));
                                arr_15 [i_4] [i_0] [i_4] = (((((~(arr_13 [i_4] [i_1 - 2] [i_1 + 1])))) ? 32760 : (var_0 + 7244073037462538307)));
                                arr_16 [4] [5] [i_2] [i_4] [1] [i_4] = ((!(0 + 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_19 = 13687871865238697810;
                var_20 = -123;
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_21 = (-2147483647 - 1);
                            arr_29 [i_8] = (((var_6 ^ var_5) ? (max((arr_28 [i_8] [i_7 - 3] [i_6] [i_5] [i_5]), (arr_27 [i_7 - 2] [i_7 - 3] [i_7 - 3] [i_7 - 3]))) : ((((((0 ? 1 : var_11))) ? 23846 : ((-(arr_27 [i_5] [i_5] [7] [i_8]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_22 = (10235977688995118912 && var_8);
                            var_23 = 0;
                            var_24 &= (max((((13687871865238697793 + 32) ? (~217) : ((2055386647 ? var_0 : var_5)))), (((17310430064380391165 ? var_2 : (-2147483647 - 1))))));
                            var_25 = ((-103 > var_16) > (~var_9));
                        }
                    }
                }
                var_26 = var_11;
            }
        }
    }
    #pragma endscop
}
