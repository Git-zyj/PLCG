/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = ((281122293134506944 ? (((((4282898921 ? var_4 : (arr_0 [i_0] [i_0])))) ? ((1 ? (arr_1 [i_0] [i_0]) : (arr_0 [9] [i_0]))) : (arr_0 [i_0] [i_0]))) : (((((142 ? (arr_1 [20] [i_0]) : 18202827141969938092))) ? 44592 : ((1712273396 ? (arr_0 [18] [i_0]) : (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_12 = (((-8786709129582710749 > 44607) == (var_0 < var_10)));
    #pragma endscop
}
