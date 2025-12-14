/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = ((~var_6) / (((((var_5 ? 18117929358561210809 : 18117929358561210812))) ? 20970848 : ((var_12 ? 328814715148340803 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0])))) ? (min(328814715148340807, (arr_3 [7] [i_1]))) : (arr_0 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [12] [i_1] = min((((18117929358561210796 == (arr_13 [i_0] [i_0] [i_0] [i_0])))), (arr_0 [1]));
                                var_15 *= (arr_11 [5]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_20 [i_5] [7] [i_5] [1] = (arr_18 [i_5] [i_5] [i_5 + 1] [i_5]);
                            var_16 = (((((var_3 ? 328814715148340803 : (arr_2 [i_0])))) ? -31357798 : (arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])));
                            var_17 = (max(var_17, (min(328814715148340804, 63))));
                            var_18 -= (arr_19 [i_0] [i_1] [i_5] [i_5] [2] [i_6 - 2]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
