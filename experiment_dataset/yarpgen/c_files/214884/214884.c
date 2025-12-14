/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = ((((max(var_13, 57664))) ? var_9 : 15981404455268157934));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        arr_4 [i_0] = ((3414998208 ? 2293895005016142549 : 58));
        arr_5 [i_0] = ((((var_10 == (arr_2 [i_0]))) ? (!var_13) : ((-(arr_2 [i_0])))));
        arr_6 [i_0] = (~8224205084521028200);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_18 = (arr_14 [i_3 + 1] [1]);

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_17 [i_1] = 8224205084521028200;

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_19 = 8224205084521028200;
                            arr_20 [4] = ((((max(var_9, (min(0, 15981404455268157949))))) && var_0));
                            arr_21 [i_1] [i_2] [i_1] [i_4] [i_1] [i_5] &= ((~(arr_15 [i_3 - 2] [i_3] [i_3 - 1] [i_3 - 1] [i_4])));
                            arr_22 [21] [i_2] [i_3] [15] [21] [i_5] [i_5] = (((~-1) ^ ((~(arr_16 [i_1] [i_2] [i_3 - 2] [i_2])))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_20 = var_10;
                            arr_25 [i_1] [i_2] [17] [i_4] [i_4] = (((((4387985502548214057 ? (((arr_7 [i_1] [i_1]) ? var_3 : var_3)) : (arr_11 [i_3] [i_3 + 1])))) ? ((((((2465339618441393699 ? 38302519 : var_14))) ? (arr_14 [i_1] [i_2]) : (arr_10 [i_6] [i_4])))) : 8966847500829500085));
                            arr_26 [i_1] [i_2] [i_3] = (min((max(var_10, (min((arr_9 [i_1] [i_1] [i_1]), -6661252746681896938)))), -32749));
                            arr_27 [14] [i_2] = ((((min(((-6661252746681896937 ? 0 : 8224205084521028200)), (arr_12 [i_1] [i_6] [i_3 - 1])))) ? (max(((9084371506250065816 / (arr_11 [i_3 + 2] [i_4]))), (arr_15 [i_1] [i_3] [15] [i_4] [i_1]))) : var_13));
                            var_21 = (min(var_21, (((-(((arr_8 [i_3 + 2]) ? -861729595 : var_8)))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_34 [i_1] [i_9] [i_9] &= ((~(max(-9223372036854775790, 814703719))));
                        arr_35 [i_1] [i_7] [i_8] [20] = -109;
                    }
                }
            }
        }
        var_22 = ((((((arr_10 [i_1] [i_1]) ? var_14 : (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((min((arr_19 [i_1] [i_1]), (arr_10 [i_1] [i_1]))))) : -var_12));
        arr_36 [13] = 9362372567459485799;
    }
    var_23 = var_15;
    var_24 += (~var_9);
    #pragma endscop
}
