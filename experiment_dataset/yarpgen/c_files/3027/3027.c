/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 &= -0;
    var_12 = (~var_2);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((18446744073709551615 ? 0 : 1));
        arr_5 [i_0] = (max((var_3 & var_7), (6601003555645475474 > 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [0] [0] = ((53200 ? 1 : (arr_1 [i_1])));
        arr_9 [8] [0] = var_1;
        arr_10 [i_1] = (~-1933617880721418724);
    }
    #pragma endscop
}
