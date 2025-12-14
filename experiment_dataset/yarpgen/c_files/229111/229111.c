/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((~(~var_8))), (((((var_10 ? var_0 : var_6)) == ((min(13207, 23892))))))));
    var_13 = ((~(var_2 <= var_11)));
    var_14 += (min(((min(-24334, -20241))), var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = arr_0 [i_0];
        var_16 |= (((arr_0 [i_0]) ? (arr_1 [i_0]) : (((!((min(669241296004262317, 9223372036854775807))))))));
        var_17 = ((!(((var_0 - var_8) == -31462))));
        var_18 |= (((((23892 / 24992) ? 255 : (-32767 - 1)))) ? (-32767 - 1) : 23892);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_19 |= ((max(((var_5 ? var_10 : (arr_2 [i_1 + 2] [i_1])), (arr_3 [8])))));
        var_20 *= max(-1, 24333);
        var_21 = min(23904, -24993);
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_22 = ((+((min((arr_5 [i_2]), (max((arr_0 [i_2]), (arr_6 [i_2]))))))));
        var_23 = (max(var_23, (((-32761 ? (arr_1 [i_2 - 2]) : var_4)))));
        arr_7 [i_2] [i_2] = ((((max(var_4, (arr_1 [i_2 - 2])))) ? ((-(arr_6 [i_2]))) : 267525969));
        var_24 = (((((arr_6 [i_2 + 1]) ? (arr_6 [i_2 - 1]) : ((var_3 ? (arr_5 [i_2]) : var_4)))) >= (min(((min((arr_6 [i_2 + 2]), (arr_6 [i_2 - 1])))), (((arr_6 [i_2]) - var_9))))));
    }
    #pragma endscop
}
