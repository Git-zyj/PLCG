/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 ? (min((((var_3 ? var_1 : var_1))), -var_7)) : ((((!(((var_9 ? var_1 : var_3)))))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_12, (((((var_7 ? var_2 : var_8)) <= (((max(var_9, var_3)))))))));
        arr_3 [i_0 + 1] = ((max(-var_6, var_10)));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_13 = (((-127 - 1) ? -111 : 110));
                        var_14 = (max(var_14, var_10));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_16 [i_1] [i_1] = (((!(arr_6 [i_1]))));
            var_15 ^= (arr_15 [i_5] [i_1 + 3]);
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_16 = (((var_9 ? var_9 : var_1)));
            var_17 = ((arr_9 [i_1] [i_1 + 2] [i_1] [i_6]) ? (arr_9 [i_1] [i_1 + 1] [0] [0]) : (arr_9 [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 + 3]));
            var_18 = (min(var_18, (((((((arr_6 [i_1]) << (var_7 - 1097677010)))) <= (arr_15 [i_1] [i_6 + 2]))))));
            var_19 = (((arr_11 [i_1 + 2] [i_1 + 3] [i_1 - 1]) ? (var_8 <= var_0) : ((var_5 ? var_6 : var_3))));
        }
    }
    for (int i_7 = 4; i_7 < 22;i_7 += 1)
    {
        var_20 *= (((((arr_21 [i_7 + 1]) <= var_3)) ? var_0 : ((197 ? -2147483638 : -106))));
        var_21 = (var_5 <= 3741490201);
    }
    #pragma endscop
}
