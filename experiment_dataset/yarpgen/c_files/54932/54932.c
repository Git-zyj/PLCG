/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            var_11 = (min(var_11, ((((((var_6 + var_5) <= var_3)) ? var_6 : (((var_5 / var_1) ? var_4 : ((var_1 ? var_9 : var_10)))))))));
                            arr_17 [i_0] [i_1] = (min(((var_1 ? var_4 : var_2)), (var_0 <= var_9)));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_21 [i_0] [19] [i_0] [i_3] [i_2] = ((-var_2 || (((~(1 + -45))))));
                            var_12 = ((((var_2 ? (var_8 <= var_4) : (var_9 <= var_0))) / var_0));
                            arr_22 [i_0] [i_0] = ((((((var_8 ^ var_7) ? ((min(var_7, var_4))) : -var_1))) || ((((((var_4 ? var_2 : var_7))) ? (var_1 <= var_5) : (29648 && var_7))))));
                        }
                        var_13 = ((((var_10 ? (var_5 * var_10) : (var_2 ^ var_1))) > ((var_9 ? var_10 : var_2))));
                        arr_23 [i_0] = ((var_4 && (((var_8 <= var_0) >= (var_9 & var_1)))));
                    }
                    var_14 = (min((var_3 / var_5), (var_4 / var_10)));
                    var_15 = (((((var_0 + 2147483647) >> (var_0 + 509537297))) <= ((((var_3 - var_5) <= (var_0 * var_9))))));
                }
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
