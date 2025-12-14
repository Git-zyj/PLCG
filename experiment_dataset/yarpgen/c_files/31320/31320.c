/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = ((((((arr_1 [i_0]) % (arr_1 [i_0])))) ? ((((arr_1 [i_0]) & (arr_1 [i_0])))) : (min(157786787715277880, (arr_1 [i_0])))));
        var_15 ^= (max(((((arr_1 [i_0]) * ((var_11 ? 0 : (arr_0 [3] [19])))))), ((18446744073709551606 ? (arr_0 [14] [14]) : (~9676371986891264268)))));
    }
    var_16 = (((min(var_2, (~var_2)))) ? (((var_11 ? 1 : ((6652 ? 6 : 42850))))) : 157786787715277880);
    #pragma endscop
}
