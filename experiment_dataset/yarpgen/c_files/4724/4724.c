/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_13 = (127 % 255);
        var_14 *= 7;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_15 -= var_3;
                        var_16 = (min(((((-122 ? 1 : 1)))), var_1));
                        arr_12 [i_1] = ((4739678594528966084 ? (((((7 != -113) > 81)))) : (((11013 ? 1 : 2181880657)))));
                        arr_13 [i_1] = 54522;
                        var_17 = (max(4294967292, (max((max(var_2, var_6)), ((31430 ? (arr_0 [i_0]) : (-127 - 1)))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_18 = (arr_14 [i_4]);
        var_19 = (-var_0 || 12485643807727493230);
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_20 = (((max(-1, 7556))));
            var_21 = (max(2119153244, 3909258697));

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_25 [i_5] [i_5] = -7;
                arr_26 [i_5] [i_7] = (((!var_3) ? (max((max(-15914, (arr_17 [i_6]))), (arr_16 [i_5 - 1]))) : (var_10 < 16469)));
            }
        }
        var_22 = (arr_24 [i_5] [i_5] [i_5]);
    }
    var_23 = var_7;
    #pragma endscop
}
