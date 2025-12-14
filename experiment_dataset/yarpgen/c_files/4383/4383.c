/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1, -8113866241678762311));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min(var_12, ((((((~(arr_1 [i_0])))) ? ((30511 ? (!65535) : (arr_1 [i_0]))) : ((-(((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0]))))))))));
        var_13 = (max(253, ((((min(26, (arr_0 [12] [11])))) ? (arr_1 [i_0]) : -1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = ((((!(arr_3 [11] [i_1]))) || (arr_1 [7])));
        arr_7 [i_1] = (arr_3 [i_1] [i_1]);
    }
    #pragma endscop
}
