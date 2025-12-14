/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0 - 1] &= (arr_2 [i_0] [7]);
        var_18 = (((arr_3 [i_0 - 1]) >> (((arr_3 [i_0 - 1]) - 1183500946))));
        var_19 = (arr_3 [i_0]);
        var_20 = (((var_14 && (arr_1 [i_0]))));
        var_21 = (290290765 >= 128);
    }
    var_22 |= (min(5376291417713649333, 290290772));
    #pragma endscop
}
