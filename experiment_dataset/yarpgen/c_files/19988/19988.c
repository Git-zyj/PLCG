/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 -= (((((~((~(arr_2 [i_0])))))) ? 6 : ((max(24, (arr_1 [i_0 + 1]))))));
        var_12 ^= 1;
        arr_4 [i_0] [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_6 [1]);
        var_14 = (max(var_14, (arr_5 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = -8417813544167412034;
        arr_11 [0] [i_2] = -127;
        var_15 = (((((244 << ((-1889068521 ? var_6 : 3493))))) <= 2113929216));
    }
    var_16 = (max(var_16, var_1));
    var_17 = (min(var_17, (((((var_1 >= ((var_7 ? var_6 : var_7)))) ? (~var_3) : var_5)))));
    #pragma endscop
}
