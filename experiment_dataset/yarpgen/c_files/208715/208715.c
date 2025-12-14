/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-1 + (var_9 * var_12))) & ((-var_7 ? (1 >> var_4) : var_12))));
    var_16 = (!var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((arr_0 [i_0]) == (arr_2 [i_0] [i_0]));
        arr_3 [i_0] = ((-1 / (((!(arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (((arr_5 [i_1]) >> (arr_5 [i_1])));
        arr_6 [i_1] = ((~(1 - 0)));
        arr_7 [i_1] = (arr_4 [i_1]);
    }
    #pragma endscop
}
