/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 *= -80;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_2 [i_1] [i_1] [i_3 + 2])));
                        var_22 -= (((1 ? 176 : 2707422417955247163)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_23 = (arr_5 [i_4] [i_4] [i_4] [i_4]);
        var_24 -= ((!(arr_2 [i_4] [i_4] [i_4])));
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        arr_14 [i_5 - 2] [i_5] = (arr_8 [4] [i_5] [0] [0]);
        var_25 = (((((~(-127 - 1)))) ? (((~((max(1, var_8)))))) : ((var_2 << (((arr_5 [i_5] [i_5] [i_5] [i_5]) - 7127923311360150880))))));
        arr_15 [i_5] = var_4;
        var_26 = ((-(max((arr_8 [i_5 - 2] [i_5] [i_5 - 1] [i_5 + 1]), (arr_8 [i_5 - 2] [i_5] [i_5] [i_5 + 1])))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        var_27 = (((arr_16 [i_6]) - 63342));
        var_28 = (arr_17 [i_6 - 1]);
    }
    var_29 = var_10;
    var_30 = (max(var_30, var_18));
    #pragma endscop
}
