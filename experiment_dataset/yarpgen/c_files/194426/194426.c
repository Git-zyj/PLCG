/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 ^= (((((arr_10 [i_0] [i_0]) ? -17911 : (arr_10 [i_0] [i_0])))));
                            var_18 -= (((((0 ? (arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_3]) : (arr_7 [i_1 + 1] [4] [i_3] [i_3])))) ? ((-(arr_7 [i_1 + 1] [i_1] [i_3] [i_3]))) : ((((arr_7 [i_1 - 1] [i_1 - 1] [i_2] [i_0]) <= (arr_7 [i_1 + 1] [i_3] [i_0] [i_1]))))));
                        }
                    }
                }
                var_19 = (~1091543236640287408);
            }
        }
    }
    var_20 ^= ((((!1091543236640287408) ? var_4 : -1091543236640287408)));
    var_21 = (max(var_14, (-1091543236640287408 - var_11)));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_5] [i_6] = ((!(~-1091543236640287408)));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_4] [i_6] [i_7 - 1] [i_5] = ((~((~(~-1091543236640287408)))));
                                var_22 = (max(var_22, ((max(-238608198, -19)))));
                                var_23 = ((((arr_23 [i_7 - 1]) ? 1091543236640287405 : (-1091543236640287404 && 1091543236640287404))));
                                arr_28 [i_5] [i_5] = -8192;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
