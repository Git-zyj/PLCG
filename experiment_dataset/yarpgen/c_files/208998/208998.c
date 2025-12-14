/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -var_15;
        var_19 += ((-(min((809 >= 6585), (arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_20 = (((((max(var_15, (arr_1 [i_0] [i_1 + 1])))) ? var_8 : (arr_0 [i_0] [i_1]))));
            var_21 = (min(var_21, (!var_4)));
            var_22 = ((62980 ? (((((min((arr_3 [i_1] [i_1]), var_4))) ? (max((arr_3 [i_1] [i_1]), (arr_1 [i_0] [i_0]))) : ((var_2 ? (arr_3 [i_0] [i_1]) : var_11))))) : (((arr_3 [i_0] [i_0]) ^ (min((arr_4 [i_0]), var_6))))));
        }
        arr_5 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_23 = var_4;
    var_24 = (max(var_11, var_17));
    #pragma endscop
}
