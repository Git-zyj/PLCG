/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) ? (((var_15 ? (-2147483647 - 1) : (arr_0 [i_0] [i_0])))) : (((((((-2147483647 - 1) ? (arr_0 [14] [i_0]) : (-2147483647 - 1)))) ? ((126 & (arr_1 [8]))) : (arr_1 [1]))))));
        arr_4 [i_0] = (((2147483647 - 1) >> ((((0 ? -5055 : var_7)) - 15063))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_9 [5] [3] = (((((!((0 <= (-2147483647 - 1)))))) >= -32));
        arr_10 [i_1] = ((((-2147483647 + 2147483647) >> (-11 + 21))));
    }
    var_19 = var_12;
    var_20 ^= var_10;
    var_21 &= (!110702775);
    #pragma endscop
}
