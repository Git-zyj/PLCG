/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -113;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [12] = (((arr_0 [i_0]) * (arr_0 [i_0])));
        var_11 -= (((arr_1 [i_0]) == 1));
        var_12 = (max(var_12, ((((arr_2 [i_0] [i_0]) ? (!var_0) : -var_0)))));
        var_13 -= ((var_8 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = ((~(max(23, 4294967293))));
        arr_7 [i_1] = (((((arr_2 [22] [i_1]) <= 53))));
        arr_8 [i_1] = (1 + 245);
        arr_9 [i_1] = ((min(((var_2 * (arr_4 [i_1] [i_1])), ((min(-3, -1076302338)))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = (!21);
        arr_13 [i_2] = (max((((((max(233, (arr_10 [i_2])))) * 113))), (((arr_0 [14]) ? (~var_5) : ((max(-1974616277513220439, 23640)))))));
        arr_14 [1] = (arr_1 [i_2]);
    }
    #pragma endscop
}
