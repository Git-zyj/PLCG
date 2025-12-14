/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_3 [8] [i_0] |= (arr_0 [14]);
        var_11 = var_3;
        var_12 = -1059970238;
        var_13 = ((arr_0 [i_0]) != (((~(arr_2 [i_0 - 3])))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] = ((((((((var_1 ? var_9 : var_0))) ? var_0 : (min(var_7, var_5))))) ? ((-965253422 ? 1978342453085669136 : 238)) : ((((((68 ? (arr_5 [i_1] [i_1]) : 18))) ? (arr_5 [i_1 + 1] [i_1 - 1]) : ((252 ? (-32767 - 1) : -667277243)))))));
        arr_7 [i_1] [i_1] = (((-3758836048524645490 ? 254 : 229)));
        var_14 = (min(var_14, (((max(5060128990739857207, 1143873398196074234))))));
        var_15 = (min(16, (arr_4 [i_1 + 3])));
    }
    var_16 = ((~((((((var_4 ? -52 : var_0)) + 2147483647)) >> (((var_4 * var_0) - 17144143316115961275))))));
    #pragma endscop
}
