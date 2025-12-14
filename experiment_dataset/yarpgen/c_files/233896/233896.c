/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-(min(4737095565779043653, -31067)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 5150343784936632164;
        var_12 = (min(var_12, (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = (((arr_1 [i_0]) < (((((var_0 / (arr_0 [i_0] [i_0])))) - var_8))));
        arr_5 [i_0] [i_0] = (((((var_8 - ((-(arr_2 [i_0] [i_0])))))) ? 9155104827878395781 : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = (63017 / 128140541);
        var_14 = (max(var_14, (arr_6 [i_1])));
        arr_9 [i_1] = arr_6 [i_1];
        var_15 = ((((((-72 ? (arr_2 [i_1] [i_1]) : (arr_7 [i_1]))))) ? (arr_8 [i_1] [i_1]) : (arr_2 [i_1] [i_1])));
        arr_10 [i_1] = 8227024436675767005;
    }
    #pragma endscop
}
