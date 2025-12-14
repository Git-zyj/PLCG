/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_5;
    var_11 = (max(var_11, var_1));
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (((max((arr_6 [i_1] [i_1] [i_0 - 1] [i_1]), (arr_6 [i_0] [i_1] [i_0 - 1] [i_0 - 1])))) ? ((((((arr_2 [i_1]) ? var_9 : (arr_7 [i_1])))) ? var_1 : (arr_7 [i_2]))) : 223);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 -= 1;
                                var_15 = (max(var_15, 223));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0 + 1] [i_1] [i_2] = var_9;
                }
            }
        }
    }
    var_16 = ((-(min(((var_2 ? var_0 : var_6)), var_8))));
    #pragma endscop
}
