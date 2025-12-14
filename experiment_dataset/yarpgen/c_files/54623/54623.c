/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (((((~(arr_3 [i_0] [i_0])))) ? (min(((min(135, (arr_0 [i_0])))), (((arr_3 [6] [2]) & 33554431)))) : (((33554440 ? 135 : 5780700431685059453)))));
        var_17 += ((~(((arr_1 [i_0]) >> (4165797165 - 4165797159)))));
    }
    var_18 = var_2;
    #pragma endscop
}
