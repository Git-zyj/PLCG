/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (arr_4 [i_0] [i_1 + 3] [i_2 + 4]);
                    var_10 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 - 3] [i_1 + 2] [i_0] [i_4] [i_4] [i_3] [i_4 - 3] = (3634057565 ^ 1630151516);
                                arr_14 [i_0] = (arr_9 [i_4 - 3] [i_3] [i_2 + 2] [i_1 + 3]);
                                arr_15 [i_4] [4] [i_2] [i_1] [i_0] = -6024539540831329380;
                                var_11 = (((var_4 == -435378307) ? 0 : (((arr_3 [i_4 - 1] [1] [i_2 - 2]) ? (arr_3 [i_0] [8] [8]) : (arr_2 [6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 -= var_7;
    var_13 |= -var_7;
    var_14 += (min(var_4, ((((var_1 ? var_4 : var_1)) * (!var_9)))));
    var_15 = 18446744073709551609;
    #pragma endscop
}
