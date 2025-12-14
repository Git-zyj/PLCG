/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_13 ? (((-32767 - 1) ? 1023 : 5450)) : -1))) && (((~(((-8080689537269249501 + 9223372036854775807) >> (255 - 213)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -1815286987;
        var_17 = (max(var_17, (((((((((arr_1 [i_0]) * (arr_0 [2])))) ? (arr_1 [i_0]) : (var_2 * 1))) * (120 + -var_7))))));
    }
    var_18 = ((~(min(var_7, (~31)))));
    var_19 = var_10;
    #pragma endscop
}
