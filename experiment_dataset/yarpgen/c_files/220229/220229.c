/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((65521 ? 0 : -1)))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_2] [i_3] = ((0 < ((((!((max(var_1, 1294605684557498498)))))))));
                        var_12 = (max((arr_6 [i_0] [i_0] [i_0]), (arr_8 [i_3] [i_1])));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_4] [19] [i_4] [i_4] [i_1] [i_0] = (arr_11 [i_2] [i_0]);
                            arr_16 [i_4] [i_4] [i_3] [i_2] [i_1] [i_4] [i_0] = ((6 ? 0 : 43054));
                            var_13 = ((!(((~((var_2 ? 123 : var_2)))))));
                        }
                        var_14 = (max(var_14, ((((((22476 % ((max(var_6, var_4)))))) ? var_9 : var_6)))));
                        var_15 = (arr_13 [i_0] [6] [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
