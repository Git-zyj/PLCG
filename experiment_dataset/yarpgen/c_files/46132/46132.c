/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = (min(var_11, (((!((((26864 / var_8) - 1868326796001831482))))))));
        var_12 = -1868326796001831483;
        arr_3 [i_0] = ((((max(1868326796001831490, (arr_0 [i_0])))) ? (((1868326796001831501 ? (!1868326796001831490) : (!var_2)))) : ((1 ? (arr_1 [i_0]) : ((-1868326796001831503 ? (arr_2 [0] [8]) : 7601888376913181956))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = (max(1, (max(1868326796001831502, 1868326796001831491))));
        var_13 ^= ((((!(((var_2 ? var_3 : (arr_5 [10])))))) ? ((3057102636 ? -1868326796001831475 : 1868326796001831482)) : (max(-9041450169699923031, ((-900588836 ? -1 : 21695))))));
    }
    var_14 = (min(11170211931381778949, 0));
    #pragma endscop
}
