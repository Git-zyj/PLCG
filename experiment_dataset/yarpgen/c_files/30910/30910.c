/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (var_2 - var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((((-2147483647 - 1) == var_2)) ? (~var_8) : (max(1982939202, var_5))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] = max((max(-1982939203, (!var_6))), (~var_5));
                                var_11 = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((var_5 ? var_4 : (!1073741823)));
    #pragma endscop
}
