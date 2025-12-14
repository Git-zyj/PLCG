/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0] [i_0 - 1] &= ((((141863388262170624 ? 18304880685447380971 : (((var_5 ? (arr_1 [i_0 + 1]) : 0))))) < ((((!18304880685447380971) >> (((arr_3 [i_0 + 3] [i_1 + 2] [i_1 + 4]) + 105)))))));
                arr_6 [i_1] [i_1 + 2] [i_0] &= -1;
                var_14 = var_10;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_15 = ((~((((((arr_1 [i_1]) ? -13 : (arr_8 [i_0] [i_1] [i_2])))) ? (((((arr_3 [i_0] [i_1] [i_2]) != -13)))) : (max((arr_9 [i_0] [5] [i_0 + 3] [i_0]), var_12))))));

                    for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, ((min(((~(arr_9 [i_1 + 1] [i_3 - 3] [i_3] [i_3]))), (arr_3 [i_1 + 1] [i_3 + 2] [i_3]))))));
                        var_17 = 29;
                        arr_12 [i_3] [i_1] [i_2] [i_3] [i_0] [i_1] = 1;
                        var_18 = (max(var_18, ((((arr_4 [i_3 + 3]) ? (((((arr_9 [i_0] [i_1] [i_2] [i_3]) / -2452506100892472313)))) : var_9)))));
                    }
                    for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_1 - 1] [i_2] &= ((((min((arr_14 [i_1 + 2] [i_1 + 3] [i_1 + 4] [i_2] [i_1 + 2]), (arr_14 [i_1 - 1] [i_1] [i_1 + 1] [i_2] [i_1 + 4])))) - ((var_4 ? (arr_14 [i_1] [2] [i_1 + 4] [i_2] [i_1 + 4]) : (arr_14 [i_1] [i_1] [i_1 + 1] [i_2] [i_1 + 1])))));
                        var_19 = (min(((((((-(arr_3 [i_0 + 2] [i_1] [i_0 + 2])))) ? (arr_2 [i_1]) : var_7))), ((max((arr_4 [i_0]), (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))));
                        var_20 = (max(var_20, (max((min((arr_8 [i_0 - 1] [i_0] [i_0 + 1]), (arr_7 [i_0 + 2] [i_0] [i_0]))), var_9))));
                    }
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_21 = (max(((var_3 ? var_10 : (((min((arr_10 [i_0] [i_0]), (arr_14 [i_0] [i_1] [i_5] [i_5] [i_1]))))))), ((((arr_7 [i_0 - 1] [i_1] [i_1 - 1]) ? -12 : (arr_10 [i_1] [i_5]))))));
                    var_22 = (arr_4 [i_5]);
                    var_23 = (min(var_23, ((((min(((~(arr_2 [i_1]))), -19434))) ? (((((arr_4 [i_5]) > (arr_0 [i_0 + 3]))) ? ((var_2 >> (((arr_2 [i_5]) + 8448)))) : (arr_13 [i_0] [i_1] [i_1 + 2] [i_1] [i_0]))) : (max(-492107633290971263, (arr_1 [i_0 + 1])))))));
                }
            }
        }
    }
    var_24 = (min((((7226965904341892338 ? (var_12 / 32166) : ((min(var_12, 29)))))), ((var_13 ? var_11 : ((max(var_10, var_4)))))));
    var_25 = var_11;
    var_26 = ((((max(var_3, var_11))) ? var_5 : -19494));
    #pragma endscop
}
