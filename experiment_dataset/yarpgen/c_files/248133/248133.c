/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_22 = var_8;
                    arr_7 [i_0] [i_0] = (arr_4 [i_2 - 1] [i_2] [i_0] [5]);

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1 + 1] [9] [i_3] = ((-5749050644839872085 ? 10077620286292864666 : var_17));
                        var_23 = (((var_18 ? (arr_5 [i_0] [i_0]) : ((var_3 ? var_9 : var_6)))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_24 *= (arr_9 [6] [6] [i_4]);
                        var_25 = arr_0 [1];
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] = var_4;
                        var_26 = (((((~(arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_2 + 1])))) + var_17));
                        var_27 = (max(var_27, (arr_0 [i_2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
