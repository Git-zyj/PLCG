/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3402904769;
    var_16 -= ((-((((var_7 <= 72057594004373504) > ((max(var_1, -43))))))));
    var_17 = var_11;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(65535, (min(var_7, (max((arr_1 [i_0 - 1]), (arr_0 [i_0])))))));
        var_19 = (min((18446744073709551602 - 2975836991142020193), ((((arr_2 [i_0 - 3] [i_0 - 3]) * (arr_2 [i_0 + 1] [i_0 - 3]))))));
        var_20 ^= (max(-875624864, -10));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (((((-43 ? 212 : 43))) ? (max(43, (min(var_13, (arr_4 [i_1] [i_1]))))) : -1));
        arr_5 [i_1] = (max(((max(var_8, var_7))), ((4258078437 ? ((max((arr_2 [i_1] [17]), 1081432641))) : (min(-6801460565493629699, -3932))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((((0 ? (2147483647 / 54) : 3068724640)) / ((((min(var_1, 5))) ? -var_3 : -var_5))));
        arr_9 [i_2] = (min(((((arr_0 [i_2]) > var_6))), (min(-7987928847159790194, (((var_8 * (arr_2 [i_2] [i_2]))))))));
    }
    #pragma endscop
}
