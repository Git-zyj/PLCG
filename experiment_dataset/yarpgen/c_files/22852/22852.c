/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_13;
    var_20 |= var_8;
    var_21 |= (max(2904851444493960459, 1821819195));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_22 = (arr_1 [i_0]);
        var_23 = (max(var_23, (arr_1 [i_0])));
        var_24 ^= (0 >= 77);
        arr_3 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_25 += (((arr_4 [1]) ? (arr_5 [1]) : (arr_5 [8])));
        var_26 -= (arr_6 [14]);
        arr_7 [i_1] [i_1] = (arr_4 [i_1]);
    }
    #pragma endscop
}
