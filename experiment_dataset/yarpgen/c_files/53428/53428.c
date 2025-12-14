/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (min((min(var_0, (var_3 || var_10))), var_0));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [19] [0] = (((((~(arr_3 [i_0])))) || (((~((2672705307335216916 ? (arr_0 [i_0]) : var_9)))))));
        arr_5 [i_0] [i_0] = var_7;
        var_21 = ((~((((min(-1, -1))) ? 1 : (arr_0 [i_0])))));
    }
    var_22 = (((7 ? ((var_7 ? var_12 : 6) : ((var_16 << (var_19 - 99)))))));
    #pragma endscop
}
