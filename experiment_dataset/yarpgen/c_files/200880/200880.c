/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((30720 << (-1553190593 + 1553190606)))) ? var_5 : (((6962089394826518517 << (-21273 + 21333))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, (((~(((arr_0 [i_0]) ? 219 : (arr_0 [i_0]))))))));
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_12 = (min(var_12, 96));
        arr_4 [4] [4] = (((arr_1 [i_0]) ? ((32768 / (arr_0 [i_0]))) : (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] [12] |= ((~((((min((arr_0 [i_1]), 4095))) ? (arr_0 [i_1 - 2]) : (((max(-99, (arr_6 [6])))))))));
        arr_8 [4] |= (min(16828, (max((arr_1 [i_1 + 1]), (max(-3890220959072848590, (arr_6 [0])))))));
        var_13 = ((~(((arr_1 [i_1 + 2]) ? 16128 : (arr_1 [i_1 - 2])))));
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_13 [8] = (min(((+(((arr_9 [i_2] [i_2]) ? 110676713 : (arr_0 [i_2]))))), ((max(3863, (min((arr_5 [i_2 - 2]), 1208650039)))))));
        var_14 |= (min((max(((255 ? (arr_6 [i_2]) : (arr_1 [i_2]))), 1)), (((!(((1 ? 14 : (arr_11 [i_2])))))))));
        var_15 = (min(var_15, ((min((max((arr_0 [i_2 + 1]), ((max(32767, (arr_12 [i_2])))))), ((22 ? ((((arr_11 [i_2]) ? (arr_6 [i_2]) : 511))) : (-9223372036854775807 - 1))))))));
    }
    #pragma endscop
}
