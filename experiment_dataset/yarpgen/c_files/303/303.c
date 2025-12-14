/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((~(((!15) ? 352771936 : 237))));
        var_11 = (max(var_11, ((max((9223372036854775803 >> 15), (((9223372036854775808 ? (-2147483647 - 1) : 1001520024))))))));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((-(((-9223372036854775807 - 1) ? -11619 : 47))));
        var_12 = (max(var_12, ((((-1 == 2759659992028600784) ? (((min(((max(1, 1))), 38)))) : ((32 ? -1918800619 : ((-2750340382175831245 ? 2 : 1859220056)))))))));
        var_13 = (max(var_13, ((min((-7405433296392348194 / 1), (min(1, 4633451860418674653)))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_14 = (((0 < -4562989077671668196) ? ((-5630655983270872779 ? -9223372036854775795 : 1932193233)) : 4562989077671668196));
        arr_9 [i_2] = ((~(min(1, (max(66, 12))))));
    }
    var_15 = ((((max(var_4, var_8))) ? (((255 ? (!224) : var_0))) : -4532970560228677100));
    #pragma endscop
}
