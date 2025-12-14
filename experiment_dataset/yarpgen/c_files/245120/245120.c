/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 = ((-((((((arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]) < (arr_7 [i_0] [i_0] [i_0 - 2] [i_0])))) | (min(1470988116, 143))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] = (((min(((var_4 * (arr_9 [i_0 - 1] [i_1] [i_2] [i_3]))), -var_11)) * var_5));
                        var_15 = (min(var_0, (((max(9537608407022330618, -25538)) ^ 25538))));
                    }
                }
            }
        }
        var_16 = 25554;
        arr_12 [i_0] = ((var_9 <= ((((25517 ? -25554 : (arr_9 [i_0] [3] [i_0 - 2] [i_0]))) - -1))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_17 = (arr_14 [i_4] [i_4]);
        var_18 += (min((min(18446744073709551615, 54266)), 0));
        arr_15 [i_4] = ((((max(-25538, var_5)))));
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_19 [i_5 + 1] = ((65510 & (max(-25554, (max(17, 112))))));
        var_19 = var_2;
    }
    var_20 = var_6;
    var_21 = ((((min(((min(var_13, var_3))), (-92 * 1)))) ? var_10 : 148));
    #pragma endscop
}
