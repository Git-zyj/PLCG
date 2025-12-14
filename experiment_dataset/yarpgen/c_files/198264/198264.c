/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_6 <= var_0);
    var_12 = (((((((0 != var_6) == -76)))) > 18446744073709551586));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) > var_7));
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] &= (arr_1 [i_0]);
        arr_6 [i_0] [i_0] = (((arr_0 [i_0]) > ((((max(10658332182830872819, (-9223372036854775807 - 1)))) ? 1 : var_9))));
    }
    #pragma endscop
}
