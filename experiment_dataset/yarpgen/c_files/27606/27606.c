/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (min((~255), (max((arr_9 [i_0]), (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0 + 4] [i_4]) ? 73 : var_4))))));
                                var_13 = (((!(arr_3 [i_0]))));
                                arr_12 [i_0] [14] [14] [i_0] = (((((arr_5 [i_0]) + -var_9)) <= ((4035225266123964416 ? -66 : var_6))));
                            }
                        }
                    }
                }
                var_14 = (max((((!(var_5 && var_4)))), ((0 ? var_5 : (arr_0 [i_0])))));
                var_15 = ((min(((var_0 ? 4294966272 : (arr_10 [i_0 - 1] [i_0]))), (((-66 ? var_6 : var_11))))));
                var_16 = var_5;
            }
        }
    }
    var_17 = ((19783 ? var_11 : (((max((var_4 != -123), 152))))));
    var_18 = ((var_0 ? -9620 : (min(((min(var_3, var_7))), ((-47 ? var_3 : -56))))));
    var_19 = ((-8 ? -905594007 : var_11));
    var_20 = ((var_1 >= (max((~17592186044415), 0))));
    #pragma endscop
}
