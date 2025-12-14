/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((48685 ? 83 : 451589963))) ? (12458 != var_13) : (max(18446744073709551615, 9223372036854775807)))) + var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = ((18446744073709551615 ? ((~(arr_0 [i_0] [i_0]))) : (~51248803)));
        var_21 = (((((6189726665630491610 ? var_8 : 83))) ? (((var_13 ? (arr_1 [i_0] [i_0]) : var_12))) : ((-2284307780845604917 ? 680216492 : var_1))));
    }
    #pragma endscop
}
