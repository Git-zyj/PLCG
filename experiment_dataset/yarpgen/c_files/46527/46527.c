/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_11;
    var_20 = (min(var_20, (!0)));
    var_21 = (((((((max(1, -17))) ? (var_8 > var_6) : (((18446744073709551615 <= (-9223372036854775807 - 1))))))) ? var_7 : (max(var_16, ((var_7 ? var_10 : -13))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_22 += ((((((!(((var_12 << (1075694172 - 1075694164)))))))) / 16735474305781852863));
                var_23 = ((-(-3047587375361501087 == -18446744073709551615)));
                var_24 = ((((arr_4 [i_0]) ? var_1 : (arr_0 [i_0 + 1] [i_1 - 1]))));
                arr_5 [i_0] [i_0] = (arr_2 [i_0]);
                arr_6 [i_0] [i_1] [i_0] = ((((((var_9 << (13279 - 13266))))) ? (((arr_1 [i_0]) & (arr_3 [i_0 + 1] [i_1 + 1]))) : (((((arr_0 [i_0 + 1] [i_0 + 1]) <= (arr_2 [i_0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((((arr_15 [i_2] [i_3] [i_4] [i_5] [i_6]) % (min((arr_18 [i_6] [i_5] [i_4] [i_3] [i_2]), (((arr_12 [i_2] [i_4] [i_6]) ? (arr_18 [i_3] [i_3] [i_5] [i_5] [i_6]) : (arr_11 [i_2] [i_5]))))))))));
                                var_26 = ((min((arr_18 [i_6] [i_6] [i_6] [i_6] [i_6 + 1]), 1)));
                            }
                        }
                    }
                    var_27 = ((((arr_14 [i_2 + 1] [i_3] [i_3] [i_2]) / 14744196194436327986)));
                    arr_22 [i_3] [i_3] = (((max(((-2147483642 ? (arr_19 [i_3]) : 1711269767927698752)), (3322870262 + var_15))) + var_0));
                    var_28 = 18446744073709551605;
                    var_29 = (arr_18 [i_4] [i_3] [i_3] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
