/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = ((((var_14 ? ((var_7 ? var_9 : var_2)) : (((-(arr_0 [i_0] [2])))))) >> ((((min((max(var_13, var_8)), (min(var_2, 27077))))) - 27040))));
        var_20 = (min(var_20, (((((min((175 <= var_10), 3840))) ? ((max((arr_0 [i_0] [i_0]), (!27091)))) : 8711)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 ^= (min(((var_18 ? (arr_3 [i_1]) : 4355)), var_3));
        arr_5 [i_1] = (~27110);
        var_22 = ((((((-127 - 1) % var_9)) + (arr_4 [i_1] [i_1]))) & ((min((arr_3 [i_1]), var_11))));
        var_23 = var_16;
    }
    var_24 = (min(var_5, ((-((min(61187, 0)))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_25 = (max(var_25, (((+(((!var_11) ? var_18 : ((max((arr_1 [i_4]), var_16))))))))));
                    var_26 ^= (((-127 - 1) ? 1 : 2163933540964406673));
                    var_27 *= (arr_3 [i_3]);
                    var_28 &= (min(var_15, (arr_11 [i_2] [i_3] [i_4] [i_3])));
                    var_29 = (max(var_29, (arr_1 [i_2])));
                }
            }
        }
    }
    var_30 |= (((~var_7) == (((min(var_13, var_13))))));
    #pragma endscop
}
