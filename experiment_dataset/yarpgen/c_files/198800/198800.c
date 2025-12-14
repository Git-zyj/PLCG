/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = 1941923948;
                                var_18 = (min(var_18, (((((((arr_12 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) ? -2147483647 : (arr_9 [i_0] [9] [2] [i_4])))) ? (min((arr_10 [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_2 - 2] [i_3]))) : (((((var_16 ? 14208470599880581406 : var_12))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_7 <= (max((var_13 & 4238273473828970209), var_8))));
    var_20 = (max((max(2147483647, (~var_13))), var_8));
    #pragma endscop
}
