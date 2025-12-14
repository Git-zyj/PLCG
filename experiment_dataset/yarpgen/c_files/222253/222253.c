/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = 29681;

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_13 = var_8;
                        var_14 += var_4;
                        arr_9 [i_1] [i_3] [i_3] [i_3 - 2] = (min(((var_5 ? (arr_7 [i_0] [i_0] [i_2] [i_1]) : (-1659747128 / 1659747111))), 63));
                        arr_10 [i_1] [i_1 - 1] [i_2] [i_3] = ((min(79, (arr_8 [i_0] [i_1] [i_1 + 1] [i_3]))));
                        var_15 = (((((((max(14, 18446744073709551602)) < 1659747128)))) < (min((min(var_4, var_0)), (arr_1 [i_2])))));
                    }
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = (((min(var_11, -var_11)) - var_10));
    #pragma endscop
}
