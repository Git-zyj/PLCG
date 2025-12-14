/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = (((((((var_7 ? 0 : -1289209249)) * var_9))) ? var_12 : (max((((var_3 ? 0 : 1))), (~-5303291014599577620)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((+(((arr_1 [i_0] [i_0]) + (116 - 1)))));
        var_16 = ((((min(250, 255))) ? (((-(arr_0 [i_0])))) : ((255 ? var_6 : (arr_0 [i_0])))));
        var_17 = (~(((arr_3 [i_0]) | (arr_2 [i_0] [i_0]))));
    }
    #pragma endscop
}
