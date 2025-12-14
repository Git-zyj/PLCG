/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_13 ^= (((arr_1 [i_0]) - (arr_0 [i_0 - 1] [5])));
        var_14 = (((((max(var_5, (arr_1 [i_0]))))) ? (max(3860538877, 2443518505)) : ((((arr_1 [i_0]) * (((21 <= (arr_0 [14] [i_0 + 1])))))))));
        var_15 |= (((((-((min(var_6, var_0)))))) % (((~-101) + 3237406311))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_16 *= (((((max((arr_4 [i_1]), (arr_2 [i_1] [i_1]))) > (max((arr_0 [i_1] [i_1]), (-32767 - 1))))) && (32761 / var_7)));
        var_17 &= (!(((arr_3 [i_1 + 1] [12]) && (arr_3 [i_1 - 1] [0]))));
        var_18 = (-32767 - 1);
    }
    var_19 &= (((var_4 >= var_3) ? (((~4294967295) | var_5)) : (((((~var_4) > var_10))))));
    #pragma endscop
}
