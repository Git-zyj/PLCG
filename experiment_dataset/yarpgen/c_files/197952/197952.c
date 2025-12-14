/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((var_10 != var_4) != (var_2 > var_4)));
        var_11 = ((var_6 / var_0) > ((((arr_1 [i_0] [i_0]) << 1))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_1] [i_2] [i_1] [i_1 - 2] = (((((1 | 9097994047410463370) != ((((arr_8 [14] [i_1] [i_3]) ^ 1)))))) >= (((((1 >> (var_3 - 32158))) != ((var_8 << (arr_8 [i_1] [i_1] [i_1])))))));
                        arr_13 [i_4] [i_1] [i_3] = ((((((arr_8 [i_1] [i_1] [i_1]) | 1000012004)) & (((var_5 | (arr_8 [10] [i_1] [i_3])))))) != (((((((var_1 >= (arr_8 [i_1 - 3] [i_1] [1])))) >= (0 | 14769))))));
                        arr_14 [i_1] [i_2] [i_2] [i_2] = (i_1 % 2 == 0) ? (((((((((((var_6 + 9223372036854775807) >> (((arr_10 [i_1] [i_2] [i_1]) + 20356))))) && ((((arr_7 [i_1] [i_2] [i_3] [i_4]) | 1))))))) + (((((arr_5 [i_1] [i_1] [i_1]) - 1)) + ((((arr_8 [1] [i_1] [14]) - (arr_11 [i_4] [10] [7] [i_2] [i_2] [i_1]))))))))) : (((((((((((var_6 + 9223372036854775807) >> (((((arr_10 [i_1] [i_2] [i_1]) + 20356)) - 35976))))) && ((((arr_7 [i_1] [i_2] [i_3] [i_4]) | 1))))))) + (((((arr_5 [i_1] [i_1] [i_1]) - 1)) + ((((arr_8 [1] [i_1] [14]) - (arr_11 [i_4] [10] [7] [i_2] [i_2] [i_1])))))))));
                        var_12 = ((((((((arr_6 [i_1 + 1]) && var_0))) * (((var_5 >= (arr_7 [i_1] [1] [i_3] [i_4]))))))) && (((((((arr_3 [i_3]) && (arr_7 [1] [1] [i_3] [i_4])))) | (var_3 + -1)))));
                    }
                }
            }
        }
        arr_15 [i_1] = ((((((arr_5 [i_1] [i_1] [7]) || 1)) || (var_5 || var_2))) || (((var_9 || var_6) || (((arr_6 [i_1]) && 1000012004)))));
        var_13 = (((((((arr_9 [i_1] [i_1] [i_1]) + 1356599883)) - (((arr_3 [i_1]) + var_8)))) >> ((((((arr_6 [i_1]) <= var_0))) >> (0 && var_6)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_14 = ((var_0 % var_10) >= (((((arr_6 [i_5]) > (arr_3 [i_5]))))));
        var_15 = ((((((arr_3 [i_5]) && 13))) < (((arr_9 [i_5] [i_5] [i_5]) ^ var_0))));
        arr_19 [i_5] [i_5] &= (((var_9 != 1000012008) + (((arr_9 [i_5] [i_5] [i_5]) / (arr_11 [i_5] [i_5] [3] [i_5] [i_5] [i_5])))));
    }
    var_16 = ((((((((1 >> (var_0 + 1952)))) && (1 + var_8)))) * (((var_10 >= var_7) - (1 && var_6)))));
    #pragma endscop
}
