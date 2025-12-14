/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_20 = ((-(((max(-90, 4551290748066873736)) << (!var_4)))));
                        var_21 = (((1043499542 - var_18) ? (arr_6 [i_2 - 2] [i_2 + 1] [i_2 - 2]) : (var_18 + var_18)));
                    }
                }
            }
        }
        arr_11 [7] = (90 << (3931679095 - 3931679095));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_14 [i_4] = var_6;
        var_22 = ((((max((arr_13 [i_4]), (arr_12 [i_4])))) ? ((max(-90, 3999709122))) : ((-(var_5 | var_15)))));
    }
    var_23 = ((((max(var_9, (max(var_16, 90))))) ? ((-5821011410462880558 ? ((var_8 ? var_4 : var_10)) : var_11)) : 2494));
    #pragma endscop
}
