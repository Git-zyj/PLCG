/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, (((((max((arr_3 [7]), (max((arr_3 [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 - 1])))))) ? 255 : var_8)))));
        arr_4 [i_0] &= ((~(((((-(arr_0 [i_0])))) ? (((((arr_0 [8]) >= -2402479773243256002)))) : ((37 ? 3521786361 : 126))))));
    }
    #pragma endscop
}
