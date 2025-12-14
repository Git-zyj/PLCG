/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((-(max(-18731, (arr_2 [i_0 + 1] [i_0 + 3])))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 = (arr_3 [19]);
                    arr_7 [i_0] [i_0] [i_0] [i_2] &= (((-(var_4 * var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [2] [i_1] [i_1] [5] [2] [5] [12] = 1;
                                var_15 |= ((!((min(var_4, var_2)))));
                                var_16 = (max(65535, 1));
                            }
                        }
                    }
                    var_17 = ((((249 && (arr_2 [i_0] [i_0]))) || ((((((arr_2 [i_1] [i_2]) ? 1 : var_8))) || ((min(var_8, (-127 - 1))))))));
                }
            }
        }
    }
    var_18 = (min(var_0, var_12));
    #pragma endscop
}
