/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (0 ^ 12);
                                var_14 = (min(var_14, var_8));
                                var_15 = ((((((1 ? (arr_12 [i_0] [i_1] [i_0]) : -563885717159623385)))) ? (max((var_9 | 1460200037), (arr_8 [2] [i_0] [5] [1] [i_0]))) : var_10));
                            }
                        }
                    }
                    arr_13 [i_0 + 2] [i_1] [i_1] [2] &= (arr_11 [9] [9] [i_0] [i_1] [0]);
                    var_16 = (max(var_16, -563885717159623379));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [6] [4] [4] &= -1;
                                var_17 = (min(var_17, var_3));
                                arr_21 [i_0] [2] [i_0] [i_5] [i_6 + 1] = ((((((!18446744073709551596) || var_2))) ^ ((~(!593933698)))));
                            }
                        }
                    }
                    arr_22 [i_0] = arr_4 [i_0] [i_1];
                }
            }
        }
    }
    #pragma endscop
}
