/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_9);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [1]) : (arr_1 [i_0] [i_0])))) || (arr_1 [i_0] [3]))))));
        var_18 = 39999;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_19 ^= ((var_5 % -330094729) % (arr_6 [0]));
        arr_7 [i_1] = (arr_6 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [3] [10] = (((arr_1 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_6 [i_2])));
        var_20 = (max(var_20, (((-(-330094733 + 330094721))))));
        arr_11 [0] = ((!(arr_0 [i_2])));
    }
    var_21 = (((((((var_3 ? var_13 : var_4))) ? 65535 : (~330094721)))) ? var_6 : var_9);
    var_22 = ((~var_13) ? 254 : var_6);
    #pragma endscop
}
