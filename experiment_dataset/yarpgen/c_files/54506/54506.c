/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min((!var_9), (29729 && 0)))), (~1)));
    var_16 = 1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (((max((arr_0 [i_0] [i_0]), 4503599627370495)) == ((((arr_1 [i_0]) / ((max(173, var_7))))))));
        arr_3 [i_0] = (((arr_1 [i_0]) ? -32479 : var_1));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (((min((arr_2 [i_1]), (arr_2 [i_1]))) >= (min((arr_2 [i_1]), (arr_2 [i_1])))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_18 = (max(var_18, (((~(var_3 || 55966))))));
            var_19 = (max(var_19, var_6));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_20 = (max(var_20, ((((98 - var_9) ? (((arr_0 [i_1] [i_1]) | (-32767 - 1))) : ((7 - (arr_1 [i_1]))))))));
            arr_12 [i_1] = (min(-0, ((((arr_11 [i_1]) < (arr_11 [i_3]))))));
            arr_13 [i_1] = ((~(var_4 != var_11)));
            var_21 -= ((61 || ((min(((((arr_11 [i_1]) >= 32507))), ((var_8 - (arr_5 [i_3]))))))));
            var_22 ^= ((!((((!(arr_2 [10])))))));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_23 = max(((min(-1043279747160067044, (arr_4 [i_1])))), ((7397 / ((var_12 ? var_7 : var_4)))));
            arr_16 [i_1] [i_4] |= ((-255 >= (arr_2 [i_4 - 1])));
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_20 [i_5] = (max((((arr_18 [i_5]) ^ (arr_18 [i_5]))), ((-(arr_18 [i_5])))));
        var_24 += (((16383 ? 198 : 162)));
        arr_21 [i_5] = -var_4;
        var_25 -= ((var_9 | ((-(!31)))));
    }
    #pragma endscop
}
