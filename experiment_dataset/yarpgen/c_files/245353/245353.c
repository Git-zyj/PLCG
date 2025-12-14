/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = min(17575006175232, (arr_0 [i_0] [i_0 - 1]));
        arr_3 [i_0] [i_0] = 4294967295;
        arr_4 [i_0] = ((((((67100672 != ((var_8 ? 68719476735 : 128)))))) != (max((~18446744073709551613), ((min(25, 64)))))));
    }
    var_14 = 4;
    var_15 = ((~(((!(((0 ? var_9 : var_4))))))));
    #pragma endscop
}
