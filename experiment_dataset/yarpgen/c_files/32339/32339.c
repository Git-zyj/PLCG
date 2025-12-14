/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = (((max(-var_7, (!1)))) > (max(var_1, ((min(-14412, var_6))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = (22146 >> ((((var_8 ? var_14 : (((min(-2, (arr_3 [i_1]))))))) - 4802438012331552565)));
            arr_4 [2] [2] [i_0] = var_14;
            arr_5 [i_0] = ((((max((max(8871, var_12)), (var_11 | -5)))) ? (((var_5 ? ((max((arr_3 [1]), var_0))) : var_4))) : (max(25645, (~var_14)))));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_18 = -1869373786393883395;
            var_19 = (min(var_19, var_12));
            var_20 += 1;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                var_21 = (((((-32767 - 1) - var_7)) * (!var_9)));
                var_22 &= var_0;
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_23 -= 255;
                var_24 = var_15;
            }
            arr_18 [10] = var_0;
            var_25 = (min(var_25, (((var_12 | (((var_3 ? ((-(arr_16 [i_0] [10] [i_0] [i_3]))) : (arr_3 [i_0])))))))));
        }
        var_26 = var_9;
        arr_19 [i_0] = var_15;
        var_27 = -7900428077282891519;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_28 = max(var_4, (((1 < (arr_7 [i_6])))));
        arr_22 [i_6] = (min((max(var_6, (var_10 | var_2))), var_3));
    }
    var_29 ^= var_10;
    var_30 = (max(52524, var_10));
    #pragma endscop
}
