/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, (((max((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_21 = (((max(((1 + (arr_0 [i_0]))), 1))) || (arr_0 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 -= (5170306726168790484 ? var_3 : 144);
        var_23 = (~1);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_2] [i_2] [i_1] = 193;

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_24 = (min(var_24, -5170306726168790483));
                            arr_19 [i_2] [i_3] [i_2] [i_2] = (((arr_16 [i_2] [i_2] [2] [i_4 - 1] [i_5] [i_1]) != (arr_16 [i_5] [i_2] [i_4 + 1] [i_2] [i_2] [i_1])));
                            var_25 = ((~(arr_12 [i_5] [i_4 - 1] [i_4] [i_4 + 1] [i_1])));
                            var_26 += (((arr_6 [i_4 - 1] [i_1] [i_1]) ? var_5 : 1));
                        }
                        var_27 = (min(var_27, -16846));
                        var_28 = (max(var_28, (((~(1 ^ -3615884219059850156))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_23 [i_6] = -3615884219059850172;
        var_29 = 1;
    }
    var_30 |= ((var_16 == ((81 << (var_1 - 44645)))));
    var_31 = (min(var_31, (!16842)));
    #pragma endscop
}
