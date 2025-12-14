/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 |= var_6;
        var_15 = (max(65520, (((!((!(arr_1 [i_0]))))))));
        var_16 ^= (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 = (5 ^ 65499);
                        var_18 = (min(var_18, ((max((((-3464716199500195151 >= 3464716199500195148) * 19)), (max(((-3464716199500195178 ? (arr_7 [i_1] [i_1] [i_1] [i_1] [11] [i_1]) : (-9223372036854775807 - 1))), 17295)))))));
                    }
                }
            }
            var_19 = 0;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_20 = (arr_9 [i_0] [i_4]);
            var_21 = (((arr_8 [i_4] [i_0] [i_4]) >> (((arr_1 [i_4]) - 11593075600821099989))));
        }
    }

    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        arr_14 [i_5] [i_5] = (((!(((~(arr_12 [i_5 - 1])))))));
        arr_15 [i_5 + 1] [i_5 - 1] |= var_0;
        arr_16 [i_5 + 1] [i_5 + 1] |= (((((((arr_12 [i_5]) != (arr_13 [i_5 - 1]))))) & ((var_6 | (arr_11 [i_5 + 1] [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_22 = (max(var_22, (((34397 < (-9223372036854775807 - 1))))));
        var_23 = (max(var_23, 51));
    }
    var_24 = ((~var_10) % var_3);
    var_25 -= 3464716199500195143;
    var_26 = (max(var_26, (((((max(var_6, 0))) ? 65534 : var_13)))));
    #pragma endscop
}
