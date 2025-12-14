/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0] = 30;
        var_10 = (~var_4);
        arr_5 [i_0] = (min((!var_3), (((arr_1 [i_0 + 1]) ? 4294967295 : (62041 % var_6)))));
        arr_6 [i_0 + 1] [4] = ((10424485168659157908 > (min(10424485168659157908, 62041))));
    }
    var_11 = (((min(12067664255641670233, var_4)) * 8022258905050393708));
    var_12 = (((max((8903315211045220436 * 117), ((-3899128 ? 6379079818067881383 : 0)))) % (((8022258905050393708 ? (max(62041, -4403601406605173448)) : (((6379079818067881383 ? -3899128 : 30))))))));
    #pragma endscop
}
