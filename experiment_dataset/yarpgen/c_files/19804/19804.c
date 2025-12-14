/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 *= arr_0 [i_0];
        var_17 -= 107;
        arr_3 [i_0] |= min(((min((arr_0 [i_0]), (max((arr_1 [i_0] [i_0]), (arr_2 [i_0])))))), ((113 % (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 |= (1110537091 + -119);
        var_19 *= ((((((arr_2 [i_1]) == (min((arr_6 [i_1]), (arr_4 [i_1] [i_1])))))) % (arr_4 [2] [i_1])));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 = (min((arr_7 [i_2]), (((arr_8 [i_2] [16]) ^ (arr_8 [i_2] [22])))));
        arr_9 [0] &= (((arr_7 [i_2]) >> (-1142 + 1152)));
        var_21 = (max(var_21, ((max((arr_7 [i_2]), (arr_7 [i_2]))))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_22 = (min((arr_7 [i_2]), (arr_10 [i_3])));
            var_23 += (arr_11 [i_2] [i_3] [i_3]);
            var_24 = (arr_10 [i_2]);
            var_25 = 12087466771442543190;
        }
    }
    var_26 = (var_10 || 1691769519);
    #pragma endscop
}
