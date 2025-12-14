/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_10 = 34138;
        var_11 = (arr_0 [i_0 - 1]);
        var_12 = ((((min(var_8, 1))) ? (((arr_2 [9]) ? 31398 : var_3)) : ((var_6 ? (max(var_0, var_3)) : (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((-(arr_1 [i_0 + 2])));
                    var_14 = (((((max((min((arr_5 [i_0] [i_1] [2]), (arr_4 [i_0] [i_1]))), (((96 ? (arr_5 [i_0] [7] [i_2]) : 159))))) + 9223372036854775807)) << (((arr_7 [i_0 - 2] [i_0] [i_0 + 2]) - 158))));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        var_15 = 535822336;
        var_16 = ((((arr_8 [i_3]) ? var_0 : (arr_9 [i_3]))));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_13 [17] [i_3 - 1] [i_3] = ((var_6 ? 62914560 : ((var_3 ? var_8 : (arr_12 [i_3])))));
            var_17 = (arr_9 [i_3]);
        }

        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            var_18 ^= (arr_15 [i_3] [i_3] [i_3]);
            arr_18 [i_5] [i_5] = (arr_14 [i_5]);
            arr_19 [i_3] [1] [i_5] = 34138;
            arr_20 [i_5] = (((arr_16 [i_3] [9]) ? (((arr_16 [i_3 - 3] [i_5 - 1]) ? 4278190080 : var_8)) : (((var_1 ? ((var_7 << (var_9 - 64082))) : (((~(arr_17 [i_3 - 2])))))))));
            var_19 = (min(-2383660264583993468, (arr_9 [i_3 - 3])));
        }
        var_20 = 96;
    }

    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_21 *= (min((arr_24 [i_6]), (var_0 - var_3)));
        var_22 = ((((min((max(var_0, var_6)), ((var_9 ? var_6 : var_4))))) < 1));
    }
    #pragma endscop
}
