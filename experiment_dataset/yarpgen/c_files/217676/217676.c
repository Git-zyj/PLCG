/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_5, ((((~37569) <= (min(var_5, var_8)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = min(((min(0, 21322))), (max(20, (max(83, (arr_3 [18]))))));
        var_17 -= (max(1, (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_3 [i_1]);
        var_19 *= ((~(min(((min(32767, 27979))), ((-19 ? 13146893124657082123 : 4963286411463092389))))));
        var_20 = (arr_2 [1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_21 = ((((max((arr_8 [i_2]), ((min((arr_9 [i_2]), (arr_0 [1]))))))) ? (min((max((arr_1 [i_2] [i_2]), (arr_8 [i_2]))), ((min(3644221470, (arr_0 [i_2])))))) : (((arr_3 [i_2]) >> (!16)))));
        arr_10 [i_2] [i_2] = ((!(((-(arr_5 [8]))))));
    }
    #pragma endscop
}
