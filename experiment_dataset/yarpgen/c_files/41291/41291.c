/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -5007688291516283034;
    var_19 = (5007688291516283033 ? var_17 : ((((1 ? -5007688291516283034 : 1)) ^ (~168))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_20 *= 32757;
        var_21 = (max(var_21, -1));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((5007688291516283046 ? 11969 : 1));
        var_22 = ((-(min(((max((arr_2 [i_1] [i_1]), -18018))), (arr_4 [i_1] [i_1])))));
        var_23 = (min(var_23, 161));
        var_24 = (!((((!5007688291516283033) ? ((~(arr_4 [i_1] [i_1]))) : (arr_2 [i_1] [i_1])))));
    }
    #pragma endscop
}
