/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 1] = var_9;
        var_12 = (min(((~((var_4 ? var_10 : var_8)))), (((3532270691872158552 ? 740327752 : 1537641040)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_3] = (min(((((((var_6 ? var_0 : (arr_3 [i_0 + 1] [i_0] [i_0])))) && ((min((arr_6 [i_0 + 1] [i_0] [i_0]), 1317063429)))))), (min(-190087387, 190087410))));
                        arr_11 [i_3] [i_1] = (min(((62592144 ? -190087375 : 25668)), var_11));
                        var_13 = ((((((((var_4 ? var_2 : var_4))) ? (arr_7 [i_0 - 1] [i_0 - 1] [15] [i_0 + 1]) : (var_2 + var_8)))) ? ((((min(var_4, var_11))) | ((var_3 ? (arr_9 [2] [0] [1] [i_2] [6] [i_2]) : (arr_7 [i_1] [i_1] [i_1] [i_1]))))) : var_5));
                        var_14 = (min((((var_2 != ((((arr_6 [7] [i_1 + 2] [i_1]) || var_8)))))), (max(((var_11 ? var_1 : (arr_1 [i_0]))), (((var_10 ? (arr_3 [1] [i_1] [i_1]) : (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1]))))))));
                        var_15 = var_5;
                    }
                }
            }
        }
        var_16 = (max(var_16, ((max((((min(var_0, var_11)) & (((var_7 >> (var_9 - 6675223003703325479)))))), (((((var_7 ? var_5 : (arr_6 [11] [i_0 - 1] [i_0 + 1]))) != ((min(var_5, var_7)))))))))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        var_17 = var_1;
        var_18 += var_8;
        var_19 |= var_2;
        var_20 = (((arr_12 [i_4 - 3] [i_4 - 2]) ^ ((((arr_13 [i_4 + 1] [i_4 + 2]) ? (arr_13 [4] [i_4]) : var_2)))));
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_21 = var_1;
        var_22 = var_7;
        var_23 = (min((min(-740327752, 55277)), 39865));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_24 = (((((var_8 ? var_3 : var_10))) ? (((83 && (arr_17 [i_6] [2])))) : (arr_13 [i_6] [i_6])));

        for (int i_7 = 3; i_7 < 7;i_7 += 1)
        {
            var_25 = var_6;
            var_26 |= (((arr_13 [i_7 + 1] [i_7 + 2]) ? var_5 : var_2));
        }
        var_27 = ((((176733691 ? 8870230764104389437 : -1491041070372745819)) << (var_0 - 760722821)));
    }
    var_28 = (min((min((min(var_4, var_6)), ((var_10 ? var_9 : var_1)))), (-1491041070372745830 && 3067832804)));
    #pragma endscop
}
