/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~var_0) ? -12128 : ((12127 ? var_7 : 49559)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = (3279480948 / (arr_4 [i_1 - 1]));
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] &= (~12127);
                        }
                    }
                }
                arr_11 [i_0] [i_1] [i_1] = ((((((arr_3 [i_1]) ? (((var_2 ? var_3 : var_5))) : 1917342876))) % (((48284 ? 14357656173945110808 : 3755575914)))));
                var_12 = (min(var_12, (arr_3 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_20 [i_5] [i_5] = (((((arr_14 [1]) ? var_9 : ((var_0 ? (arr_14 [i_7]) : (arr_18 [i_7] [i_7] [13] [13]))))) + -26));
                            var_13 = (min(var_13, ((((-(arr_16 [i_4 + 1] [i_5] [i_7])))))));
                            var_14 = ((-21419 & (arr_15 [i_5] [i_4 + 3] [i_5])));
                        }
                    }
                }
                var_15 = (max(var_15, var_7));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_16 = var_0;
                            var_17 -= (((((-(arr_16 [i_4 - 1] [i_4 + 2] [i_4 - 1])))) ? (((((!(arr_16 [i_5] [i_5] [i_9])))) + (((arr_14 [i_4]) >> (var_0 + 52))))) : ((var_5 ? 2068020985 : (((arr_13 [9]) >> (var_9 - 1955585171)))))));
                            arr_27 [7] [7] [i_5] [i_5] [i_9] = 36874;
                            arr_28 [i_4] [i_5] [i_8] [i_5] [i_4] = ((-4437 ? 5246035941356724087 : 138673108));
                        }
                    }
                }
                var_18 = (((((((arr_18 [i_4] [15] [6] [i_4]) / 1))) ? var_7 : (-77800501 + var_4))));
                var_19 = ((!((max(((3755575908 ? (arr_18 [i_4] [i_4] [i_5] [11]) : 539391382)), var_0)))));
            }
        }
    }
    #pragma endscop
}
