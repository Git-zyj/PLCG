/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~(min(0, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (((arr_4 [i_0]) ^ (min((((var_1 ? var_1 : -480980886))), (((arr_5 [i_0]) ? (arr_1 [i_1]) : var_10))))));
                var_13 = (max(var_13, (((var_1 * (((18251921895086844621 < (((-1 ? (arr_5 [i_1]) : (arr_5 [i_1]))))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_14 -= (min((min((var_3 || var_2), var_7)), (arr_13 [2] [2])));
                                var_15 = ((((!((min((arr_7 [i_5]), var_10))))) ? (~var_5) : var_2));
                                arr_19 [i_2] [i_3 - 1] [i_2] [i_4] [i_4] = (arr_8 [i_5]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_16 += ((((max((~var_4), (arr_18 [i_2 - 3])))) ^ ((((arr_22 [0]) ? 0 : var_1)))));
                            var_17 += ((-((((arr_23 [i_2 - 3] [i_2 - 3] [i_2 - 3] [1]) != var_8)))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (var_3 ? var_2 : var_4);
    #pragma endscop
}
