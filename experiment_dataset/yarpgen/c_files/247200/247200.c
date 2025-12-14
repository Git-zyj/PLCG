/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((9223372036854775791 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? var_9 : (!var_6));
        arr_3 [i_0] &= (((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) ? (min((arr_0 [i_0] [i_0]), ((((arr_1 [i_0] [i_0]) ? 25984 : var_6))))) : (((((~(arr_0 [i_0] [i_0]))) & 0)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 &= -6;
        arr_6 [0] = (((arr_4 [i_1]) << (((var_4 >= (arr_0 [22] [13]))))));
        arr_7 [i_1] = (!-172737906);
    }
    var_15 = (((var_6 >= 9223372036854775795) * (((var_1 / var_2) & (((192 ? 39551 : var_3)))))));
    var_16 = ((var_8 ? (~var_10) : var_4));
    var_17 = ((((((max(54, 12))) ? var_8 : ((var_0 ? var_2 : var_12)))) * 51));
    #pragma endscop
}
