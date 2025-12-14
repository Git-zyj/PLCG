/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (max(((var_5 ? (arr_5 [i_3 + 1]) : 1792673752)), ((min((arr_5 [i_3 + 1]), (arr_5 [i_3 + 1]))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = var_5;
                            }
                        }
                    }
                }
                var_18 = ((1 > (((-(min(3106, 360664757)))))));
                arr_13 [i_1] = (((max((arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2])))) ? (~var_5) : -9);
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
