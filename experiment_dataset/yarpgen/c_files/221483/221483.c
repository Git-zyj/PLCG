/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((max(var_7, 3)))) < (min(var_1, var_11)))) ? (max((var_9 >= var_0), -var_11)) : 15352189028697293736));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [8] [i_0] [i_2] = (min((min((min(var_6, (arr_6 [i_0]))), (117 || 1))), var_7));
                    var_18 = (((min((max(var_11, (arr_5 [i_0] [i_0] [i_1 - 1] [i_0]))), ((max(var_4, var_15))))) + (((min((((arr_6 [i_0]) || (arr_2 [i_0] [3]))), (((arr_1 [i_1]) >= (arr_4 [i_0])))))))));
                    var_19 |= ((((((var_8 >> (((arr_6 [8]) - 10769))))) ? (arr_4 [17]) : (var_3 - var_16))) & (((((arr_5 [i_0] [i_0] [i_2] [10]) && ((min((-32767 - 1), var_9))))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((max(((((arr_2 [i_3] [i_1 + 2]) >= ((var_15 >> (((arr_0 [i_1] [i_2]) - 1773286070))))))), (arr_6 [i_3]))))));
                        var_21 ^= (+((((arr_5 [i_0] [i_1] [i_2] [i_3]) == (!var_13)))));
                    }
                    var_22 = (min((((arr_6 [i_0]) == (arr_6 [i_0]))), ((!(((~(arr_0 [i_1] [i_1]))))))));
                }
            }
        }
        arr_11 [i_0] [i_0] = (max((((((var_7 ? var_4 : (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? ((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (-127 - 1) : (arr_9 [i_0] [1] [i_0] [1])))) : (arr_0 [17] [i_0]))), (((var_16 - var_9) ^ ((4836504173357618415 ? 1546762662 : (arr_5 [1] [i_0] [i_0] [i_0])))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = (max(((((arr_10 [i_4] [i_4] [i_4] [i_4]) > (((arr_12 [i_4]) & 21))))), ((((((arr_3 [i_4] [17] [i_4]) ? var_13 : var_3))) ? (((((arr_2 [i_4] [i_4]) || 6987964031546592631)))) : (((arr_13 [i_4] [i_4]) ? var_1 : var_14))))));
        var_23 = (min(var_23, (((((~(arr_9 [1] [i_4] [5] [i_4])))) ? (arr_1 [i_4]) : ((2375653616 ? 3015650076 : 0))))));
        arr_16 [i_4] = ((1136784276 >> (((((arr_3 [i_4] [i_4] [i_4]) << (arr_9 [i_4] [i_4] [0] [i_4]))) - 17004))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 -= (-((((((arr_17 [i_5] [i_5]) ? (arr_8 [i_5] [0]) : (arr_6 [16])))) ? ((2046929381460617626 ? 2161 : 9038454965497932506)) : (max(var_14, var_2)))));
        arr_21 [i_5] [i_5] = ((var_9 || ((max((max(18446744073709551593, 1089363605313170057)), 0)))));
        arr_22 [i_5] = arr_4 [5];
    }
    var_25 = (min((((~var_7) ^ (var_14 ^ var_13))), ((min((var_8 & 255), var_10)))));
    #pragma endscop
}
