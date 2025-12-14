/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min((var_9 == var_2), -123)))) & ((-(var_5 & var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [9] = (((var_2 >> (((arr_2 [i_0]) - 36033)))) >> ((((55799 ? 24125 : 32767)) - 24111)));
                arr_5 [i_0] [i_1] = (max((((((var_8 | (arr_2 [i_0]))) <= (min(var_3, (arr_1 [i_0] [i_1])))))), (max(-1, 1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = ((((-(arr_0 [i_0]))) >> (((~var_2) - 625490952))));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = (!32767);
                                var_13 = ((var_0 ? (!-64) : (max(((var_3 / (arr_2 [i_2]))), var_8))));
                                var_14 = (min((arr_9 [i_0] [i_0] [i_2] [1] [i_4]), -31580));
                                var_15 = (((((((var_9 & (arr_11 [i_0] [7] [i_2] [i_3] [i_4])))) ? (((arr_0 [i_4]) ^ 32747)) : 4294967295)) & (~var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                {
                    var_16 = (!var_8);
                    var_17 = (((-1 | 2386094047158924819) < (~var_0)));
                    var_18 = (arr_17 [i_5] [i_5] [i_7] [i_6]);
                    var_19 += 1762141707;
                    var_20 = (((((var_4 ? var_2 : var_7)) / var_3)));
                }
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
