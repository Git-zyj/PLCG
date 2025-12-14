/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = arr_1 [i_0] [i_0];
        var_16 = max((((arr_2 [i_0]) ? (arr_2 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_4)))), var_8);

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_8 [16] [i_1] = (((((((!(arr_3 [i_0])))))) ? (((arr_1 [i_1 + 2] [i_1 + 2]) ? (arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]) : (arr_1 [i_1 + 2] [i_1 + 2]))) : (min(((((arr_1 [i_0] [i_1 + 1]) > var_4))), ((var_5 ? (arr_7 [3] [i_0] [i_0]) : (arr_0 [i_1 + 2])))))));
            arr_9 [i_0] [i_1 + 1] [i_1 + 1] = ((+((((max((arr_2 [8]), var_8))) ^ ((var_12 ? (arr_4 [i_0]) : (arr_4 [i_0])))))));
            var_17 = 1710;
        }
    }
    var_18 = (max(var_18, ((((((((var_2 ? 37 : var_8))) ? var_0 : (var_11 <= var_1))) % (max(((var_9 ? var_6 : var_0)), var_6)))))));
    var_19 = (((((max(var_5, var_6)))) ? var_6 : var_0));
    var_20 = ((-73 + 2147483647) >> (((max(((1115792786 ? 24 : -70)), 2080374784)) - 2080374777)));
    var_21 += var_12;
    #pragma endscop
}
