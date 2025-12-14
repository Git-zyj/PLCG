/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_0, ((max(0, (var_3 <= -46))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(~var_7)));
        arr_3 [i_0] = -10;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_1] [4] [i_1] = (~3);
            var_11 = ((var_2 + ((var_2 ? 13524 : 1))));
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_12 = 3;
                    var_13 = (((((var_3 ? 252 : var_6))) & (252 & 3986519249)));
                }
            }
        }
        arr_16 [1] [i_1] = ((~(!var_6)));
        arr_17 [i_1] = (((~var_5) ? -0 : (var_2 || var_5)));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_14 = -var_2;

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_15 = (~var_9);
            arr_22 [i_5] [i_5] [i_5] = (((var_9 ? 0 : 224)));
            arr_23 [i_5] = -25457;
        }
    }

    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        arr_26 [i_7] = ((~((var_1 ? 122 : var_8))));
        arr_27 [i_7] = (var_5 - var_3);
        arr_28 [i_7] = (((-(((!(-127 - 1)))))) >> (var_0 >= var_1));
        var_16 = (min(var_16, ((min(28365, (308448046 | 0))))));
    }
    #pragma endscop
}
