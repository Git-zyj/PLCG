/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_15 = (((((((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_8))) ? ((var_4 ? (-9223372036854775807 - 1) : (arr_1 [i_0]))) : (-207686643 != 207686635)))) ? (~var_9) : (!9223372036854775807)));
        var_16 = ((((((-1787577495825395506 ? var_3 : (arr_1 [i_0]))))) ? (~var_12) : var_14));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_17 -= ((((((arr_5 [i_2 + 1]) ? (var_0 & 5398387382847879565) : ((((arr_3 [i_2 - 1] [i_4]) >> (var_4 - 70))))))) ? ((((min((arr_12 [14] [i_2] [4] [0]), var_9))) ? (((arr_7 [6] [i_3]) ? 42276 : var_9)) : (arr_12 [4] [i_4] [i_2 + 1] [4]))) : var_14));
                        var_18 *= ((~(min((((arr_9 [i_1] [i_2] [i_1] [i_4]) ? (arr_2 [i_1] [i_2]) : (arr_9 [i_1] [i_1] [i_1] [i_1]))), (arr_8 [i_1] [8] [i_1] [i_1])))));
                        var_19 |= ((((((!var_1) ? ((~(arr_2 [i_1] [21]))) : (((~(arr_12 [10] [i_2] [i_3] [i_4]))))))) ? (arr_6 [i_2 + 1]) : (((((var_13 ? var_14 : var_5))) ? (~var_13) : (arr_8 [i_1] [10] [i_3] [i_4])))));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 = (((~(((arr_3 [i_5] [i_2 - 1]) ? var_10 : (arr_5 [i_3]))))));
                            var_21 = (-9223372036854775807 - 1);
                            var_22 = 1;
                        }
                    }
                }
            }
        }
        var_23 = (!15298);
    }
    var_24 |= ((~(max((max(var_3, var_6)), 11))));
    var_25 = -var_12;
    var_26 = (max(var_26, var_6));
    var_27 = (((var_3 + 2147483647) << (var_5 - 1385078795)));
    #pragma endscop
}
