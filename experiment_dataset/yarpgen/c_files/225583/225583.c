/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (min(var_10, 16572783620190638493));
        arr_2 [i_0] = (180 == -6612822133240950263);
        var_11 ^= 18263530445598882294;
        arr_3 [i_0] = ((arr_1 [i_0] [i_0]) << (var_0 - 4082));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_12 = (min((max(18263530445598882294, 8140641162715294221)), (-9223372036854775807 - 1)));
        arr_6 [i_1] [4] = (max(183213628110669322, (((((42 ? 103 : var_6))) ? (183213628110669323 & 233) : 8583289407619484163))));
        arr_7 [9] = (((min(((-8181503054581794956 ? 1 : 183213628110669308)), (((8181503054581794956 ? (arr_5 [i_1] [i_1]) : (arr_4 [i_1])))))) << (var_2 - 1313700835)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] = var_4;
        var_13 = ((!(((36028797018963952 - (arr_10 [i_2]))))));
        var_14 ^= (((arr_8 [i_2] [i_2]) ? ((454356639 ? 1 : 181)) : ((((max(39934, (arr_10 [8])))) - ((1 ? -6004 : 70))))));
    }
    var_15 = (min(var_15, var_9));
    var_16 = 1184556457;
    #pragma endscop
}
