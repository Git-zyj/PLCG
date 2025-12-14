/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_2;
    var_11 = (max(var_9, (~var_0)));
    var_12 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (arr_1 [i_0] [i_0]);
        var_14 ^= ((((((arr_0 [i_0 - 1]) + (arr_0 [i_0 - 1])))) ? (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) : (((arr_0 [i_0 - 1]) / (arr_0 [i_0 - 1])))));
        arr_2 [i_0 - 1] = (((arr_1 [i_0 - 1] [i_0 - 1]) < (var_3 >= 25283)));
        var_15 = (arr_1 [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = var_6;
        arr_7 [i_1] = (((((25287 ? var_9 : 1))) % 30));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = (((((110 << (((~var_3) + 1382487346840747035))))) / (max((((25306 ? (arr_8 [i_2]) : -1))), ((25301 ? 2933280309286249037 : (arr_4 [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_17 *= ((((((13 ? -461140174 : 656286675966879069))) ? 5650 : var_6)));
                        var_18 = (((((-461140193 << (52462 - 52448)))) ? ((var_3 ? (((arr_14 [i_2] [i_2] [i_2] [i_2]) ? (arr_9 [17]) : 17790457397742672567)) : (min(17790457397742672546, (arr_11 [1] [i_3]))))) : (17790457397742672546 <= 33)));
                        var_19 = (((arr_0 [i_4]) ? -var_7 : (max((arr_3 [i_2]), (arr_0 [i_5])))));
                        var_20 *= ((-461140165 << (((arr_4 [i_4]) - 143))));
                    }
                }
            }
        }
        arr_18 [i_2] = (arr_8 [i_2]);
        var_21 = ((((((max((arr_5 [i_2] [i_2]), (arr_13 [12] [12] [i_2] [i_2])))) >> (((((arr_8 [i_2]) | (arr_17 [i_2] [i_2]))) - 18446744073709551527))))) ? (arr_3 [i_2]) : ((((((arr_6 [i_2]) ? (arr_8 [i_2]) : var_7))) ? (arr_9 [5]) : (1 | 17944076990336026416))));
        arr_19 [i_2] = ((((arr_6 [i_2]) + (max(9223372036854775807, 1)))));
    }
    #pragma endscop
}
