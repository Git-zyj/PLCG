/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((var_8 ? (arr_1 [i_0]) : var_10))) ? ((var_11 ? (arr_1 [i_0]) : (arr_0 [2]))) : ((max(var_8, -1886392703)))))) ? (((max(var_9, var_15)))) : (((((~var_14) + 2147483647)) << (((max(var_13, 9179629557760969049)) - 9179629557760969049))))));
        arr_3 [i_0 + 3] = ((max((6025295397200413014 >= 1), (9179629557760969049 >= -9179629557760969049))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = ((var_10 ? (((var_14 == (min((arr_7 [i_1] [i_1]), var_0))))) : var_4));
        arr_9 [i_1 + 1] = ((+(min((~var_1), ((var_15 + (arr_4 [i_1])))))));
    }

    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        arr_12 [13] = var_12;
        arr_13 [i_2] = (min((((!-259278350373330646) ? ((((arr_10 [i_2 - 2]) ? var_7 : 1))) : var_1)), (((max(var_16, 9179629557760969049))))));
        arr_14 [i_2] = ((((((var_15 & var_5) ? var_2 : var_15))) ? (arr_11 [i_2]) : ((((var_14 ? var_7 : -9179629557760969063)) & var_8))));
        arr_15 [i_2] = (((((((min(var_3, (arr_11 [i_2 - 3])))) ? (((var_9 + (arr_10 [i_2])))) : var_0))) ? ((min(((max((arr_11 [i_2]), (arr_10 [i_2 - 1])))), (min(986930439, var_10))))) : (min(((var_8 ? var_14 : var_16)), (min(9179629557760969047, 91))))));
    }
    var_17 = 9179629557760969062;
    #pragma endscop
}
