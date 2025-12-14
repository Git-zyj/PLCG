/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((min(11246759452760836695, (arr_0 [i_0]))), (((~(arr_0 [i_0]))))));
        arr_3 [i_0] = 7199984620948714921;
    }
    var_13 = ((var_11 / ((((min(var_12, var_11)))))));
    var_14 = 7199984620948714930;
    #pragma endscop
}
