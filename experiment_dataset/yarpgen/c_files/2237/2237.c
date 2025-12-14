/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((max(1276381829259953547, 75)) ^ (arr_3 [i_0] [i_0])));
        var_15 = ((1276381829259953570 ? 32759 : (3540377866 <= 1276381829259953547)));
        arr_5 [i_0] = (min(32757, (-32749 && -1276381829259953571)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_9 [i_1] = ((-(((arr_7 [i_1] [i_1]) / (arr_1 [i_1])))));
        arr_10 [i_1] = (min(((((var_11 || (arr_1 [i_1]))) ? (arr_8 [i_1]) : var_0)), ((((-127 - 1) / (arr_2 [i_1] [i_1]))))));
        var_16 = (max(var_16, var_8));
        arr_11 [i_1] = ((+(min((arr_7 [10] [i_1]), (arr_7 [i_1] [i_1])))));
        var_17 += (((((6 & 32757) ? (~255) : 1276381829259953571)) <= ((((-1891 + 2147483647) >> ((((50331648 ? -36 : (arr_2 [i_1] [i_1]))) + 45)))))));
    }
    var_18 = (max(var_18, (((~(((((0 ? 32759 : (-127 - 1)))) ? ((max(253, 4294967295))) : 49129)))))));
    #pragma endscop
}
