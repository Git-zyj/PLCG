/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((max(var_13, 7))) ? -var_0 : (min(0, 588659814)))) != (((-45 + (~34)))))))));
    var_16 = (max((((1547970670 + (max(var_6, var_14))))), var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 &= 3433247765;
        var_18 = (((arr_2 [10] [i_0]) || (((6 ? (arr_2 [i_0] [i_0]) : (arr_3 [i_0]))))));
        var_19 = (((-359166911 >= var_4) * -6));
        arr_4 [i_0] = -41;
        arr_5 [i_0] = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1 + 1] = (((6 * 7300) ? (((min((arr_6 [i_1]), -8)) & (((-44 ? 65 : 1))))) : var_11));
        arr_9 [i_1 - 1] = (((((((var_1 ? var_13 : var_0))) + 8353028377540369709)) | ((min(var_2, (max(var_2, var_11)))))));
        arr_10 [i_1 + 1] [i_1] = ((((-(arr_7 [i_1 - 1]))) ^ ((((!-44) != var_2)))));
    }
    var_20 = ((-((((min(1424020877, var_3))) ? (~var_6) : (var_2 ^ 6)))));
    #pragma endscop
}
