/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!1) ? var_17 : var_7));
    var_21 = var_0;
    var_22 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 = (arr_3 [i_4 + 1]);
                                var_24 = 4294967295;
                                var_25 ^= ((((((-(-127 - 1))) ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) : ((min(65514, 21)))))));
                                var_26 = (max(var_26, (((106 ? var_7 : (((((((arr_11 [i_0] [i_0 - 1] [i_1] [i_1] [20] [i_4]) ? var_0 : (arr_7 [i_0 - 1] [i_1] [i_2])))) && -501313865))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_27 = var_13;
                                arr_21 [i_0] [i_1] [i_2] [i_0] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
