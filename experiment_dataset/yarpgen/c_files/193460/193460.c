/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max((arr_1 [i_0]), ((((arr_0 [i_0] [20]) ? (arr_0 [i_0] [i_0]) : -2464))))) == ((((arr_0 [i_0] [i_0]) << (((((arr_1 [i_0 - 1]) ? 3336 : 1)) - 3335)))))));
        var_13 = (((arr_1 [i_0]) ? (((((-(arr_0 [i_0] [i_0 + 1])))) ? 1 : ((1 + (arr_1 [i_0 - 2]))))) : ((((max(4144087152578534434, (arr_0 [i_0] [i_0 - 1]))))))));
        arr_3 [13] [13] = var_7;
    }
    var_14 = ((1 ? ((18446744073709551587 ? -16384 : (!1))) : ((~((64483 ? var_0 : -1058))))));
    var_15 &= 4092;
    var_16 = var_4;
    #pragma endscop
}
