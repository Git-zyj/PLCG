/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = var_5;
        arr_4 [i_0] &= (453936664 < 8091776555154277399);
    }
    var_13 = var_12;
    var_14 = 10354967518555274216;
    #pragma endscop
}
