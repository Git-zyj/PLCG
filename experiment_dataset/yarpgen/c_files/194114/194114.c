/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = ((var_8 ^ ((var_8 / ((15360 ? 11958979557022823519 : 11958979557022823519))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = (6487764516686728097 / 32);
        arr_2 [i_0] = (!-251926045);
        var_18 += ((27752 ? ((((~20164) ? (arr_0 [7]) : -27752))) : ((var_11 | (arr_0 [i_0 - 1])))));
        var_19 = ((((!(282803968 < 1))) ? (var_12 | 4102441066) : ((12865874600321628952 ? -225004585301568511 : (max(var_8, var_1))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 |= ((1 << (-27747 + 27753)));
                        var_21 = (~-1);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_22 = (((((4290772992 ? var_6 : var_4))) ? var_6 : (1 || 1)));

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0 - 1] [i_0] |= 6060642425433618930;
                            var_23 |= 27288;
                        }
                        var_24 += ((var_14 ? 6487764516686728085 : ((((-1439763316 || (arr_5 [i_2] [i_2] [i_4])))))));
                        var_25 = -5998231991494336375;
                        arr_17 [i_4] [i_0] [i_0] [i_0] = (((~-29703) ? (((arr_14 [i_0] [i_1] [20] [20] [i_4]) ? var_14 : (arr_10 [i_0] [1]))) : 1024));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_26 = ((-(~var_2)));
                        var_27 += ((1 == -1) || (!11958979557022823529));
                        var_28 = 6114402433614346393;
                        arr_20 [i_0] = var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((min((0 % 1), 4194303)), -19083));
                                var_29 -= ((!((((max(2047, -3555)))))));
                                var_30 = ((2147483647 ? (var_4 || -2309334836286292291) : (max(((max(-19083, -18909))), (arr_23 [i_0] [i_0] [i_2] [i_7])))));
                                var_31 |= (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_32 = var_3;
                            }
                        }
                    }
                    arr_29 [i_0] [i_0] [i_1] [i_2] = (max((min(var_0, (min(444617645, -2147483640)))), ((min((~2147483647), ((min(var_11, var_0))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_33 = ((-19083 ? 3465218154 : -1));
        var_34 = 2033;
        arr_32 [2] |= ((-((9104457470581310586 ? -7912133223710036351 : var_9))));
    }
    #pragma endscop
}
