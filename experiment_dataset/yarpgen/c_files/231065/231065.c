/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = 1926394963;
    var_13 = (((((54100 ? 20 : 18446744073709551615))) && ((!((min(54100, -1243909401)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [6] = (((arr_0 [i_0]) | 2488501611));
        var_14 = (arr_1 [i_0]);
        var_15 = (arr_1 [7]);
        var_16 = ((1926394963 ? var_4 : 1926394963));
    }
    var_17 -= var_7;
    #pragma endscop
}
