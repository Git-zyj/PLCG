/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((((((((~(arr_0 [i_0]))) | ((min(var_1, 130))))) + 2147483647)) >> (((arr_0 [i_0]) * (arr_0 [i_0])))));
        var_12 = (((((((((arr_1 [0] [8]) ? (arr_1 [i_0] [0]) : 1))) ? 141 : (arr_1 [i_0] [6])))) >= ((0 ^ ((983428082 ? 6676693539275765650 : 1))))));
    }
    var_13 = (((((-404045881 + var_4) ? (-404045881 ^ var_5) : -var_1)) | (~var_1)));
    var_14 += (73 | var_8);
    #pragma endscop
}
