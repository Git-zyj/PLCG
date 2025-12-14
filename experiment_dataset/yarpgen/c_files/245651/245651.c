/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = (min((((~9223372036854775807) % (((arr_1 [i_0]) % 10484)))), ((((((arr_1 [i_0]) <= (arr_1 [i_0]))) && (arr_0 [i_0]))))));
        var_21 = ((((max((arr_1 [i_0]), ((max((arr_0 [3]), -10485)))))) ? (((~(((arr_0 [i_0]) ? -10491 : 1586420102))))) : (((((arr_0 [i_0]) ? (arr_1 [1]) : 115)) % ((max(3416090757, (arr_0 [i_0]))))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_22 = arr_3 [i_0] [i_1] [8];
            var_23 = ((((max(157, (arr_3 [i_0] [1] [i_1 + 1])))) % (min((max((arr_0 [i_1 + 2]), 115)), 1))));
        }
        var_24 |= (max(255, (((var_10 ^ 187) ? (var_6 & 141) : ((-5 | (arr_0 [i_0])))))));
        arr_4 [2] = ((((max((1 % 30346), (min((arr_1 [i_0]), 0))))) ? ((((arr_1 [7]) && (((var_11 ? (arr_2 [7]) : (arr_1 [i_0]))))))) : ((~(167 <= 63)))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_25 = min(((733641847 ? (arr_0 [i_2]) : (~1))), (arr_10 [i_4] [i_5] [i_2]));
                        arr_18 [i_5] = 68;
                        var_26 = (((max(var_19, ((7168 ? (arr_10 [8] [i_3 - 2] [7]) : (arr_11 [1] [1] [1]))))) * (max((min((arr_11 [i_3] [i_4] [i_5]), (arr_12 [12] [i_2]))), (arr_6 [8] [11])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_26 [i_8] [i_7] [i_2] [i_8] = ((125 ? 210 : 699105065069624316));
                        arr_27 [i_2] [i_2] [i_6] [i_8] [i_8] [i_8] = (((((((1 ? 1 : (arr_20 [i_7] [12] [i_2]))) != (((3 ? 1 : 1)))))) % ((((((((arr_6 [i_2] [10]) <= (arr_17 [i_6] [i_6] [i_6] [i_6]))))) <= (arr_0 [i_8 - 1]))))));
                        arr_28 [i_8] [i_8] = (max((((((var_15 || (arr_22 [3] [i_6] [i_7] [i_8]))) && (((var_16 ? var_18 : var_5)))))), ((((((arr_11 [i_7] [i_6] [i_2]) - (arr_6 [i_6] [1])))) ? ((2 ? 4216745500 : 2047)) : (arr_22 [i_6] [i_6] [i_6] [12])))));
                    }
                }
            }
        }
        var_27 = 7;
    }
    var_28 = var_10;
    var_29 = max(15, 1);
    var_30 = (max(2718679588, 0));
    #pragma endscop
}
