/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((var_8 ? (((var_0 || var_3) - (max(4294967286, var_9)))) : (((min((arr_3 [i_0] [i_1]), 0))))));
                var_10 |= ((((min(25228, -25233)))) ? (arr_0 [i_0 + 1] [i_1]) : (((-21 ^ (var_8 | 25211)))));
                var_11 = (min(var_11, 8685994594915401735));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_12 = var_8;
                    arr_11 [8] = arr_4 [i_0 - 2] [i_0] [i_0 - 2];
                    var_13 = var_0;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [6] [i_1] [i_2] [i_3] = -9;
                        arr_15 [i_0] [i_3] [i_3] = (((((9223372036854775807 ? -260201015 : var_2))) ? (arr_12 [i_0] [i_1] [i_2] [i_3]) : (var_5 >= 4294967295)));

                        for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_2] = ((arr_13 [i_0 - 2] [0] [i_2] [i_3] [14]) == var_3);
                            var_14 = (((arr_2 [i_0 + 1] [i_4 + 2]) ? (arr_2 [i_0 - 1] [i_4 + 2]) : (arr_2 [i_0 - 1] [i_4 + 2])));
                            arr_21 [i_0] [i_0] = (5758746965817051200 == 9223372036854775797);
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_15 = (var_6 << (((arr_12 [i_5 + 3] [i_5 + 2] [i_5 + 2] [i_5 + 1]) - 15196115376340106125)));
                            var_16 = var_9;
                            var_17 = var_3;
                            arr_24 [i_0] [18] [i_2] [i_3] [i_5] = ((744550537098680494 ? 3249392775 : -5));
                        }
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_18 = (arr_16 [i_6 - 1]);
                            arr_27 [i_0] [i_1] [i_1] [i_3] [i_6] = (arr_26 [i_0] [i_6 - 1]);
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_19 = var_3;
                    var_20 = (((arr_9 [i_0] [0] [0]) * ((var_7 ? 4078312502869160773 : (((1 ? var_0 : var_0)))))));
                    arr_30 [i_0] [i_0] [i_7] = (arr_0 [i_0] [i_0]);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_21 = (((arr_19 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) + (((min(-9223372036854775806, 4294967287)) - (min((arr_29 [i_0]), -9223372036854775801))))));
                    var_22 = min(var_4, (((var_2 ? (arr_26 [i_8] [i_1]) : (var_3 < -9223372036854775797)))));
                }
            }
        }
    }
    var_23 &= var_9;
    var_24 = var_6;
    var_25 = var_0;
    #pragma endscop
}
