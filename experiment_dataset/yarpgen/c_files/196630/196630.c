/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = max(((((arr_1 [i_0]) ? (arr_3 [i_1]) : var_14))), (arr_3 [i_1]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((min((((var_9 ^ var_3) % ((var_13 ? var_7 : var_5)))), (((max(var_14, 1777087303)))))))));
                                var_21 = (max(var_21, (((((var_10 ? (arr_3 [i_0]) : -550323227)) * (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))))));
                            }
                        }
                    }
                }
                arr_12 [i_1] = (max((arr_8 [i_1] [i_0]), -22));
            }
        }
    }
    var_22 = (((((((var_14 ? var_9 : 19))) ? var_15 : (~32)))) ? (~var_14) : 2972034588253971942);
    var_23 = (((!236) & ((var_11 ? var_12 : (216 >= 19)))));
    #pragma endscop
}
