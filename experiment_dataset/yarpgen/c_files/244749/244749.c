/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 ^= (max((max((arr_5 [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_1] [i_1 - 2]))), ((~(arr_6 [i_1] [i_1] [i_1] [i_1 - 2])))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (min(((((max(302774006, 8666227778015266970))) ? 3152740555 : 127)), 1615345698));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 65532;
                        var_21 = (min((max((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))), (min((arr_6 [i_0] [i_1] [i_2] [i_3]), 15338435027656582029)))), (((1834838149 ? ((max(3, 127))) : (((arr_5 [i_0] [i_0] [i_2]) ? var_0 : (arr_0 [i_0]))))))));
                    }

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_22 = ((var_0 ? var_19 : 299995739));
                        var_23 |= (arr_5 [i_0] [i_2] [i_2]);
                        var_24 = (min(((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_4]), (~124)))), (((arr_11 [i_1 - 2] [i_1 - 2]) ? (arr_11 [i_1 - 1] [i_1]) : var_17))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_25 = ((((max((arr_11 [i_1 + 2] [i_5]), (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 1])))) ? (((arr_11 [i_1 - 2] [i_1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 2]))) : ((2615339612682328288 ? 44 : 1))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_26 = (min(var_26, ((((arr_11 [i_1] [i_5]) ? 613832923 : (((arr_13 [i_0] [i_0] [i_2] [i_5] [i_1] [i_1 - 2]) ? (var_10 < -3660895731180901534) : (arr_6 [i_0] [i_1 + 2] [i_0] [i_5]))))))));
                            var_27 = (min(var_27, ((min((~var_5), (max((arr_5 [i_1] [i_1] [i_1 - 2]), (-5520491129911959667 / 134217727))))))));
                            arr_17 [i_0] [i_0] [i_6] = (min(((2512701960 ? 268435455 : 8)), ((~(arr_11 [i_0] [i_0])))));
                            var_28 *= ((var_17 <= (((arr_14 [i_1 - 2] [i_1 + 1] [i_1 + 2]) ? (min(8672005633879849508, 255)) : (arr_12 [i_1 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, (((((((var_14 % 29909) ? var_12 : -var_10))) ? ((var_4 ? ((min(630397494, var_11))) : var_9)) : var_19)))));
    #pragma endscop
}
