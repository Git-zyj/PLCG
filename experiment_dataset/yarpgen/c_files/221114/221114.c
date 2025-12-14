/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (((var_9 / ((42446 ? var_0 : 0)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 -= (((((var_7 ? 0 : (arr_1 [i_0 - 1])))) ? ((((var_4 + 244) != var_8))) : 65529));
        arr_2 [i_0] = (!29);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_13 &= ((((min((arr_3 [6]), (min((arr_3 [6]), (arr_1 [5])))))) % (max((((0 ? 28364 : 65535))), 3658260036724724878))));
        var_14 *= var_1;
        var_15 -= (arr_0 [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_7 [i_2] |= (arr_5 [i_2] [9]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        var_16 = (max(((65518 ? (-21208 + var_3) : (arr_14 [i_2] [11] [i_4] [i_5] [i_2]))), 65535));
                        var_17 = (-2147483647 - 1);
                        var_18 = (arr_8 [i_5]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
