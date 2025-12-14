/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 += ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [6]) : -836055637))) ? (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [5]))) : ((((arr_1 [i_0]) ? -32758 : 1)))));
        var_11 = (((arr_0 [i_0] [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) : ((((!(arr_0 [i_0] [i_0])))))));
        var_12 = ((182 ? 12558087888982474959 : -33));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 = (arr_4 [i_1]);
        arr_5 [i_1] = ((80 ? ((74 ? 6541035855525344217 : 9223372036854775806)) : 22));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [6] = (arr_6 [9] [i_2]);
        var_14 |= (((((((9223372036854775798 ? -112 : (-9223372036854775807 - 1)))) ? 4294967295 : (65530 / -1330626812988627491))) << ((((((12558087888982474933 ? -6144 : 504)) + 6187)) - 12))));
    }
    var_15 = ((-1413590911 | 128) ? 50 : ((182 ? -3063678251331437983 : 32758)));
    #pragma endscop
}
