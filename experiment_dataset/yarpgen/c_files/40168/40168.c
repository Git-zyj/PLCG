/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(-5, (var_5 || -867564634)))) ? var_17 : var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [18] = min((arr_3 [i_1 + 1]), (((18446744073709551615 / -6) ? 6 : (((arr_2 [i_2] [i_2]) * (arr_3 [2]))))));
                            arr_11 [i_3] [18] [20] [i_0] [i_0] = (((((((((arr_6 [i_2] [i_1 + 1] [i_0]) <= 4294967275))) - var_8))) / (var_7 * 4294967295)));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = (-29 + ((((((-(arr_0 [18] [16])))) < (arr_7 [i_2 - 2] [i_1 + 1] [i_2 - 2] [4])))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = -79909343;
            }
        }
    }
    var_20 ^= (max(524287, var_14));
    #pragma endscop
}
