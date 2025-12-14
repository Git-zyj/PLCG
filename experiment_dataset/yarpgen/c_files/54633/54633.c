/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 305899772;
    var_17 = (4171249475 ^ 0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((239 ? ((((min(var_3, 24839))) - 0)) : var_5));
        var_18 -= -5127921366846841665;
        arr_5 [i_0] = (((((-3498 ? var_5 : (arr_0 [i_0])))) ? (((!(arr_0 [i_0])))) : -3498));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (~-3498);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_13 [i_1] [i_1] [i_1] = 60970;
            var_19 = ((-(min((arr_7 [i_1]), (arr_7 [i_2])))));
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_16 [i_3] = ((!(((var_14 ? 1557872545 : 17386)))));
        var_20 = 0;
    }
    #pragma endscop
}
