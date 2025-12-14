/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = 2200690621088153945;
        arr_3 [i_0] = (((arr_1 [23] [23]) << (((max(((((arr_2 [i_0]) ^ -895881900))), (arr_1 [i_0] [i_0]))) - 2625295396543120735))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 -= ((+((((arr_0 [i_1]) != (var_2 + var_15))))));
        var_19 = (max(var_19, (arr_2 [i_1])));
        var_20 = var_9;
        arr_6 [i_1] = (895881899 ? ((((max(1, -895881888))))) : (((arr_5 [i_1]) ^ (arr_0 [i_1]))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] = -895881894;
        var_21 = 895881868;
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = (13994 / -895881910);
        var_23 = (min((((var_15 * (arr_13 [1])))), (((895881900 >= (arr_1 [i_3] [i_3]))))));
    }
    #pragma endscop
}
