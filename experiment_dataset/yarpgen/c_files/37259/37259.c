/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (!781);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_4] [i_2] [i_1] = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) > -768));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = 0;
                                var_20 = (!25940);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_21 = (!(!782));
                            arr_24 [i_6] [i_0] [i_0] [i_0] &= (((arr_20 [i_0] [i_0] [i_1] [i_5] [i_6]) ? 1 : ((-769 ? var_4 : (arr_21 [i_0] [i_6 + 1] [i_5] [i_0])))));
                            var_22 = max((max(-4730273117740820725, 1)), 1381496577054571949);
                        }
                    }
                }
                var_23 = (-((var_8 ? (arr_22 [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_22 [i_0] [i_1] [i_1] [i_1] [i_1]))));
            }
        }
    }
    #pragma endscop
}
