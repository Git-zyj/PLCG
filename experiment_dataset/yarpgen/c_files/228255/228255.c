/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_4));

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((max(var_10, var_8))) && (!var_3))));
        var_15 = (min(var_15, ((((((+((32567 ? (arr_2 [i_0]) : (arr_2 [i_0])))))) / ((((max(var_9, 138))) ? (arr_0 [i_0 + 1]) : (((arr_1 [i_0]) / -515862945)))))))));
        var_16 += var_4;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (max(-2859337538093276126, (arr_2 [i_1])));
        arr_9 [i_1] [i_1] = (((max(var_7, (arr_2 [i_1 + 1])))));
        arr_10 [i_1] [4] = (max(var_3, (max((arr_7 [i_1 + 2] [i_1 + 1]), (arr_0 [i_1 + 2])))));
    }
    var_17 += var_7;
    #pragma endscop
}
