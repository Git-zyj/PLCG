/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_3 [5] [5] = (((((var_4 ? var_9 : (arr_0 [i_0 - 2] [i_0 - 2])))) && ((max((arr_0 [i_0 - 2] [i_0 + 2]), var_8)))));
        var_10 = (min(var_10, (((((103 ? ((23457 ? 152 : 15)) : (arr_2 [i_0]))) == (((arr_2 [i_0 - 2]) ? 153 : (arr_2 [i_0 - 2]))))))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_11 += (min(-140600049401856, (min(((32 ? var_9 : 3)), ((((arr_1 [i_1 - 2]) ? (arr_2 [17]) : 1)))))));
        var_12 += (max(((-(arr_1 [i_1 + 1]))), (min((arr_1 [i_1 + 3]), (arr_1 [i_1 - 1])))));
    }
    var_13 = (max(var_13, ((max(((((56 || var_7) << var_4))), ((-((var_3 ? var_6 : var_6)))))))));
    #pragma endscop
}
