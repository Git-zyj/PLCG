/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((12783 ? -5 : -3))));
    var_21 = (max(var_21, (!var_0)));
    var_22 = ((((min(((var_7 ? 11 : 4)), var_4))) ? (((~((-12784 ? -54 : var_4))))) : ((-4 ? var_16 : var_12))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(arr_0 [i_0] [i_0 - 1])));
        var_23 = (min(var_23, var_11));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = ((((min(var_16, (arr_3 [i_1 + 2])))) ? ((((!(arr_0 [i_1 + 1] [i_1]))))) : ((18082 ? 37803 : -1482949099358832164))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_24 = (min((arr_3 [i_1 - 1]), (var_7 < var_3)));
                    var_25 *= (((min(11, (min(66, (arr_6 [i_3]))))) * (-9223372036854775807 - 1)));
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_14 [i_1] [i_4] [i_1] = var_4;
            arr_15 [i_1] [5] [i_1] = 127;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_26 -= (var_2 + -84);
            arr_18 [i_1] [i_1] = -18083;
            var_27 += ((!(arr_16 [i_1 + 2] [i_1 + 1])));
            arr_19 [i_1] [i_5] [i_5] = -255;
            arr_20 [i_1] = ((!(((((min(7136949522794066201, (arr_13 [i_1] [i_1])))) ? (arr_9 [i_5]) : 18082)))));
        }
        arr_21 [i_1] = ((0 ? 9223372036854775807 : (1015693752883272239 / var_5)));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_28 = (min(var_28, (((((min(var_4, 1)) ? var_3 : (((0 ? -66 : 63))))) >= 0))));
        var_29 *= var_10;
    }
    #pragma endscop
}
