/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((min((max(var_13, var_7)), (((var_8 ? var_7 : var_16))))) * var_14)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, (((((((((36 ? 99 : 199705775))) ? -1762066746 : (-73 * 0)))) ? ((max(227, 41))) : (arr_0 [i_0]))))));
        var_21 = (min(((var_6 ? (arr_1 [i_0]) : (arr_1 [i_0]))), (min(((50912 ? 28 : 166)), ((64 ? -769612316 : (arr_0 [i_0])))))));
        var_22 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_23 ^= (min(((((var_16 / var_1) ? var_8 : var_7))), ((((max(50912, (arr_2 [i_1])))) ? (arr_8 [i_1]) : (arr_3 [i_0] [i_2])))));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [14] [i_3 + 1] = var_11;
                        var_24 = (((arr_11 [i_0] [i_1] [i_1] [i_2] [i_0]) - (((arr_11 [i_1 + 3] [i_1 - 1] [i_2] [i_2] [i_0]) ? 99 : (arr_11 [i_1 + 2] [i_1 + 4] [i_2] [i_3] [i_0])))));
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_25 = (arr_9 [9] [i_1] [i_1]);
                        arr_16 [i_0] [i_0] = (max(((min(((max(75, var_1))), (max((arr_5 [i_0]), var_1))))), (982667792 % 4294967295)));
                    }
                    arr_17 [i_2] [10] [0] [16] |= (~14624);
                    var_26 = ((!var_9) ^ ((((-3036864504959457669 ? var_1 : 65535)) + 42323)));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        arr_20 [i_5 - 1] [i_5] = (max(((max(1, 23213))), (((((23212 ? var_7 : var_11))) ? (arr_2 [i_5 - 2]) : 247))));
        arr_21 [17] [i_5] = ((!((((((-(arr_6 [i_5] [i_5])))) ? (arr_11 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 2] [0]) : ((~(arr_18 [i_5]))))))));
        var_27 = (((((var_12 ? 239 : (arr_11 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 2] [12])))) - (min((arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [4]), var_4))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_24 [i_6] = max(((((arr_6 [i_6] [i_6]) < var_0))), (((((9 ? 9 : 50912))) ? (((-(arr_2 [8])))) : (arr_12 [i_6]))));
        arr_25 [i_6] |= (((((((min(var_16, (arr_6 [17] [i_6])))) ? var_11 : (arr_5 [i_6])))) && -8080159862816728821));
    }
    #pragma endscop
}
