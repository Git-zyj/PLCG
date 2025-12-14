/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-(min(var_15, var_3))))) ? (min((~var_4), ((1 ? var_7 : 1)))) : ((((((10519 ? 4294967295 : 4294967295)) <= (var_15 < var_5)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = arr_1 [i_0];
        var_19 = (((((((min((arr_0 [i_0] [i_0]), 1))) == (((arr_1 [i_0]) ^ (arr_0 [i_0] [i_0])))))) + ((((((arr_1 [i_0]) && (arr_1 [i_0])))) ^ (((arr_1 [i_0]) / (arr_0 [i_0] [i_0])))))));
        var_20 = (-((((((arr_0 [i_0] [i_0]) / 1))) ? ((((arr_0 [i_0] [i_0]) <= (arr_1 [i_0])))) : (!4294967295))));
    }
    var_21 ^= (((((((var_7 ? var_12 : var_1))) ? (min(var_14, var_5)) : ((max(var_11, 1))))) <= 2732356076));
    var_22 = (((((!(((var_9 ? var_6 : var_1)))))) + ((((var_3 + var_7) < (((var_2 ? var_10 : 1))))))));
    #pragma endscop
}
