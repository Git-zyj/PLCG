/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 -= (max((((~(min(var_10, var_9))))), (((~1125899906842620) << (((~var_11) + 40688))))));
                                arr_12 [i_3] [i_2 - 1] [15] = ((((((arr_9 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1]) ? (arr_9 [i_2 - 1] [7] [i_2 - 1] [i_2] [i_2 - 1]) : var_4))) ? (max(7643, 1661535297)) : (-10173 - 7)));
                                var_17 = (min((max(18446744073709551610, -var_2)), ((8661463097318678316 ? 581 : 16517965659022869245))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2 - 1] = ((var_4 ? var_10 : var_8));
                }
            }
        }
    }
    var_18 |= (max(((var_1 ? var_11 : ((-7627 ? var_7 : var_2)))), -var_12));
    var_19 = 18344184024108584342;
    var_20 = ((~(var_12 <= var_13)));
    var_21 = var_7;
    #pragma endscop
}
