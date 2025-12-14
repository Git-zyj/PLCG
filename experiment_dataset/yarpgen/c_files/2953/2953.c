/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = ((((((((var_10 == (arr_1 [i_4]))))) <= ((18446744073709551615 ? (arr_14 [i_2]) : var_11)))) ? (min(var_18, var_1)) : (5677521113097525366 ^ 2529107001705555954)));
                                arr_15 [i_0] [i_1] [i_1] [6] [i_2] = (!221663734);
                            }
                        }
                    }
                    arr_16 [i_2] = var_9;
                    var_21 = (min((((var_14 <= (arr_14 [i_2])))), var_2));
                }
            }
        }
    }
    var_22 = (var_0 > var_10);
    #pragma endscop
}
