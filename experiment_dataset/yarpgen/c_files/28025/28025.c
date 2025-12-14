/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((-12800 ? 4758129349371451515 : 5467318784335454861))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 5;
        var_20 ^= (max(0, (--486634468784718081)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = ((((((21 ? 21 : (arr_5 [2]))))) ? (arr_4 [i_1] [i_1]) : (!-22)));
        arr_6 [i_1] [i_1] = ((((((~262143) ? (~40267) : ((26 ? 1 : var_18))))) ? 15458041059534341046 : ((var_14 ? ((~(arr_5 [i_1]))) : (((arr_5 [i_1]) ? 183 : (arr_4 [i_1] [i_1])))))));
    }
    var_22 |= 6761786103628145404;
    var_23 += ((min(var_15, 183)));
    #pragma endscop
}
