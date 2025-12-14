/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((-(((min(var_11, (arr_0 [i_0]))) << (-2237 - 4294965022)))));
                var_16 = ((var_11 ? ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) : var_9));
                arr_5 [i_1] = (((arr_2 [i_0]) <= ((var_3 ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? var_1 : (arr_4 [i_0] [i_0])))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_17 = -24717;
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((((0 ? -1507791093521207527 : 3)) << (var_6 - 14485)));
                    var_18 = (min(var_18, ((((28305 | -28305) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((11300 << ((((-5443762883708495946 ? 98 : (0 >= 57))) - 96)))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                                arr_19 [i_5 + 3] [i_5 + 3] [i_4 - 2] [1] [i_3] [i_1] [i_0] |= (min((min(22247, 13023065645098429176)), (((((((arr_2 [i_5]) ? (arr_8 [i_3]) : var_13))) <= (arr_2 [i_4 + 3]))))));
                                arr_20 [i_0] [i_0] [i_3] [4] [i_5 - 1] [i_5 + 2] [i_4] = var_14;
                                var_20 = ((!(((-22247 ? ((var_8 << (((arr_3 [i_0] [i_0] [i_0]) - 404499501)))) : (1 < 2299904961392092678))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 &= ((((var_14 % 551898555) ? var_6 : (var_13 <= 28305))));
    var_22 = (((min((!var_13), ((var_8 ? var_7 : var_0)))) == (((((~var_13) < var_8))))));

    /* vectorizable */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        arr_24 [i_6] = ((((511 || (arr_4 [i_6 + 2] [i_6 + 2]))) ? -var_13 : (arr_13 [i_6 + 1] [i_6 + 1] [i_6 - 1])));
        arr_25 [i_6] = ((~(arr_8 [i_6 - 1])));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_23 = ((arr_12 [i_7] [3] [i_7] [i_7]) / (((~(min(551898552, (arr_8 [i_7])))))));
        arr_30 [i_7] &= (((arr_29 [i_7]) ? (min((arr_3 [16] [i_7] [i_7]), (arr_3 [i_7] [i_7] [i_7]))) : (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
    }
    var_24 = var_0;
    #pragma endscop
}
