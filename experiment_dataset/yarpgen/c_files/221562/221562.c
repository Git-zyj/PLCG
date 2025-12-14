/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -84;
    var_17 = 3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;
        var_18 += (((((((13835058055282163712 & (arr_0 [i_0])))) ? (max(710419247, (arr_1 [i_0] [i_0]))) : ((((100 >= (arr_1 [i_0] [i_0])))))))) ? (((-79 + 2147483647) << ((((((~(arr_0 [i_0]))) + 50)) - 20)))) : (((~-5653911851675469470) ? 139 : 58737)));
    }
    var_19 = (-100 / var_1);
    #pragma endscop
}
