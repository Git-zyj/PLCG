/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 * (((((var_9 ? 10945 : 4644))) ? (min(-4657, var_4)) : (((-4645 ? -4674 : -4674)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((18446744073709551614 ? (arr_0 [i_0]) : (arr_1 [4])))) ? var_3 : (((min(var_9, (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (!1);
                    var_15 = ((((((2955483585 / var_10) ? ((var_8 ? 2769583879 : 3433692080084364714)) : (var_2 == var_12)))) ? (((((16 ? 12 : 18446744073709551599))) ? (max((arr_0 [i_2]), var_10)) : -18272)) : 4398046510976));
                    arr_8 [i_2] [i_1] [i_0] = 2955483585;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] = 18446744073709551615;
                                var_16 = ((((((((arr_12 [i_0] [i_1 - 1] [i_1] [i_3 + 3] [i_3 + 3] [i_1]) ? var_12 : 792584154))) ? 31 : 18446744073709551605)) >= ((((max(2325970795, var_8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_20 [i_5 + 2] = (min((arr_19 [i_5 - 1]), (min((((2147483630 << (var_13 - 7140596485454098537)))), (var_4 / 200)))));
        arr_21 [i_5] [i_5] = (max((((arr_16 [i_5]) ? (((24750 ? var_12 : 82))) : (arr_16 [i_5]))), ((((var_10 == (arr_16 [i_5])))))));
        arr_22 [i_5] = (((min((max(var_0, 4671)), var_3)) + (~var_2)));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_27 [13] = (((((arr_24 [i_6]) ? var_7 : var_4)) - (((min((arr_24 [i_6]), 1))))));
        var_17 = (min(var_17, (((!((((var_5 ? -3588950549044657032 : var_2)))))))));
    }
    #pragma endscop
}
