/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = arr_0 [i_0];
        var_13 = (var_11 != var_3);
        var_14 = (max(((-3377713836621010379 ? -9391 : 54675)), ((var_0 ? (arr_1 [i_0] [i_0]) : 0))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])));
        var_15 = 7;
        arr_5 [i_1] [i_1] = 14775514252108933701;
    }
    var_16 = (max(var_16, 7001425577570999623));
    #pragma endscop
}
