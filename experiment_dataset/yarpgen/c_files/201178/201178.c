/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((((arr_1 [i_1]) | (arr_3 [i_0] [i_1]))));
                var_17 = (((((arr_0 [i_0]) + var_4)) < var_6));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (((min(32764, 25165824))));
                            arr_11 [i_3] [i_1] [i_2] [i_3] [i_1] [i_1] &= arr_8 [i_2] [i_2] [i_2] [i_2];

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                arr_14 [i_4 - 1] = 32758;
                                var_19 = ((!((((((var_6 ? (arr_2 [i_1] [i_4]) : var_10))) ? (arr_0 [i_4 + 1]) : (arr_12 [i_0] [i_0] [i_2] [i_0] [1] [i_4 + 2] [i_0]))))));
                                var_20 = (((arr_1 [i_0]) + var_7));
                                var_21 += (((((9223372036854775807 ? (!var_5) : (arr_0 [i_4 - 1])))) != (min(4194303, (((var_11 ? 8191 : var_10)))))));
                                var_22 = (min(var_22, (((!(((((min(18446744073709551605, (-9223372036854775807 - 1)))) ? (arr_12 [i_2] [i_4 + 3] [i_4] [i_4 + 3] [i_4] [i_4] [i_4 - 1]) : ((var_3 / (arr_7 [i_2] [i_2])))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_23 = (max((var_5 / var_14), (arr_8 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_7 + 2])));
                                var_24 = (max(var_24, (((max(var_0, var_7))))));
                                var_25 = -145207231413048062;
                                var_26 += (((((((arr_0 [i_7 + 3]) && var_3)))) + 18446744073709551603));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
