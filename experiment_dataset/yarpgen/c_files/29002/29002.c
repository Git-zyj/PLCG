/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((max(var_0, 1))), 124));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_4;
        var_16 = ((~(!var_1)));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = var_12;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = (((32763 ? ((-(arr_10 [17])) : 16911433728))));
            var_18 = ((((max((arr_6 [i_1 + 2]), (arr_6 [i_1 + 2])))) ? (20 || var_7) : var_12));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_19 = 3383276068341937327;
            var_20 = (arr_13 [i_1 + 1]);
        }
        var_21 -= (((((-16911433727 ? var_8 : (arr_2 [i_1 + 1])))) ? ((var_10 ? var_11 : var_10)) : (arr_1 [i_1 + 2])));
        var_22 = (max((min(31, var_11)), -var_4));
    }
    #pragma endscop
}
