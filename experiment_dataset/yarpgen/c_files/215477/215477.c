/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -2;

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((((~(arr_3 [i_0]))) - (((((arr_3 [i_0 - 1]) + 9223372036854775807)) >> (2251872096813920969 - 2251872096813920920))))));
        var_13 = (((((!(arr_1 [i_0] [i_0]))))) ? (arr_0 [i_0]) : ((2251872096813920960 >> (144115188075851776 - 144115188075851773))));
        arr_5 [i_0] = (((arr_1 [i_0 - 2] [i_0]) ? (((max((arr_1 [i_0 + 2] [i_0]), 2251872096813920961)))) : 2251872096813920969));
        var_14 = (min(var_14, ((-((var_10 ? var_1 : (arr_2 [i_0 - 1])))))));
        arr_6 [i_0] = -2885447470918085683;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] [i_1] = (max(-1966540132, var_3));
        var_15 = ((max(65535, (arr_3 [i_1 + 2]))));
    }
    var_16 = var_10;
    #pragma endscop
}
