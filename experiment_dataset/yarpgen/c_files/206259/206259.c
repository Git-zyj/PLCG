/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_3;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_20 -= ((-((((max(var_4, 20857))) ? ((16982046986853693117 ? var_3 : (arr_1 [i_0] [i_0]))) : (var_17 || 1)))));
        var_21 = (max((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))), (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_22 = ((((((arr_5 [i_0 - 1] [i_1 - 1] [i_0 - 1]) ? (arr_2 [i_2]) : 2147483641))) ? ((((((2147483638 ? 870624294804780710 : (arr_2 [i_0])))) ? (max((arr_7 [i_0 - 3] [i_0] [i_1 + 1] [i_0 - 3]), 2147483641)) : var_16))) : (min((((27369 ? var_18 : -36))), 18446744073709551592))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) * (((min((min(var_6, var_16)), 1))))));
                                var_23 -= (max(((1 ? -587921843 : (min(1, -344012487432429579)))), (((!(arr_13 [i_0] [i_0] [i_1] [i_1] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_24 = ((~(~var_1)));
        var_25 = (min(var_25, var_10));
    }
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 24;i_8 += 1)
            {
                {
                    var_26 ^= (((max((!22030), (arr_21 [i_7]))) ? ((max((!1), 1))) : ((max(1, (arr_23 [i_6] [i_6 - 1] [i_7 + 1] [i_8]))))));
                    var_27 ^= (((!35) == 8974021400243885952));
                }
            }
        }
        var_28 -= max((((var_6 ? -63 : 8974021400243885949))), (((-((-17374 ? 43477 : var_2))))));
        var_29 = ((1 ? (max((min(9472722673465665664, var_0)), 3134457407737143679)) : ((min((!-344012487432429557), ((var_13 ? 17369 : (arr_23 [i_6 - 1] [i_6] [i_6 - 1] [i_6]))))))));
    }
    #pragma endscop
}
