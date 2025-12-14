/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 -= (arr_5 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, -47));
                                var_19 -= (2974 | -545);
                            }
                        }
                    }
                    var_20 = (max(var_20, ((max((((-(arr_7 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2])))), (8 % 12))))));
                    var_21 = ((155 & (((((arr_0 [i_1]) / (arr_2 [i_0] [i_0 - 1] [i_2])))))));
                    var_22 -= ((max((min(-1, (arr_2 [i_0] [i_1] [i_0]))), ((((arr_0 [i_0]) ? 155 : (arr_1 [i_0 + 1])))))));
                }
            }
        }
    }
    #pragma endscop
}
