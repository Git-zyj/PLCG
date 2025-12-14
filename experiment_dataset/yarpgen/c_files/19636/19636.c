/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_15 = arr_2 [i_0];
        var_16 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 = (~(min((arr_0 [i_1]), (arr_0 [i_1]))));
        arr_6 [i_1] = (min(((((((var_0 ? var_3 : (arr_0 [i_1])))) ? (arr_3 [i_1] [i_1]) : ((max(var_10, var_12)))))), (max((((var_4 && (arr_4 [i_1])))), (arr_0 [i_1])))));
        var_18 = ((65518 ? 21400 : 21400));
        arr_7 [i_1] = (arr_1 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_3] [i_4] = (arr_13 [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (arr_12 [i_4 - 3]);
                                var_20 += (((((arr_10 [i_4 - 3] [i_3 + 1]) ^ (arr_10 [i_4 + 1] [i_3 - 1]))) <= var_12));
                                var_21 = (max(var_21, (((((min((min(var_7, var_3)), var_12))) ? var_10 : (arr_12 [2]))))));
                            }
                        }
                    }
                    var_22 = (arr_17 [6] [6] [i_3] [i_4 - 2]);
                    var_23 ^= (min(var_1, (((((var_1 ? var_0 : var_4))) ? (min(2147482624, var_2)) : var_6))));
                }
            }
        }
        var_24 += (min(var_1, (min(((var_4 ? (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]) : var_10)), (arr_4 [i_2])))));
    }
    var_25 += (((((min(21400, -2721095919318202997)) + 9223372036854775807)) << (var_8 - 3228554089)));
    #pragma endscop
}
