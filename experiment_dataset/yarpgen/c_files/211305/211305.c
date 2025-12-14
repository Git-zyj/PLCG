/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((7852 ? ((min(var_4, var_3))) : (0 | -32764)))) ? ((var_2 ? (~1) : (-64 ^ var_5))) : ((1941634456 ? 73 : -1941634455))));
    var_11 += ((!(var_6 != var_1)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) & (max(-19959, 3480700432538238412))));
        var_13 = 7801099840668274304;
        var_14 = 896;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (((~7859) && 24));
        var_16 = (arr_0 [19]);
    }
    var_17 = (~var_9);
    var_18 = (min(var_18, 1941634460));
    #pragma endscop
}
