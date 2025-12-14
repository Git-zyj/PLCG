/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (18446744073709551615 >= -1687);
        var_19 = ((-((3485309729214250737 ? 3505981563342194831 : (arr_0 [i_0])))));
        var_20 = (max(var_20, (!14940762510367356785)));
        var_21 = ((~(arr_1 [i_0])));
    }
    var_22 = var_10;
    #pragma endscop
}
