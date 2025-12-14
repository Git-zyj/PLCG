/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((-(((var_10 + 1) ? var_16 : (min(4294967295, var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((((arr_2 [8] [7] [7]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_1 [i_1]))) << (arr_0 [i_1])))));
                arr_4 [i_0] = ((((~(((arr_3 [i_0]) ^ 1))))) ? ((min((0 * var_13), ((((arr_1 [i_0]) <= (arr_2 [i_0] [i_1] [i_0]))))))) : (var_9 * 32367));

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_1] [i_0] = max((min(0, (arr_0 [i_1]))), (((11079678897817484667 ? 1 : 1))));
                    arr_8 [i_0] [i_1] [i_2] = ((((15771104751243233590 % (arr_5 [i_0] [i_0] [i_0] [i_2]))) > (arr_5 [i_0] [i_0] [i_2] [i_0])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_22 = (max(var_22, 30019));
                        arr_13 [i_3] [9] [9] [i_3] = ((arr_6 [7] [i_2] [i_3]) < ((~(arr_2 [1] [i_1] [4]))));
                        arr_14 [i_0] [i_3] [i_0] [i_0] = (((arr_1 [i_2]) | -8883));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_23 = (max(var_23, (((1 || (arr_1 [i_1]))))));

                        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_5 - 1] [i_1] [i_4] [1] = (arr_5 [i_5 - 2] [i_1] [i_2] [i_0]);
                            var_24 = (25417 ? (arr_2 [i_0] [i_1] [i_1]) : (arr_9 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4] [4]));
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [6] = (((((var_9 ? 4294967295 : 12018973133749448090))) ? (arr_25 [i_6 + 1] [i_6] [i_6] [i_6 - 2] [3] [i_6] [i_6]) : (((arr_9 [i_6] [0] [i_2] [i_1] [i_0]) ? 8020383803910273322 : (arr_23 [i_0] [i_0] [1] [6] [1] [5])))));
                            arr_27 [i_0] [i_0] [i_1] [i_1] [i_4] [i_6] [i_6] = (((arr_0 [i_2]) % (((arr_17 [i_0] [i_1] [i_2] [7] [i_6 + 2]) | (arr_12 [i_2] [i_1] [i_2] [i_2] [i_2] [i_4])))));
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_1] [i_7] [1] = ((16 ? (((((((arr_12 [i_0] [6] [6] [i_0] [i_1] [i_7]) < var_1)) || (arr_29 [0] [0] [i_7]))))) : ((578265759704000050 ? ((((arr_12 [i_7] [i_0] [i_0] [i_1] [i_0] [i_0]) ? 8883 : 222))) : 245748065))));
                    var_25 ^= var_10;
                    var_26 = ((((((8020383803910273347 ^ 10426360269799278268) ? -4989014523656218655 : (arr_6 [i_7] [i_1] [i_0])))) ? (max((~var_17), (arr_12 [i_0] [i_0] [i_7] [i_0] [i_7] [1]))) : ((((var_2 < 3785105412) ? (arr_6 [i_7] [i_1] [i_0]) : (max(8908, 1)))))));
                    var_27 = (max(var_27, (((-(((arr_28 [5] [5] [i_1] [i_1]) ? 0 : (arr_28 [i_0] [i_1] [i_1] [i_7]))))))));
                }
            }
        }
    }
    var_28 = var_5;
    var_29 = (((((-(min(1, 12227887909836468374))))) || (((~((4294967295 ? 0 : 4839)))))));
    #pragma endscop
}
