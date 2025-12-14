/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = min((min((min((arr_6 [i_0 - 4]), 4294967291)), 4294967291)), var_3);
                    var_16 = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min((min(var_11, var_6), var_4))))));
                                var_18 = (min(var_18, ((min(((max((!var_9), (arr_10 [i_0 - 1] [i_0] [i_0] [i_2] [i_3] [i_2])))), (arr_12 [i_0] [i_0] [i_0] [i_1] [i_2 - 1]))))));
                                var_19 = (max(var_19, var_2));
                                var_20 = min((min(var_4, var_5)), (4 >= var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_4 ? ((((var_11 != ((var_13 ? 105043184 : var_4)))))) : (((~var_12) + ((var_9 ? var_3 : var_3))))));
    var_22 = (min(var_22, ((min((((max(var_8, 4294967294)))), (~-2936865524758638376))))));
    var_23 = ((~(min(var_4, var_6))));
    #pragma endscop
}
