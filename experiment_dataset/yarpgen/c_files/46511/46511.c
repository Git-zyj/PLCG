/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max((min(((-(arr_4 [13] [i_0] [13]))), (max(-659067879, 1933878099)))), (((-(arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = (((((659067875 ? 403967870 : 403967870))) ? ((max((arr_6 [i_3] [i_3 + 1] [i_3 + 1]), (arr_6 [i_3 + 1] [i_3 - 1] [i_3 + 1])))) : (min((arr_7 [i_0] [i_0] [i_1] [2] [i_0]), (arr_7 [i_1] [i_3] [i_3] [i_3 - 1] [i_3])))));
                            var_18 = ((+(((arr_9 [8]) ? 77 : 11857))));
                            var_19 = ((~(((!(arr_10 [i_0] [i_1] [i_2] [i_3]))))));
                            var_20 = (((arr_4 [i_0] [i_1] [i_1]) > ((((arr_4 [i_0] [5] [i_3]) < (arr_2 [i_0] [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_21 = var_8;
                            var_22 = var_13;
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(((659067890 ? ((var_13 ? var_10 : 3732080507)) : (min(var_9, var_7)))), (min((~var_14), (max(var_13, var_6))))));
    #pragma endscop
}
