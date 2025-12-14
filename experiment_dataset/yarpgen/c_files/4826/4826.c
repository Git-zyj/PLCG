/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = ((~(((arr_0 [i_1 - 1]) % (arr_0 [i_0])))));
                    arr_6 [i_0] [i_0] [i_0] = 62283;
                    var_12 = (min(var_12, (((((((arr_1 [i_0] [4]) - 13441351266083203998))) || (((arr_4 [5] [5] [i_2]) >= var_7)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_13 *= ((((arr_4 [i_3] [10] [10]) - ((((0 >= (arr_0 [i_3]))))))) | var_2);
                arr_11 [i_3] [i_3] [i_3] = ((!(((arr_9 [11] [i_3] [i_4]) <= (arr_0 [i_3])))));
                var_14 = (((((arr_4 [i_3] [i_3] [i_3]) ? 0 : (arr_4 [i_3] [i_3] [i_3]))) << (((min((min((arr_3 [i_4] [i_4]), 10272702949939715523)), (var_6 * var_2))) - 4136269725))));
            }
        }
    }
    var_15 = ((var_6 ? (((min((var_8 != var_0), var_9)))) : ((((62274 ? 24 : var_6)) << (!13441351266083203998)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_20 [i_5] [i_7] [i_5] [i_5] = (((arr_4 [3] [i_5] [i_7]) || ((min((((!(arr_17 [i_5] [i_6] [11] [12])))), -var_8)))));
                    var_16 = arr_17 [i_5] [i_6] [i_7] [i_6];
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_17 = ((!((min(var_7, -51)))));
                                arr_25 [i_5] [i_7] [7] [i_9] [i_9] = (arr_2 [i_5] [i_6] [i_8]);
                                arr_26 [i_6] [i_9] [0] [i_6] |= (min(((((-(arr_24 [12] [12] [i_9] [i_9]))) / (arr_0 [i_7]))), (((arr_23 [12] [i_9] [i_9] [i_9 - 2] [i_9 - 1] [i_9 + 1] [i_9]) + (min(125658604, 8174041123769836090))))));
                                arr_27 [i_5] [i_6] [i_7] [i_8] [2] [i_9] = ((!(arr_23 [i_9 + 1] [i_9 - 2] [i_9 - 3] [i_9 - 2] [i_9 - 2] [i_9 - 1] [6])));
                                arr_28 [i_7] [i_6] [i_7] [i_8] [i_9] = (((!25942) & (((3253 && var_2) - ((((arr_15 [i_9 - 2] [i_6] [8]) <= var_6)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((249 ? (((255 <= ((110 ? 18446744073709551611 : 16048688073155985081))))) : 3253));
    #pragma endscop
}
