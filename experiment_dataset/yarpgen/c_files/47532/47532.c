/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = ((((~114) ? (((max(0, 1)))) : (max(var_7, -6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 -= (arr_1 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (((max((arr_6 [10] [i_3 + 1] [i_2] [i_3]), (arr_6 [i_0] [i_3 + 1] [i_2] [i_3 - 1])))) ? (arr_7 [i_0] [i_3 - 1] [i_2] [i_0]) : (arr_6 [i_1] [i_3 - 3] [10] [i_3]));
                                var_19 += var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_2 <= 1);
    #pragma endscop
}
