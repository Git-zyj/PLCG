/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] |= var_12;
        var_16 = ((var_2 ? (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))) : (max(var_6, ((212 ? (-32767 - 1) : 230))))));
        var_17 = (((((((-126 ? (-32767 - 1) : var_5)) / (arr_0 [i_0] [3])))) ? ((~((1 ? (arr_1 [i_0 - 1]) : var_10)))) : 8064));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_18 = (arr_4 [i_1] [i_1]);
        var_19 = (max(var_19, ((max(53535, 7048327534792858796)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        var_20 = ((1 ? 12000 : 47));
                        arr_16 [i_1] = ((((((arr_13 [i_1] [i_1] [i_3] [i_4] [10] [i_4]) * (-32745 * 0)))) ? var_4 : 7048327534792858796));
                        arr_17 [5] [i_1] [i_2] [i_1] [i_1] = ((var_9 ? (((((-103 ? 1 : 35))) ? 57 : (var_3 - -100))) : (min(var_0, 1))));
                    }
                }
            }
        }
    }
    var_21 = (max(var_7, ((126 ? (((1741627042 ? 1 : 127))) : (min((-32767 - 1), 9223372036854775807))))));
    var_22 = (min(0, -64));
    var_23 = (min(var_23, var_6));
    #pragma endscop
}
