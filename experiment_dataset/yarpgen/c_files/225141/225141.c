/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 16711680;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (min(var_15, (((((max(-16384, 288221580058689536))) && (!16711681))))));
        var_16 -= ((((4278255614 >= var_13) && 288221580058689536)));
        arr_2 [i_0] = ((~(((arr_1 [i_0] [i_0]) ? ((((arr_1 [i_0] [i_0]) >> (16711680 - 16711661)))) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 576443160117379072))))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_17 += (((arr_1 [i_1] [i_1 - 1]) - var_11));
        var_18 = (min(var_18, (((((((9223372036854775808 ? (arr_4 [i_1]) : (arr_4 [i_1])))) ? (((var_10 | (arr_1 [i_1] [i_1])))) : (min(var_7, (arr_3 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = (max(var_19, ((var_12 ? ((1974530110 ? (arr_0 [i_2]) : var_6)) : ((((max(3075042741, (arr_6 [i_2]))) / ((59601 ? 1219924545 : 3075042741)))))))));
        var_20 = (min(var_20, ((((~((1 ? -868006315 : (arr_0 [i_2])))))))));
        var_21 = ((((((((arr_0 [i_2]) | 14172299163703841315))) ? ((max(2048, 16711682))) : 1121944886672941860)) < ((((arr_5 [i_2] [i_2]) ? 16711682 : (-127 - 1))))));
    }
    #pragma endscop
}
