/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 ^= (((((((~(arr_1 [i_0])))) ? (arr_1 [i_0]) : (((!(arr_0 [i_0]))))))) ? (arr_0 [i_0]) : ((16874759929385973062 ? 1 : 6559682909621279220)));
        var_12 &= (arr_1 [4]);
        var_13 += (((arr_0 [i_0]) ? (14 <= 16) : ((((!(arr_0 [5])))))));
    }
    var_14 = ((((((14948240103834132319 ? var_7 : (~var_2))) + 9223372036854775807)) >> (!var_4)));
    var_15 = (((~var_8) <= ((var_4 - (var_6 - var_4)))));
    var_16 = (min(var_16, ((((var_9 + var_2) ? (((!(!var_9)))) : (-119 + 54))))));
    #pragma endscop
}
