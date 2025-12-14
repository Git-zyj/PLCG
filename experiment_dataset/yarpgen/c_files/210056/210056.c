/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((~(min((arr_5 [i_2] [i_1] [i_0]), (arr_0 [i_0] [i_2])))));
                    var_13 = (((((~(arr_4 [i_1])))) ? (-2147483643 | 2763621356987826066) : (max((max(var_1, (arr_2 [i_1]))), (~30)))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_14 += ((((((!((max(-2147483643, var_4))))))) > (((arr_3 [i_0] [i_1] [i_3]) ? (arr_3 [i_0] [i_1] [i_3]) : (arr_4 [i_1])))));
                    arr_10 [i_0] [i_0] [i_1] [i_3] = ((!(arr_8 [i_0] [i_0])));
                    var_15 = var_9;
                    var_16 -= (2147483643 ^ 4107221413);
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_17 = (((min(2235403354, var_2)) + ((-(arr_2 [i_0])))));
                    var_18 -= (((!var_4) ? (((!((min(var_0, (arr_1 [i_0]))))))) : (((!(((var_4 ? -2147483643 : (arr_13 [i_4] [i_1] [i_1] [i_0])))))))));
                }

                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_5] |= ((((min(var_10, ((min(-2147483617, (arr_16 [i_0] [i_1] [i_5]))))))) ^ (max(((-2147483642 ? 2121319348409260682 : 2147483617)), ((min(var_1, var_2)))))));
                    arr_19 [i_0] [i_0] [i_0] [i_5] = (~1912634349);
                    arr_20 [i_5] [i_1] [i_0] = (((min(((min(var_8, var_7))), ((~(arr_11 [i_0] [i_0] [i_5] [i_0]))))) % ((((((min(var_5, var_6))) && var_9))))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    var_19 = (((arr_5 [i_0] [i_1] [i_0]) ? 18187878006726486735 : (arr_5 [i_1] [i_1] [i_0])));
                    arr_24 [i_6] [i_6] [i_6] = arr_0 [i_1] [i_6];
                    var_20 = (arr_21 [i_0] [i_6] [i_6] [i_6]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_21 = (~(!1912180121));
                                var_22 = (~var_5);
                                var_23 = ((-(arr_3 [i_0] [i_6] [i_6])));
                            }
                        }
                    }

                    for (int i_9 = 4; i_9 < 13;i_9 += 1)
                    {
                        var_24 = 9223372036854775807;
                        var_25 = ((~(arr_26 [i_9 - 1] [i_6] [i_6] [i_9])));
                        var_26 ^= (var_10 || 9223372036854775798);
                        var_27 = (arr_14 [i_6] [i_1] [i_6] [i_6]);
                    }
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_28 = var_10;
                        var_29 ^= ((-1 || (arr_3 [i_6] [i_1] [i_6])));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_30 = ((~(((var_2 + 9223372036854775807) << (var_0 - 32179)))));
                        var_31 = -1019803175;
                    }
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        var_32 = var_4;
                        var_33 = 5853038727191379484;
                        arr_41 [i_6] = (-var_11 / var_0);
                    }
                }
                var_34 ^= (((var_2 <= 11070621569145902470) ? (arr_25 [i_1]) : (max(var_9, var_0))));
            }
        }
    }
    var_35 = (min(var_35, (((var_10 ? (!6016514908947097099) : ((var_9 ? var_11 : var_0)))))));
    #pragma endscop
}
