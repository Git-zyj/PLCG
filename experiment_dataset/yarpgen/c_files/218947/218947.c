/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((var_7 ^ (max(12635, -1860995824))))));
    var_11 = (~var_5);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0] = (((((arr_1 [i_0 - 2]) != (arr_1 [i_0 - 2])))) ^ ((-(arr_3 [i_0 - 2]))));
        arr_5 [i_0 - 2] = var_2;
        arr_6 [i_0] = (min(((-(arr_0 [i_0 - 2]))), (((!(((32 ? (-9223372036854775807 - 1) : 175))))))));
        var_12 = (((((arr_3 [i_0 + 1]) ? var_2 : 4707)) | (arr_3 [i_0 + 1])));
    }
    #pragma endscop
}
