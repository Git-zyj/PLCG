/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_1] = ((((((73 ? (arr_1 [i_0]) : 95)))) ? (min(((((arr_2 [i_0] [i_0]) ^ (arr_2 [i_0 - 1] [i_0])))), (arr_1 [i_0]))) : ((((((var_8 ? -36 : 182))) ? var_7 : (((arr_0 [i_0] [i_1]) - var_1)))))));
            arr_6 [i_0] [6] [i_1] = ((((!((min(87, var_5)))))) - (arr_2 [i_1] [1]));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_12 = (((min((-9223372036854775807 - 1), -12))) ? (((~(arr_2 [i_0 - 1] [i_3 - 1])))) : ((-5513403196503623894 ? (arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))));
                        var_13 = (min(var_13, (((((((-(arr_4 [i_2] [i_3] [i_4]))))) ? var_4 : (((var_9 || var_10) ? ((189 ? 138 : 731619545)) : (arr_7 [1] [i_0] [i_3 - 1]))))))));
                    }
                }
            }
            var_14 = (min((arr_11 [i_0] [i_0] [4] [i_2]), var_11));
            arr_17 [i_0] [i_0] [i_2] = (arr_1 [i_2]);
        }
        arr_18 [i_0] = ((min((arr_12 [8] [i_0] [i_0 + 1] [i_0]), -var_10)));
        var_15 = ((0 ? (arr_13 [i_0 - 1] [i_0] [2]) : var_9));

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_16 = (min(var_16, (arr_9 [i_0] [i_5])));
            var_17 = var_1;
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_23 [i_6] = (max((arr_22 [i_6]), (((arr_22 [7]) - (arr_22 [i_6])))));
        arr_24 [5] &= var_10;
        var_18 = (min(var_18, (((((max(var_3, (((arr_22 [i_6]) ^ var_10))))) ? (((~(arr_21 [i_6])))) : -1317087987)))));
        arr_25 [i_6] [14] = (min(154, (arr_21 [i_6])));
        arr_26 [i_6] [i_6] = (((min((!0), (!1))) ? (((!(arr_21 [i_6])))) : (((2576959841 && 195) ? (max(var_2, var_7)) : (((arr_22 [i_6]) ? (arr_22 [i_6]) : (arr_21 [i_6])))))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_19 -= ((((((min(1, (arr_22 [7])))) ? (arr_21 [1]) : -522979302)) - (((((var_10 ? 182 : 1))) ? (!var_11) : var_2))));
        var_20 = ((((max((arr_21 [i_7]), -593909313251551109))) ? (arr_27 [i_7]) : (((arr_28 [i_7]) | (((arr_21 [i_7]) ? (arr_27 [i_7]) : 61))))));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_21 ^= (199 - var_3);
            arr_32 [i_8] = (((((var_3 ? (arr_22 [i_7]) : (arr_22 [i_7])))) ? (((arr_22 [i_7]) / (arr_22 [i_8]))) : (((!(arr_22 [i_8]))))));
            var_22 = (arr_21 [i_8]);
        }
        var_23 = (max(var_23, (arr_30 [i_7])));
        var_24 = (max(var_24, ((min(83, ((-80 ? 4163446772 : -9223372036854775796)))))));
    }
    var_25 ^= var_0;
    var_26 = (~68);
    var_27 ^= ((min(var_0, var_5)));
    #pragma endscop
}
