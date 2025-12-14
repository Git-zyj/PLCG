/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 ? 123 : (((((var_9 ? -5723660285330572653 : var_1))) ? var_10 : var_3))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (arr_2 [i_0] [i_0]);
        var_13 = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (~var_8);
        arr_7 [0] [i_1] = 22505;
        var_14 = ((var_5 ? var_5 : ((var_10 ? var_9 : 9011172212611388320))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_15 = (var_1 ? (arr_13 [i_1] [i_4] [i_1 - 1] [i_4] [i_2]) : 48);
                        var_16 = ((-(var_6 - var_2)));
                        var_17 = (min(var_17, (!10563)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_18 = (+-87);
        var_19 *= ((var_8 - (247 + 247)));
        var_20 = ((10563 ? 54985 : var_2));
        var_21 = (arr_15 [i_5] [i_5]);
        arr_17 [i_5] = (((var_8 ? -65 : -48)));
    }
    var_22 = (max(((var_1 << (!var_2))), (((var_6 ? var_7 : (-127 || var_8))))));
    #pragma endscop
}
