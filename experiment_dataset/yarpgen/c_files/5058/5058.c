/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((((max(var_9, var_2)) ^ (var_11 || var_1))) & var_8));
    var_16 -= ((((((max((-127 - 1), var_7)))) * (~1515257759))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (max((min(2779709537, -1)), (arr_0 [i_0] [i_0])));
        var_18 = min((((!((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))), (arr_0 [i_0] [i_0]));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_19 = (arr_1 [i_1 + 3]);
            arr_5 [i_0] [i_1] = (((-9 | var_2) + (((1 | (arr_3 [i_1 + 1]))))));
            arr_6 [5] [5] [i_1] = (max((max((arr_0 [i_1 + 1] [i_1 + 1]), var_13)), ((((arr_0 [i_1 - 2] [i_1 + 2]) <= (arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 1]))))));
            arr_7 [i_0] = (~-15476);
        }
        var_20 = ((+(((arr_0 [i_0] [i_0]) / (arr_4 [i_0] [6] [i_0])))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] |= (max(2779709537, 2147483636));
        var_21 = (arr_8 [i_2]);
        var_22 = min(var_2, ((min((arr_8 [i_2]), (arr_8 [i_2])))));
    }
    #pragma endscop
}
