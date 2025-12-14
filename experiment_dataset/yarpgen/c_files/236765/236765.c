/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((~(((arr_2 [i_0]) ? (97 == 109) : (!18446744073709551615)))));
        arr_4 [i_0] [i_0] = (((((6208 >= 8474823565776176332) | 6196)) == (-109 | 1)));
        arr_5 [i_0] = (((arr_1 [i_0]) ? (((arr_2 [i_0]) ? (((-110 == (arr_2 [i_0])))) : (((3376294219190472626 >= (arr_1 [i_0])))))) : (arr_1 [i_0])));
    }
    #pragma endscop
}
