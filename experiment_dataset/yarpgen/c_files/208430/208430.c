/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [1] |= (max((arr_0 [i_0]), (arr_0 [i_0])));
        var_12 = (max((((-1 ? 104 : (arr_1 [i_0])))), (((-((min((arr_0 [i_0]), (arr_1 [21])))))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_13 = (max(var_13, ((((((((-105 < (arr_3 [16])))) - ((var_8 / (arr_6 [i_1])))))) ? (((arr_5 [i_1 + 2]) ? (((arr_6 [i_1]) ? var_7 : var_4)) : 111)) : (((((-105 || (arr_5 [7]))))))))));

        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_2] [17] [i_1] = ((max(((((arr_7 [i_2]) < var_6))), 104)));
            arr_11 [i_1] [i_2] = (min(-104, ((((arr_3 [i_2 + 1]) >= (arr_3 [i_2 - 1]))))));
        }
        arr_12 [17] = 111;
    }
    var_14 = ((~-2211770021463329207) << (var_8 - 80));
    #pragma endscop
}
