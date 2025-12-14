/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 11097007422991631733;
        arr_3 [i_0] = ((((min(253, var_15))) ? 11097007422991631733 : (max(7125842073564431238, 689029513806227551))));
        arr_4 [i_0] = var_4;
        arr_5 [i_0] = -1305546952538176773;
    }
    var_16 += ((var_5 ? ((((0 && (((7349736650717919883 ? var_2 : 456656867))))))) : ((3838310453 ? var_13 : var_3))));
    var_17 = 45422;
    #pragma endscop
}
