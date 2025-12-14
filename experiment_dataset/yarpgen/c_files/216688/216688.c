/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((0 ? var_15 : 65534));
    var_21 += ((var_8 ? (((!((min(var_14, var_9)))))) : (min(4, ((-32766 ? var_12 : var_5))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_22 += (~5746829669175346170);
        var_23 *= 1;
        arr_2 [i_0] = (((((((arr_0 [i_0]) << (var_18 - 1879624516))) << (arr_1 [i_0])))) ? (max((((!(arr_1 [i_0])))), (max((arr_0 [i_0]), (arr_0 [i_0]))))) : (arr_0 [i_0]));
        var_24 = (max(var_24, -110));
    }
    #pragma endscop
}
