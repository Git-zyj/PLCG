/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) < -1752103112));
        var_12 = (arr_1 [i_0]);
        arr_4 [i_0] = ((-1752103112 ? (arr_2 [i_0]) : (arr_2 [i_0])));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_13 += ((((((max(var_10, var_9))))) / (((((1752103111 ? (arr_6 [0]) : 1752103111))) ? ((var_3 + (arr_6 [6]))) : (arr_6 [10])))));
        var_14 &= (((arr_6 [12]) - ((max(1752103136, var_0)))));
        var_15 ^= (((arr_5 [i_1 + 3]) >> ((min((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1]))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = (-6843509076218181200 ^ -2725160766129551453);
        var_16 = ((!(((46367 ? 1752103136 : -1752103124)))));
        var_17 = (((max((6843509076218181199 - var_2), ((((arr_7 [i_2]) ? var_7 : 1))))) + (((((1752103111 / (arr_7 [i_2])))) ? var_3 : (arr_8 [i_2] [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [i_3] = (arr_13 [i_2] [i_3] [i_3]);
                        arr_20 [i_2] [i_2] [i_2] [i_3] [i_2] = (-1752103121 / 2725160766129551452);

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_18 *= (arr_7 [i_5]);
                            arr_23 [i_2] [i_3] [i_3] = (var_5 & 1752103127);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_19 = 595354809;
                            arr_28 [i_3] [i_3] [i_3] [i_5] [i_7] = var_4;
                            var_20 = (min(var_20, -1752103111));
                            arr_29 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] = (arr_26 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2]);
                        }
                        var_21 = (min(var_21, ((((arr_8 [i_2] [i_3]) ? (arr_12 [i_4]) : ((min((arr_24 [i_2] [i_3] [i_2] [i_5]), -1752103113))))))));
                    }
                }
            }
        }
    }
    var_22 ^= var_9;
    #pragma endscop
}
