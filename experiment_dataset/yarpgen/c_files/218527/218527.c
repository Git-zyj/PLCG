/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_6, var_8)))) ? 9223372036854775807 : (((max(1, var_4)) + var_6))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = max(1, 3976683127184135924);
            arr_5 [i_0] = max((max((~1), (arr_0 [i_0] [i_0]))), (max((var_3 / var_7), 3373102277)));
            arr_6 [i_0] [i_0] = ((-(arr_2 [i_1] [i_0])));
        }
        var_12 = ((!((min(((1 ? (arr_0 [i_0] [i_0]) : var_10)), ((((arr_3 [i_0] [i_0] [i_0]) ? (arr_2 [5] [i_0]) : -37))))))));
        var_13 = (min(var_13, (((var_4 ? (min(var_6, 1677664355467379159)) : var_5)))));
        var_14 = (min(var_14, (arr_2 [1] [i_0])));
    }
    var_15 = -1;

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 = ((-((((-111 || var_9) && ((min(var_9, (arr_3 [i_2] [i_2] [i_2])))))))));
        var_17 = ((149064659 ? 1 : 1));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((((!(arr_10 [i_3]))) ? (arr_11 [i_3]) : 37));
        arr_13 [i_3] = (((((((((arr_11 [i_3]) - 8984617802245963360)) == var_4)))) >= (--15933908928909037646)));
    }
    #pragma endscop
}
