/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_19 = (((((min((arr_0 [i_0] [1]), (arr_4 [i_0])))) > (((arr_7 [i_3] [i_3] [i_2]) + (arr_2 [i_0] [3] [1]))))) ? var_13 : 3231502558);
                        var_20 *= (~var_7);
                        var_21 &= ((~(min((47425 & 1063464724), 3681700222))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_22 = (((((((max((arr_5 [10]), (arr_0 [i_0] [i_4])))) ? -7950803959563422645 : (((((arr_4 [i_2]) && (arr_0 [i_0] [i_4])))))))) ? ((((arr_2 [i_1 + 2] [i_1 - 1] [i_1 + 2]) ? (arr_0 [i_0] [i_2]) : (arr_0 [i_1 + 1] [i_1 - 1])))) : (((arr_3 [i_1 + 1]) << (((arr_3 [i_1 + 3]) - 1304060967214913402))))));
                        var_23 -= var_0;
                        var_24 |= ((~(arr_4 [i_1 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_25 = (arr_11 [i_5]);
                        var_26 -= (((((var_9 ? (arr_9 [i_1 + 3] [i_1] [i_1 + 3] [i_1] [i_1]) : (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 2] [11] [i_1])))) ? ((((arr_13 [i_1 - 1] [i_1] [i_1 + 1] [10] [i_1] [i_1]) ? (arr_9 [i_1 - 1] [i_1] [i_1 + 3] [i_1] [i_1 + 3]) : (arr_13 [i_1 + 2] [i_1] [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_1])))) : ((3231502543 & (arr_13 [i_1 + 1] [6] [i_1 + 3] [i_1 + 1] [i_1 + 2] [i_1])))));
                        var_27 += ((((max((arr_12 [i_1 + 2] [i_1 - 1]), var_3))) ? ((((((-(arr_10 [i_0] [i_0] [i_0] [i_0] [1])))) > var_17))) : ((((~var_10) || (arr_6 [i_5]))))));
                    }
                    var_28 = (((arr_4 [i_1 + 3]) ? (max((arr_4 [i_1 + 3]), var_15)) : (~3519555793059381433)));
                }
            }
        }
    }
    var_29 = (((((-(23452 - 2692159056671530066)))) ? var_8 : ((59 ? var_2 : ((-59 ? var_12 : 10617245126465635210))))));
    var_30 -= (((((var_0 ? var_0 : var_1))) ^ (!613267073)));
    #pragma endscop
}
