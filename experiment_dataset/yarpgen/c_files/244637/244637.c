/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 ? var_12 : var_13));
    var_18 = (max(var_18, var_6));

    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 = ((((!((((arr_0 [i_0]) >> (var_11 - 85))))))) | (max(((0 ? 1 : 51416)), 65535)));
        var_20 = 18446744073709551615;
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_21 -= (arr_3 [i_1 - 2]);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_22 = (arr_6 [10]);
            var_23 = (max(var_6, (((((1 || (arr_3 [i_2]))) || (var_15 || 18446744073709551585))))));
        }
        var_24 = (arr_6 [i_1 - 4]);
        var_25 = (max(((((arr_4 [i_1 - 3]) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 - 2])))), (((arr_4 [i_1 - 2]) ? var_10 : (arr_4 [i_1 - 4])))));
        var_26 -= (((((var_4 ? (var_5 | var_7) : ((18446744073709551615 ? 0 : 30517))))) ? ((((min(18446744073709551612, 18446744073709551605))) ? (arr_1 [i_1]) : (((arr_1 [i_1]) ? -1626427244 : var_0)))) : var_5));
    }
    var_27 = var_10;
    #pragma endscop
}
