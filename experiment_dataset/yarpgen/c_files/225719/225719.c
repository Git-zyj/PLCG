/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) == (arr_0 [1]))) ? (5 <= 2251799813684224) : (((arr_0 [i_0]) + (arr_1 [i_0])))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = (arr_0 [i_0]);
            arr_7 [i_0] [12] |= ((+(((arr_1 [8]) ? (arr_4 [1]) : (arr_0 [10])))));
            arr_8 [i_0] [i_0] [i_1] = ((+((((arr_1 [i_0]) != (arr_5 [i_0] [i_0]))))));
            arr_9 [i_0] [i_1] [i_1] = (1 ? (((arr_0 [i_0]) | (arr_1 [i_0]))) : (arr_0 [i_1]));
            arr_10 [13] [i_0] [15] = ((-((((arr_4 [3]) != (arr_1 [i_0]))))));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_20 = (max(var_20, 65535));
            arr_14 [i_0] [i_0] = (arr_13 [i_2] [i_0] [0]);
            var_21 = (13640 ? -1081903499298556939 : 2251799813684224);
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_22 *= 1072693248;
            var_23 += (((28 * 18446744073709551614) ? 1072693248 : ((-(arr_12 [i_3] [i_3] [11])))));
        }
        arr_17 [i_0] [2] = (((~2199023255551) != ((1073741568 ? 7294316008439613131 : (arr_11 [i_0])))));
        var_24 = (max(var_24, ((((((((arr_16 [4]) != 4294967295)))) ^ 7294316008439613119)))));
    }
    var_25 = var_3;
    var_26 = (var_4 ? (var_13 % var_14) : (((((9223372036854775807 ? 688508824113499524 : 2518203826125536834))) ? (max(18446744073709551614, var_12)) : (((var_12 << (3222274047 - 3222274035)))))));
    #pragma endscop
}
