/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((13142773023529449971 * (7 / var_1)))));
    var_19 = ((-(min(((12477 ? var_13 : var_2)), (var_8 && 127)))));
    var_20 = ((var_10 + 9223372036854775807) << (var_8 - 4424));
    var_21 = var_16;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_14;
        var_22 = (((((((-(-127 - 1)))) ? ((1223706722 ? var_0 : 10)) : (!9))) <= ((~(arr_0 [12])))));
    }
    #pragma endscop
}
