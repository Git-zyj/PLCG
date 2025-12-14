/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_8 | (18446744073709551606 || var_4))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 |= (((arr_0 [i_0]) << (((((max(var_0, (arr_0 [i_0]))) << ((((arr_0 [i_0]) > (arr_0 [i_0])))))) - 12625544734655046674))));
        var_14 = ((max(14, 39)) << (-21 - 18446744073709551578));
    }
    var_15 = (min(var_15, (((!((max(-var_4, 2791185720))))))));
    #pragma endscop
}
