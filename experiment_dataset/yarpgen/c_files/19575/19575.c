/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_4 || var_2);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 *= -4;
                    var_20 += (((~-4) ? ((var_5 % (((arr_3 [i_2]) ? (arr_6 [i_2 - 2]) : var_4)))) : ((min((min(var_8, var_7)), (arr_7 [i_0] [i_0] [8] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, var_6));
                                var_22 = ((-(((arr_10 [i_3] [i_3]) * (arr_10 [i_2 - 2] [i_3])))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_23 += -110;
        var_24 = (((min(-1, (min(3647378603, (arr_16 [i_5]))))) % (min((~var_10), -var_2))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_25 += 16;
        var_26 += min(((var_15 / (arr_15 [i_6] [i_6]))), var_11);
        var_27 ^= (62 + 12);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_28 += var_17;
        arr_24 [i_7] [i_7] = var_5;
        var_29 = (max(var_29, (~47507)));
        var_30 = ((2147483647 ? (arr_16 [i_7]) : var_0));
        var_31 += (arr_7 [i_7] [i_7] [i_7] [i_7]);
    }
    var_32 = (max(var_32, (((var_7 >= (max(((min(var_17, var_8))), (var_9 + var_2))))))));
    var_33 = var_2;
    #pragma endscop
}
