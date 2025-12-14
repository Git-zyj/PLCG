/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 ^= ((!((max((((!(arr_0 [i_0] [i_0])))), 3795115537267674228)))));
        arr_2 [5] [i_0] = ((2856415962 ? (!-17) : (max(1, 14651628536441877368))));
        var_21 = (((~70) - (~14651628536441877379)));
        var_22 = (min(var_22, (((((((arr_1 [i_0]) ? -9 : (-32767 - var_4)))) > (max((min(0, 466869703)), (((10 ? (arr_0 [20] [i_0]) : 418484779))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_23 ^= -14651628536441877387;
            arr_9 [i_1] [i_2] = ((~(arr_6 [i_2 + 1] [i_2 - 1] [1])));
            var_24 = (((((3795115537267674228 ? (arr_3 [8]) : 13148))) ? 2099576915 : var_5));

            for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 4; i_4 < 14;i_4 += 1)
                {
                    var_25 = (max(var_25, -4842565363900089326));
                    arr_18 [i_1] [10] [10] [i_1] = (((arr_4 [i_4] [i_1]) ? 7300734948293541900 : (arr_14 [i_3] [7] [i_1])));
                    arr_19 [i_1] [i_1] [i_4 + 1] = ((~((16 ? 9261638271215228520 : 4842565363900089321))));
                }
                var_26 = 1240933446;
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {
                var_27 *= ((!(((2096896 ? 25 : 1)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_28 = (~10741);
                            var_29 *= (arr_4 [1] [i_7]);
                        }
                    }
                }
            }
        }
        var_30 ^= (((var_17 ? var_3 : (arr_14 [i_1] [i_1] [6]))));
        var_31 -= ((-25 ? 15600234609718028894 : -16509));
        arr_27 [i_1] = 14651628536441877379;
        arr_28 [i_1] = -71;
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        var_32 -= 5048977127567445792;
        var_33 = (((arr_29 [i_8 + 1]) && var_7));
    }
    var_34 = ((1487067050 >> (((!((max(2660477250, var_4))))))));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            {
                var_35 = (3795115537267674244 && var_19);
                arr_35 [12] [i_10 - 2] [i_10] = var_5;
            }
        }
    }
    #pragma endscop
}
