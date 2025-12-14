/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 -= (min((~4567891347093429718), (~var_6)));
        var_18 |= (((min(var_0, (max(var_8, var_1)))) == (((2523593955 * (arr_0 [i_0]))))));
        arr_2 [5] = ((((((var_9 ? var_5 : (arr_0 [i_0]))) << (((max((arr_1 [i_0]), var_6)) - 18446744073709528231)))) - ((((arr_0 [5]) ? (arr_1 [i_0]) : var_0)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_19 = (arr_7 [i_1 - 2]);
                    var_20 -= (((((18446744073709551615 - (arr_9 [i_2])))) ? ((16705057642271509256 - (arr_8 [12]))) : (-9223372036854775807 - 1)));
                    arr_12 [i_1] = (((arr_3 [i_1 - 2]) ? -7563 : var_7));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_1 + 3] [i_1] [11] [i_1 + 3] [i_1] = ((((~(arr_10 [i_4] [i_4] [i_4]))) - (!var_2)));
                            var_21 = (max(var_21, (!2275820415)));
                            var_22 = (arr_3 [i_1 + 3]);
                        }
                        var_23 -= var_2;
                    }
                }
            }
        }
        arr_25 [8] &= (var_6 < var_0);
        var_24 = (arr_11 [i_1] [i_1 + 3] [i_1] [2]);
    }
    var_25 = (((((~(~var_8)))) & (max((var_2 | var_10), ((var_2 ? var_4 : var_15))))));
    #pragma endscop
}
