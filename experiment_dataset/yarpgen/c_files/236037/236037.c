/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((!((((arr_1 [i_0]) % (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = (max(((6860600302646513274 | (min(var_9, 30163)))), (((((((arr_0 [i_0]) + 3107756583))) ? 923 : (arr_1 [i_0]))))));
    }
    var_13 |= ((var_0 << (-var_0 + 106)));
    var_14 += var_9;
    var_15 = 0;
    #pragma endscop
}
