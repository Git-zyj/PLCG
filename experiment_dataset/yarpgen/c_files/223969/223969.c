/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((-(arr_1 [i_0]))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_10 *= ((((-122 ? (arr_2 [i_3] [i_1]) : (arr_8 [i_0] [i_1] [7] [i_3])))) ? -var_2 : (min(16202484696099300620, 0)));
                        var_11 = ((~(((arr_8 [4] [i_1] [i_2] [i_3]) >> (arr_8 [i_0] [i_0] [i_2] [i_3])))));
                        var_12 = (min(var_12, (((var_7 % ((-(arr_6 [i_3] [i_2] [i_1] [8]))))))));
                        var_13 = (min(var_13, (((((~(((arr_6 [1] [i_1] [i_1] [0]) ? (arr_3 [i_1]) : (arr_7 [i_1]))))) > (((((((arr_0 [i_0] [i_1]) >> (255 - 240)))) ? 8578 : ((var_3 ? (arr_9 [i_0] [i_1] [i_2] [i_2] [4]) : 1))))))))));
                        var_14 = (min(var_14, ((((-1650878679 ? ((min(var_9, 187)) : var_6)))))));
                    }
                    var_15 = (((var_7 / -718476760) ? (arr_1 [i_1]) : ((min((arr_8 [i_2] [i_2] [i_2] [9]), (arr_8 [i_0] [i_1] [i_1] [i_2]))))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_13 [i_4] [i_0] [i_0] = ((~(4847251865389249451 ^ 218)));
                    arr_14 [i_0] [i_1] [i_0] [i_4] = ((!((min((arr_8 [0] [1] [i_0] [i_0]), 1299911138)))));
                    arr_15 [i_0] [i_1] [i_0] = ((~((((arr_0 [i_1] [i_4]) > (718476759 - 1))))));
                }
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    var_16 = (max(var_16, var_7));

                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        var_17 = ((((arr_9 [i_0] [i_5 - 2] [i_5] [i_0] [i_6]) != (arr_9 [i_1] [i_5 + 1] [i_1] [i_0] [i_6]))) || (arr_3 [i_0]));

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_18 = (min(var_18, (((+((var_5 ? (arr_9 [i_6 + 2] [i_1] [i_6 + 2] [i_1] [i_5 - 2]) : (arr_0 [i_6] [i_6 + 2]))))))));
                            var_19 = (((arr_21 [0] [i_5] [i_6]) % ((var_3 ? (arr_18 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_6 - 1] [i_6 - 1]) : (arr_18 [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_6 + 2] [i_7])))));
                            var_20 = (min(var_20, var_6));
                        }
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_21 = (max(var_21, (max(((var_1 % (arr_3 [i_0]))), (((var_7 & (!var_9))))))));
                            var_22 = (arr_10 [i_5] [i_6]);
                            var_23 = (min(var_23, (((-718476760 ? ((-(arr_21 [i_5 - 3] [i_6 + 2] [i_8]))) : ((var_3 ? (arr_8 [i_6] [i_8 + 1] [i_8] [i_8]) : ((1944893337 ? (arr_10 [i_0] [i_8]) : var_4)))))))));
                            var_24 = (arr_10 [i_5] [i_5]);
                        }
                        var_25 = (min(var_25, -32767));
                    }
                }
            }
        }
    }
    var_26 = (max(var_0, (((1299911138 ? 1 : var_6)))));
    var_27 = var_0;
    var_28 = (min(var_28, (var_4 && var_3)));
    #pragma endscop
}
