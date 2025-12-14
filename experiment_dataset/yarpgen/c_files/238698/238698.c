/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = max(((-(~0))), (-19046 == 28));
        arr_4 [i_0] = (!(((203 ? 1 : ((var_8 ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
    }
    var_16 = (((((56 >> (var_2 - 159)))) ? var_11 : (((((-257558222 ? var_10 : var_2)) != ((18446744073709551607 ? 0 : var_8)))))));
    #pragma endscop
}
