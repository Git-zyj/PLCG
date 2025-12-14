/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min(((4433138414389965404 ? var_8 : 2307673589375134484)), (max(var_4, var_12)))), ((max(8384512, -20)))));
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (~576460752303422464);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = 12852512751521849093;
            var_21 = ((((((var_13 ? 5594231322187702522 : var_10))) ? (max(2108571131, var_10)) : var_3)) != (((~(arr_2 [i_1])))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 &= (((max(5594231322187702522, var_11))));
            var_23 *= var_4;
            arr_10 [i_2] [i_0] [i_0] = ((26 == (((max(12852512751521849094, var_13))))));
            var_24 = ((2307673589375134455 ? -2307673589375134485 : (-32767 - 1)));
        }
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            arr_13 [10] |= (max((((var_1 || (arr_0 [i_3 - 2] [i_3 + 1])))), (((arr_4 [i_0] [i_3 - 1] [2]) ? (arr_11 [i_3 + 2] [i_3 + 4]) : (((arr_2 [i_0]) ? (arr_11 [i_0] [i_3 + 1]) : var_1))))));
            var_25 = var_15;
            arr_14 [i_0] [i_0] = ((0 ? ((max(var_8, var_0))) : var_12));
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = var_11;
        var_26 = (((5371979064005695465 != var_0) / 9));
        arr_18 [i_4] = ((~(max(((var_3 ? (arr_16 [i_4] [i_4]) : (arr_15 [11]))), var_9))));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_21 [i_5] = (((arr_15 [i_5 + 3]) != (((211 ? -28150 : 1)))));
        arr_22 [i_5] [i_5] = (var_0 / -7684);
        arr_23 [0] &= max((((~((var_8 ? (arr_19 [i_5] [i_5]) : (arr_15 [15])))))), (((((-(arr_20 [i_5])))) ? var_11 : (((min((arr_19 [i_5] [i_5]), var_10)))))));
        arr_24 [i_5] [i_5] = arr_15 [i_5];
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    arr_35 [4] [i_7] [1] = arr_34 [i_6] [i_7] [i_8] [i_7];
                    arr_36 [i_6] [i_7] [i_7] [i_8] &= (10565 < 12852512751521849087);
                    arr_37 [i_6] [i_7] [i_6] [i_6] = (~-19446);
                    arr_38 [i_7] = (((arr_25 [i_6]) - 0));
                    var_27 = (arr_34 [i_6] [i_6] [i_7] [i_8]);
                }
            }
        }
        var_28 = (min(var_28, ((((((-24366 ? (arr_34 [i_6] [i_6] [i_6] [i_6]) : var_0))) > ((-2307673589375134478 ? 14 : 130)))))));
        var_29 = ((!(arr_34 [i_6] [i_6] [i_6] [i_6])));
    }
    #pragma endscop
}
