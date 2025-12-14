/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_8, ((var_4 ? var_8 : var_3))));
    var_12 = var_9;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, var_2));

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_14 = ((((((arr_0 [i_1 + 1] [i_0 - 2]) ? 126 : -24269))) ? ((max((arr_0 [i_1 + 1] [i_0 + 1]), 24276))) : ((((arr_0 [i_1 - 1] [i_0 - 1]) && (arr_0 [i_1 - 1] [i_0 - 2]))))));
            var_15 -= ((((arr_4 [i_0 + 1]) << ((((-77 ? (arr_1 [i_0]) : 135)) - 3583239796877122458)))));
            var_16 = (max(var_16, ((min((max(var_6, (((arr_3 [i_0 + 1] [i_0 + 1]) ? 1 : -25205)))), (((((arr_4 [i_0]) * var_2)) << ((((var_10 ? var_3 : -2034822036640347158)) + 19422)))))))));
            var_17 = (max(var_17, ((min(-24277, ((((arr_0 [i_1 + 2] [i_1 - 2]) <= (-2147483647 - 1)))))))));
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] [6] = 64;
                var_18 = -24269;
            }
        }
    }
    #pragma endscop
}
