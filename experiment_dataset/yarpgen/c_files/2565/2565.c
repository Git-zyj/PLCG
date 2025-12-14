/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? var_5 : (~var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_2, ((-12 ? (~-32762) : var_6))));
                            arr_10 [i_1] [i_0] [i_1] [i_2] [i_2] [i_3] = ((-(((73 >= 3188461994777277322) ? (((5136686192210840279 ? (arr_5 [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_2] [i_3])))) : var_9))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_13 = min(var_9, (arr_3 [i_0 - 2] [i_0] [i_4]));
                    var_14 = (min(var_14, var_8));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_17 [i_1] [i_1] [i_1] [i_5] = (arr_7 [i_0] [i_1] [i_1]);
                    var_15 *= var_9;
                }
                var_16 = max(((18014398509477888 ^ (arr_7 [i_0 + 1] [i_1] [i_0 + 1]))), (((~var_8) ? (min(18428729675200073707, -32762)) : var_4)));
            }
        }
    }
    #pragma endscop
}
