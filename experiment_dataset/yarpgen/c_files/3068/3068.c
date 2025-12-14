/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(1306394419, var_11);
    var_14 = (((var_2 ^ 1) % var_10));
    var_15 += ((var_9 ? 0 : 473867641));
    var_16 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [7] [i_1 - 1] [i_2] = (((((var_2 ? var_0 : var_9)) >> (1306394419 - 1306394415))) % 1);
                    var_17 = (((3 / 4) ? var_0 : 18446744073709551608));
                    arr_9 [i_2] [8] [8] [i_0] = (var_5 >> 14);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, var_2));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                                arr_18 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] = ((!(var_3 <= 1)));
                                arr_19 [i_0] [i_1] [i_2 - 2] [i_1] [i_4] = ((-((var_8 ? var_10 : -11))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
