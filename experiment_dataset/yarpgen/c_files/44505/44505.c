/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_17 << (!47689)))) ? var_6 : var_9);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (max(var_21, (((18 ? (arr_0 [0]) : (((var_19 <= (arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_22 = (max(var_22, (arr_4 [i_0] [10])));
                        var_23 = ((~(((arr_6 [i_0]) >> 0))));
                        arr_10 [i_2] [i_0] [1] [i_3] [i_1] = (min(((max(31016, 62836))), (~var_11)));
                        arr_11 [i_0] = max(((731433289 - (((-(arr_3 [i_0])))))), (((-(61 <= 48903)))));
                    }
                    var_24 |= (((arr_0 [0]) ? ((((-7997946441204126903 + 9223372036854775807) >> (((!(arr_7 [6]))))))) : var_8));
                }
            }
        }
        var_25 = (arr_2 [i_0]);

        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            var_26 = var_18;
            arr_15 [i_0] [i_0] [i_0] = ((+((~(((arr_3 [i_4]) ? (arr_12 [i_0] [i_0]) : var_8))))));
            var_27 ^= (~1050676676);
        }
        var_28 = (((arr_6 [i_0]) | ((-9700983900455008549 / ((max(1980168912, 1)))))));
    }
    var_29 = ((((1 ? (5611974557461067494 != var_15) : (1 || var_18))) % (max(var_7, ((min(var_10, var_4)))))));
    #pragma endscop
}
