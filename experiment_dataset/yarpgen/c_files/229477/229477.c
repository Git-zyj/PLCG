/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (arr_0 [i_1] [22]);

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_1] [i_0] = (((-(arr_9 [i_1 + 1] [i_3 - 1]))));
                        var_19 = (arr_8 [15] [i_1] [i_2] [i_3]);
                        var_20 = (((((arr_1 [i_1 + 3]) ? (arr_1 [i_1 + 3]) : (arr_1 [i_1 + 2]))) % ((~(arr_1 [i_1 + 2])))));
                        var_21 -= ((((((9 ? 24 : 1544757313) <= var_16)))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = arr_10 [i_2] [1] [i_2 - 1] [i_2];
                    }
                    arr_14 [i_0] [1] [14] = var_9;
                }
            }
        }
    }
    var_22 = (max((((~(min(var_4, var_16))))), var_9));
    #pragma endscop
}
