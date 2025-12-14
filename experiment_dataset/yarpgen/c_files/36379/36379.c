/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_11 | (((-6154935510921764103 <= (-9223372036854775807 - 1))))))) <= (max((1222433003 % 18446744073709551602), (max(var_9, var_7))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (1578152048 == 89)));
        var_19 = (max(var_19, var_6));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((-1577899475 * (var_3 > var_9)));
        var_20 = (max(var_20, ((max(var_11, ((max(var_5, (var_8 || var_14)))))))));
        var_21 = (min(var_21, var_11));
    }
    #pragma endscop
}
