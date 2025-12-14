/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (58345 || 2057328577335095714);
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((((((arr_1 [i_0] [i_0 + 1]) - 5367753023567402062))) ? (((~(arr_0 [i_0 + 1])))) : (((arr_1 [i_0] [i_0 + 1]) ^ -90))))) : (((((((arr_1 [i_0] [i_0 + 1]) + 5367753023567402062))) ? (((~(arr_0 [i_0 + 1])))) : (((arr_1 [i_0] [i_0 + 1]) ^ -90)))));
    }
    var_15 = (min(((((var_4 ? var_7 : var_12)))), (max((var_5 + 1400450549), ((-2057328577335095735 ? 318762142 : var_14))))));
    var_16 = (max((2147483647 ^ 8707), (max(var_7, ((2179638082 ? 2057328577335095714 : 1266179472))))));
    #pragma endscop
}
