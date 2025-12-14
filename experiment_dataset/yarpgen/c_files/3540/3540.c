/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max((((2726113872 ? 2726113872 : var_5))), 61440)), ((max((var_6 >> 13), var_1)))));
    var_14 = ((((-18 ? 1568853423 : 243)) & var_4));
    var_15 = (!var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (arr_1 [i_2]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 13;
                                var_17 = var_12;
                            }
                        }
                    }
                    arr_14 [i_1 - 1] [i_2] = 2653832400;
                }
            }
        }
    }
    #pragma endscop
}
