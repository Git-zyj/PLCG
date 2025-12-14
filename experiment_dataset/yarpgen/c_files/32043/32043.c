/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = (((~(min(5268897188505248886, 2147483647)))));
                                var_16 = (arr_3 [i_4]);
                            }
                        }
                    }
                }
                var_17 = (min(var_17, (((~(arr_11 [i_0] [i_0] [4] [4] [i_0]))))));

                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, -127));
                    arr_16 [i_5] [i_1] = ((var_6 > (((var_3 % (var_15 - var_8))))));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (((((((arr_20 [i_0] [i_1] [i_1]) ? (arr_14 [i_0] [i_1] [i_0] [i_0]) : 9223372036854775807))) ? (((!-2110287766) | (arr_11 [18] [i_1] [i_1] [i_1] [i_0]))) : var_15)))));
                    arr_21 [i_6] [i_1] [i_0] = (((!((max(-2110287743, -70))))));
                    arr_22 [i_0] [20] [i_0] [i_0] = var_12;
                }
                var_20 |= (2110287765 + -2110287757);
                arr_23 [i_0] [i_0] [i_1] = 43432;
            }
        }
    }
    var_21 = (max(var_21, 89));
    #pragma endscop
}
