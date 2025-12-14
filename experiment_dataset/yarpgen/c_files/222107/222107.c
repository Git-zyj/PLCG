/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!(arr_0 [i_0])));
        var_16 = 13;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((arr_5 [i_1]) + ((var_9 % (arr_5 [i_1]))));
        arr_8 [8] = 100;
    }
    var_17 = (((((var_7 ? (var_7 && 0) : 1))) ? 8 : (((((var_5 ? var_10 : -10734))) ? (~var_0) : (((-23559 + 2147483647) >> (4742638932891003140 - 4742638932891003135)))))));
    #pragma endscop
}
