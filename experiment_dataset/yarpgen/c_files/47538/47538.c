/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 ^= (var_5 != var_12);
        var_15 = (max(var_15, (((18446744073709551615 >> (5052620260740225123 - 5052620260740225086))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (max(var_16, (((((707909822 ? (arr_0 [i_1] [i_1]) : var_7))) ? (arr_1 [i_1]) : var_7))));
        arr_5 [i_1] = (((arr_3 [i_1]) ? (((9 ? (arr_3 [i_1]) : (arr_2 [i_1])))) : (arr_0 [17] [i_1])));
        arr_6 [i_1] = (((arr_4 [i_1]) == (arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_17 = ((+(((~var_4) ? (((var_8 - (arr_9 [i_2])))) : ((60 ? var_1 : (arr_8 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_18 = ((((((4294967254 ? var_2 : var_11)))) ? ((((1 != (arr_7 [i_2]))) ? -21709 : (((!(arr_11 [i_3] [i_3] [i_3])))))) : (((4294967256 != (((arr_7 [i_2]) ? 22 : (arr_10 [3] [i_4] [i_3]))))))));
                    arr_14 [i_2] [i_3] [i_4] = (((arr_11 [i_2] [i_3] [i_3]) ? -698826563 : var_10));
                }
            }
        }
        var_19 *= (((!((min(var_3, var_13))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_21 [i_5] = (((arr_17 [i_6]) ? (arr_17 [i_6]) : (arr_16 [i_5])));
            var_20 |= (((1 ^ 1) ? (arr_18 [i_5]) : (~-6201152601053685499)));
            arr_22 [i_5] = var_13;
            var_21 = ((arr_7 [i_5]) ? (arr_7 [i_5]) : (arr_7 [i_5]));
        }
        arr_23 [i_5] = (((((arr_12 [10]) ? (arr_8 [i_5]) : 198)) * var_7));
        var_22 += 151;
    }
    var_23 = ((116 ? (((min(var_0, var_3)))) : (min(4294967254, var_4))));
    var_24 *= var_12;
    var_25 = ((+(((65 * 4294967259) >> (var_5 - 14278)))));
    #pragma endscop
}
