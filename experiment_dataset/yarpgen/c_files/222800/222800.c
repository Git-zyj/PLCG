/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (arr_0 [14] [i_0]);
        var_19 = ((max((min(1, 1731114138)), 119)));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_20 = (min(var_20, (((var_0 % ((max((arr_0 [i_1 - 2] [i_1 - 1]), (arr_0 [i_1 + 1] [i_1 + 1])))))))));
        arr_4 [i_1] = (max((max(var_5, 23)), (((!((max((arr_3 [i_1]), var_1))))))));
        var_21 = (((((!(arr_3 [i_1 - 2])))) * (((arr_0 [i_1 - 2] [i_1 + 1]) ^ (arr_0 [i_1 - 2] [i_1 + 1])))));
        arr_5 [i_1 - 1] = ((max(var_17, var_15)));
    }
    var_22 &= ((((min((-32767 - 1), -32762))) ? (((var_10 - var_12) + (-32235 + var_1))) : ((max(((max(13505, var_2))), (-11 + -30382))))));
    #pragma endscop
}
