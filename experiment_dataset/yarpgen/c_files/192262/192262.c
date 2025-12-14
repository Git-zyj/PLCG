/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-3278 ? (min(var_9, -17969)) : var_14))) ? ((((524287 ? 1420530799 : var_0)))) : var_6));
    var_21 = ((-(((((1 ? 18446744073709027328 : var_3))) ? var_5 : 3205329618488862456))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_22 *= (min((((arr_2 [8]) * (arr_1 [10] [i_0 + 1]))), ((-1648711579 ? (arr_1 [8] [i_0 + 2]) : 3))));
        arr_3 [i_0 + 2] [i_0] = max(1420530799, (arr_1 [i_0] [i_0 - 1]));
        var_23 = (max(1927265633, 2436603215));
        var_24 = (min(var_24, (((max(((max(0, (arr_2 [4])))), var_13))))));
    }
    #pragma endscop
}
