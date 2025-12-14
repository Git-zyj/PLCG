/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_19, -var_17);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_21 = (min(var_21, (((((~(arr_0 [0]))))))));
        var_22 = (min(((min(255, 1))), (min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_23 += (min(0, 15829766489659079335));
        arr_4 [i_1] = ((((max((arr_1 [i_1]), (arr_2 [i_1])))) ? (((arr_1 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : (arr_0 [1])));
        var_24 = (min(var_24, ((max(((min((arr_2 [i_1]), (arr_2 [i_1])))), (min((arr_3 [i_1]), (arr_3 [i_1]))))))));
        var_25 = (min((max((arr_0 [1]), (arr_0 [2]))), ((max(8727373545472, -2186773809397969033)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 = (((arr_7 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_2])));
        arr_9 [i_2] = arr_1 [i_2];
    }
    var_27 |= var_10;
    var_28 = var_1;
    #pragma endscop
}
