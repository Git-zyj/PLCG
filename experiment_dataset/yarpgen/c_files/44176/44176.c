/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((((((var_7 ? 26 : 86)) < 170)) ? (var_4 && 248) : 1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_12 &= (((var_3 ? var_1 : 1)));
        arr_2 [i_0] = ((248 ? ((((arr_1 [i_0]) == 248))) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_13 = 8;
                        arr_11 [i_0] [i_3] [i_2] [i_3] [i_0] = 208882734;
                        arr_12 [i_3] [i_3] = var_10;
                        var_14 = (248 && 8);
                        arr_13 [i_0] [i_1] [i_3] [i_3] [i_1] = ((((1081032916 ? var_7 : 9223372036854775807)) << (47387 && 799000946)));
                    }
                    var_15 = (arr_8 [14] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]);
                    var_16 = 242;
                }
            }
        }
        arr_14 [i_0] [i_0] = 644066600;
    }
    #pragma endscop
}
