/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-6989146814827354276 + var_0);

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_1 [i_0 - 2] [i_0 + 1]) ? 1 : (arr_1 [i_0 + 1] [i_0 - 2]))), ((((arr_1 [i_0] [i_0 - 2]) | 1099511625728)))));
        var_20 = 18446744073709551615;
        var_21 = (((((3633365436 ? ((1 ? 4294967295 : 1)) : -1021952427))) ? (1 + 4294967295) : ((((3930 ? 0 : 5975910449309250693)) + ((min(534773760, 4294967278)))))));
    }
    #pragma endscop
}
