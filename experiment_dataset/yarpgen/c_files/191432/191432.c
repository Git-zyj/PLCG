/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = (arr_0 [15] [i_1 + 2]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_11 = (--15);
                            var_12 = arr_7 [i_1 - 1] [i_1 + 2];

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_13 = (min(var_13, 3));
                                var_14 = 15;
                                var_15 = -31;
                                var_16 = (~(~var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((-127 ? (min(var_4, var_7)) : ((((-127 - 1) && 32755))))));
    var_18 = (((((+((max((-127 - 1), 255)))))) ? (max(var_8, var_2)) : (((((max(0, var_8))) ? (~var_3) : var_4)))));
    var_19 = (-127 - 1);
    #pragma endscop
}
