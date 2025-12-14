/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = (min((((!(((-(arr_0 [i_0]))))))), ((10798706356447663754 / (arr_5 [i_1 + 1] [i_1 + 2] [i_1])))));
                            var_10 = ((((((var_6 ? (arr_7 [i_0] [i_1 + 2] [i_1] [i_3] [i_3]) : var_5)) + 14535729732822331334)) < (((3388523144 % 294879117) ? (((arr_8 [i_3]) ? var_3 : 7648037717261887859)) : (((var_2 ? var_1 : 109)))))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((((min(-1, -6411547109301384605))) ? 18446744073709551615 : (((((arr_3 [i_1] [i_1 - 1] [i_1]) && ((max((arr_2 [i_0]), 0)))))))));
                            var_11 = (max(var_11, (((((((arr_4 [i_1 + 2]) ? 0 : (arr_4 [i_1 - 1])))) ? (~1) : (arr_4 [i_1 + 1]))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_12 = (max(var_12, (arr_1 [i_1] [i_1])));
                    arr_15 [i_1] = var_7;
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_5] [i_6] = 4000088178;
                        var_13 ^= var_7;
                    }
                    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_14 = ((+(((arr_14 [i_7] [i_1] [i_7 - 1] [i_7 + 1]) / -120))));
                        var_15 = (max(var_15, (16068081687231015725 % -59)));
                        var_16 = (max(var_16, (((((!(-127 - 1))) ? (min((12427714478391640634 >= var_1), (max(0, (arr_18 [i_0] [i_0] [i_0] [i_0]))))) : (((7739 ? -44 : 0))))))));
                    }
                    for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_17 = (max((arr_25 [i_1 + 2] [i_1] [i_1] [i_8 + 1] [i_0] [i_8]), (max(var_2, (arr_6 [i_0] [i_1] [i_0] [i_8 - 2])))));
                        var_18 = (((0 - 880554064) ? (min((arr_23 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1]), ((var_2 ? -44 : var_2)))) : -var_0));
                        var_19 = (((((1535142470772182149 ? 0 : 0)) >= (((max(var_8, 0)))))));
                    }
                    var_20 = ((((min((arr_3 [i_1] [i_1] [i_1]), var_4))) ? ((((!(arr_3 [i_1] [i_1] [i_1]))))) : (((arr_3 [i_1] [i_0] [i_1]) ^ -6411547109301384610))));
                    var_21 ^= 85;
                    var_22 = ((!((((16068081687231015725 + 96) ? (var_0 & 6) : (~0))))));
                }
                var_23 = (max(var_23, 119));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_24 = (max(var_24, var_5));
                            var_25 = ((-(-43 | 43)));
                        }
                    }
                }
                arr_34 [i_0] [i_1] [i_1] = ((!((((((~(arr_29 [i_0] [i_1] [i_1])))) ? (min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_25 [i_0] [i_0] [i_1] [0] [i_0] [i_0]))) : (min(89346689, var_4)))))));
            }
        }
    }
    var_26 = (max(var_26, 5790));
    var_27 = (max(var_27, 64439));
    #pragma endscop
}
