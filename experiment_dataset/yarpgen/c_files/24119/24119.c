/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_10 ^= ((((((arr_0 [i_0]) + (arr_1 [i_0])))) || (6227622095963224974 + 845853868239673561)));
        arr_2 [4] = ((arr_1 [i_0 + 2]) % (arr_1 [i_0 + 2]));
    }
    var_11 = (max(var_11, (((((var_5 ^ (var_0 < var_8))) / (min((var_5 & var_5), (var_9 | var_5))))))));
    #pragma endscop
}
