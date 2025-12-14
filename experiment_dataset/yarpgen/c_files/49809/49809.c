/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_10;
    var_17 |= ((var_14 ? var_0 : (min(((min(var_14, var_14))), ((1 ? var_15 : 56499))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = 592746206;
        arr_2 [16] = var_7;
        var_19 = (((max(var_6, ((max(-1, -1)))))) ? (((((((arr_0 [i_0] [i_0]) || var_0))) >> (var_6 + 73)))) : (max((((var_9 ? 592746206 : var_2))), var_7)));
        var_20 += (-1092853659 * 3105415256);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_8;
        arr_6 [i_1] = ((((((arr_3 [i_1]) << (((1932344045 ^ var_8) - 1403242541))))) ? (((arr_4 [i_1]) ? var_8 : var_8)) : ((((((16941455197892231997 ? var_13 : (arr_4 [i_1])))) ? 1 : 0)))));
        var_21 = (((((min(997201659, 124)))) ? (((((var_11 ? var_1 : var_0))) ? var_6 : ((((arr_1 [i_1]) || var_4))))) : (-1 - var_4)));
        arr_7 [i_1] = (((arr_4 [i_1]) ? ((var_0 ? var_9 : (arr_1 [i_1]))) : (min((arr_1 [i_1]), (arr_1 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_13 [i_3] = (1713472747 << (((max(7055218704585853759, ((max(1216478110, (arr_10 [i_3])))))) - 7055218704585853728)));
            var_22 *= (-1174802628 ? 2047 : -13);
        }
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            var_23 ^= max((((var_7 + 9223372036854775807) >> (var_14 - 959851844))), ((((arr_14 [i_4 - 2]) ? (arr_14 [i_4 + 1]) : var_2))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_22 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] &= var_10;
                            var_24 = (var_4 / (min(((-1216478110 ? (arr_0 [i_4] [i_6 - 1]) : (arr_3 [i_2]))), (((var_7 ? (arr_10 [i_5]) : var_1))))));
                        }
                    }
                }
            }
        }
        var_25 = (((min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))) ? (max(((-(arr_9 [i_2] [i_2]))), (arr_12 [i_2] [i_2]))) : (arr_0 [i_2] [i_2])));
        var_26 &= ((((((arr_16 [6] [i_2] [i_2]) ? (arr_16 [2] [i_2] [2]) : var_11))) ? (max(3702221108, 9036)) : ((((!(arr_14 [i_2])))))));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_27 ^= max(((-(min(var_4, var_10)))), ((((-29 % -2) <= (((arr_12 [i_8] [i_8]) | var_2))))));
        var_28 += (min(895399378177592019, ((max(2029839495, 1)))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        var_29 = ((((((arr_28 [i_10 - 2] [i_10 - 2] [i_10 - 2] [i_10 - 3]) ? (var_2 && var_4) : ((var_4 ? (arr_28 [i_10] [i_10 - 2] [11] [i_10 - 2]) : var_13))))) || (((arr_24 [i_10 + 1]) <= (((arr_23 [i_8] [i_8]) ? (arr_12 [5] [0]) : (arr_8 [i_8] [i_8])))))));
                        var_30 = ((-(((var_11 > (arr_0 [i_10 - 3] [i_11]))))));
                    }
                }
            }
        }
        var_31 = (((max((arr_9 [i_8] [i_8]), (((arr_1 [i_8]) ? (arr_9 [i_8] [i_8]) : (arr_8 [i_8] [i_8]))))) << ((min((arr_8 [i_8] [i_8]), (arr_24 [i_8]))))));
    }
    var_32 = (min(((min(((var_11 ? var_13 : var_13)), (min(var_12, 1666643638))))), (min(var_13, (max(var_13, var_7))))));
    #pragma endscop
}
