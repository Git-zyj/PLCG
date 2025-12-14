/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = (~8191);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [6] [i_0] = ((+(((var_2 + 2147483647) << (var_14 - 514296375)))));

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_21 = (-9223372036854775807 - 1);
            arr_8 [i_1] [5] = (((arr_6 [i_0] [i_1 - 3] [i_0]) ? (((-9223372036854775807 - 1) ? -8103 : 7)) : (arr_6 [1] [i_1 - 2] [i_1])));
        }
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_0] = ((((max((((arr_6 [i_0] [i_0] [i_0]) ? var_13 : (arr_2 [14]))), (arr_7 [i_0] [1])))) ? (arr_1 [i_0]) : (((!(arr_1 [i_0]))))));
            var_22 += 127;
            var_23 = ((-(arr_2 [i_2 - 2])));
            var_24 = ((~((var_9 * (219 / -1164433770)))));
            var_25 = (((((var_11 & var_9) ? var_12 : (arr_1 [i_2 + 1])))) ? (((var_0 ? (arr_9 [i_0] [i_0] [i_0]) : ((-(arr_9 [i_0] [i_2] [i_2])))))) : (((max(0, var_16)) % var_7)));
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_26 = (max((((~(arr_12 [i_3])))), (arr_12 [i_3])));
        var_27 = (max(var_5, ((((max(var_2, (arr_13 [i_3]))) < (arr_13 [i_3]))))));
    }
    #pragma endscop
}
