/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_10 ? ((~(~4294967286))) : (((~(~1618006001)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = (min(var_14, ((((((arr_0 [i_0]) == (arr_1 [i_0])))) << (-19113 - 4294948159)))));
        var_17 = ((((((var_7 ? (arr_2 [i_0 + 1]) : 4294967286)) < ((max((arr_1 [i_0]), 1120979952))))) ? (((min((max(35708, 29839)), (((!(arr_2 [i_0])))))))) : (min(35686, (arr_0 [i_0 + 1])))));
        var_18 = (min(var_18, ((((!988936896) < ((((arr_0 [i_0 + 2]) <= 29848))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = ((~(min((((arr_3 [i_1]) ? 75 : 1120979943)), 155))));
        var_19 = (((arr_3 [9]) >= ((((!(arr_4 [i_1] [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] = 0;
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((!var_11) ? (arr_15 [i_5] [i_3] [i_5]) : (!138)))));
                            var_21 = (arr_6 [i_2]);
                            var_22 = (max(((-(35702 - 35700))), (((!var_11) ? (var_7 == var_5) : (((arr_4 [i_3] [i_5]) ? (arr_12 [i_2] [0] [3] [i_5]) : (arr_9 [i_2] [i_3 + 2] [i_4 - 1])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_21 [i_2 - 3] [i_3 + 2] [i_7] [i_7 - 2] &= (~-928851200);
                            var_23 = ((((((var_10 <= (min(3837773168, 637718756)))))) + (((!176) ? (!29827) : (arr_6 [i_2])))));
                            var_24 = 17684524222308573006;
                            var_25 = -2133481377;
                        }
                    }
                }
            }
        }
    }
    var_26 = ((var_3 && (((((165 ? var_3 : var_13))) || (47937 & var_4)))));
    #pragma endscop
}
