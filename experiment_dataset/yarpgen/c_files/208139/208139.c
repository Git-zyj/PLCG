/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = 2093724930;
        arr_3 [i_0] = ((~((((-5904077501492572326 ? (arr_1 [3] [i_0]) : (arr_1 [i_0] [i_0]))) % var_6))));
    }
    var_14 = (-9223372036854775807 - 1);
    var_15 = ((-((17569 ? (-7991328865656026503 & -5904077501492572333) : 415819604))));

    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_16 = (var_12 & -var_2);
        arr_7 [i_1] = (i_1 % 2 == zero) ? (((~(((7506208713496113682 < 53929) >> (((arr_5 [i_1]) + 105))))))) : (((~(((7506208713496113682 < 53929) >> (((((arr_5 [i_1]) + 105)) - 37)))))));
        var_17 = (min(var_17, ((((12854 < -32006) ? ((-13386 + ((-7991328865656026497 ? var_7 : -75)))) : ((min(415819602, 415819620))))))));
        arr_8 [i_1] = (arr_4 [i_1]);
        arr_9 [i_1] = (((1 >= 2199023255551) ? (47967 > -3633525791364082658) : ((31 ? (!var_13) : ((var_7 ? var_6 : (-32767 - 1)))))));
    }
    #pragma endscop
}
