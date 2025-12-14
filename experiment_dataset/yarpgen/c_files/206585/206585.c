/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? var_0 : ((var_12 ? 798731077 : var_0))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+(min((arr_0 [i_0]), ((-(arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = (((((-(arr_0 [i_0])))) ? (arr_0 [i_0]) : (((((-1410513445 / (arr_1 [i_0])))) ? 7167999470113778554 : ((max((arr_0 [i_0]), (arr_1 [1]))))))));
        arr_4 [14] [8] &= (((((((((arr_1 [i_0]) / (arr_1 [i_0 - 1])))) <= (15728640 & -434312533)))) < 1));
    }
    #pragma endscop
}
