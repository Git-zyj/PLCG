/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_15 = (max(((max(49654, -58))), (((arr_2 [i_0] [7]) | (min(var_6, var_7))))));
        var_16 = ((((((((-(arr_1 [i_0])))) ? 9950697522714973645 : ((max(-32475, (arr_1 [i_0]))))))) ? ((((min((arr_0 [i_0 + 1] [i_0]), var_14))) ? (max(218, (arr_1 [i_0]))) : (arr_1 [i_0 - 2]))) : -1266306075));
        arr_3 [i_0] = ((var_0 ? (min((arr_2 [i_0 - 1] [i_0 - 2]), 12360)) : ((min((var_4 >= 26418), var_7)))));
    }
    var_17 = (907278826 && var_7);
    #pragma endscop
}
