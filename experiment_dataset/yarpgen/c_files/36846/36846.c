/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = (-8872 > 18446744073709551615);
        var_19 = ((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 1]) : 18446744073709551615);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((-(((arr_2 [i_1]) - (18446744073709551615 > 48994)))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_20 = ((-(~var_17)));
                        var_21 = ((((((-127 - 1) ? ((min(3508574990, 1))) : (max(-2925369012042915322, -1756689828770381568))))) ? var_1 : (5 >= 18446744073709551596)));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_1] = (~(min(18446744073709551610, (~16530))));
                            arr_18 [i_1] [i_1] [i_3] [i_4] [i_4] [i_1] [i_4 - 2] = var_13;
                            arr_19 [i_1 + 1] [i_2] [i_1] = (min(((-((18446744073709551604 ? -8886 : 3411330860)))), 1243983574));
                            arr_20 [i_1] [i_1] = ((-17857 ? 0 : (arr_4 [i_1])));
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            arr_23 [i_1] [i_1 + 2] [i_1] [0] = 15621;
                            var_22 = 16528;
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = arr_0 [i_2] [i_2];
                        }
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_23 = ((-(arr_10 [i_2 - 1] [i_4] [i_2 - 1] [i_4])));
                            var_24 = ((-((3566786406 >> (((24049 + var_9) + 2450278636463042131))))));
                        }
                        var_25 = (((arr_12 [i_1] [i_3] [i_2] [i_1]) >> (var_11 - 37752926)));
                    }
                }
            }
        }
    }
    var_26 = (-62 & -1174252747);
    var_27 = var_9;
    var_28 *= (47682 + 47700);
    var_29 = -var_0;
    #pragma endscop
}
