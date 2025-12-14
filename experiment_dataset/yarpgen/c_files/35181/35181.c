/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] |= (max(var_3, (min(60979, (max(2147479552, 7))))));
        arr_5 [i_0] [i_0] |= 101863592605848697;
        var_20 = (min(var_20, ((max(var_1, (arr_0 [i_0]))))));
        var_21 = (~((((-8 ? var_13 : -1385033926)) * 2147487744)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_22 = (min(var_22, 39089));
        arr_10 [i_1] [18] = (max((((min(8388592, 65535)) >= (arr_9 [i_1] [i_1]))), (((~var_6) >= ((((arr_6 [i_1]) && (arr_8 [i_1]))))))));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_23 = (min(var_23, (4557 == 4556)));
        arr_15 [i_2] = var_9;
        var_24 = ((var_7 + ((var_2 ? ((((arr_13 [i_2]) ? 17589 : 60969))) : (arr_13 [i_2])))));
    }
    var_25 = (max(var_2, ((-(max(29123, 2147487751))))));
    #pragma endscop
}
