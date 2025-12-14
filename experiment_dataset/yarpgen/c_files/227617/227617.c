/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_2);
    var_11 = (min((((var_6 ? var_5 : var_7))), var_0));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (max(var_1, -9623));
        arr_4 [i_0] = (!4143);
        arr_5 [i_0] [i_0] = (arr_1 [i_0]);
        arr_6 [i_0] [i_0 + 1] = ((var_7 ? (~var_7) : ((min(var_3, (arr_0 [7] [i_0]))))));
        arr_7 [i_0] [i_0] = ((~(((!(arr_3 [i_0 + 1]))))));
    }
    #pragma endscop
}
