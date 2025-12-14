/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -4320278223987188543;
        var_15 = (min((((~(arr_2 [i_0] [i_0])))), (max(((-2407763488933285421 ? (arr_1 [i_0]) : (arr_2 [i_0] [2]))), (((~(arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [6] [2] = ((((arr_0 [i_2]) & 9223372036854775803)));
            var_16 = (((((min(-4320278223987188543, -4320278223987188535)) / -4320278223987188535)) / (min(((var_8 / (arr_7 [i_1] [4]))), (arr_1 [0])))));
            var_17 = max(((min((11081 << var_4), ((max(-11082, -11081)))))), var_2);
            var_18 = ((((arr_5 [i_1 - 1]) & (arr_5 [i_1 - 1]))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_19 = (~((((arr_11 [i_1 - 1]) && (arr_11 [i_3])))));
            var_20 = (arr_0 [i_3]);
            var_21 = (min(var_21, ((~(((((min(22, (arr_2 [i_1] [4]))))) | -6419010282251513787))))));
            var_22 = (min(var_22, ((((((((arr_14 [3]) < (3198118046 / var_7))))) * (((((-(arr_2 [1] [1])))) / (max((arr_1 [i_1]), (arr_5 [i_1]))))))))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 = (((7161 ? 9223372036854775785 : 4294967295)));
            var_24 = (((!-14) ? var_6 : (arr_15 [5] [5])));
        }
        var_25 = ((~(((var_8 && (arr_11 [i_1 - 1]))))));
        var_26 = ((-(11104 * -8320)));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_27 = (arr_20 [i_5] [2]);
        var_28 = (min(((-((var_3 ? -21 : var_11)))), (((-((21 ? (arr_17 [i_5]) : var_7)))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_29 = (min(var_29, (((var_14 ? (min(12616954578803543931, (arr_22 [i_7] [i_7]))) : -6419010282251513787)))));
            arr_26 [i_7] = ((3197913732 ? 13 : -164851649));
        }
        var_30 -= -var_11;
    }
    var_31 = var_1;
    var_32 = (var_5 % var_9);
    #pragma endscop
}
