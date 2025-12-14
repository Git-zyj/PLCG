/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min((((var_12 ? (~var_6) : (~var_8)))), var_10));
    var_14 = (var_3 || var_0);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 |= (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = (max(1500044936, 1));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_16 = ((((((arr_6 [i_1]) != (arr_6 [11])))) | ((min((arr_6 [i_1]), (arr_6 [i_1]))))));
        arr_7 [i_1] |= (arr_1 [i_1]);
        var_17 = (min(var_17, (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_18 = ((-((1500044936 ? 0 : 1500044935))));
        var_19 = (max(var_10, (arr_5 [i_2])));
    }
    #pragma endscop
}
