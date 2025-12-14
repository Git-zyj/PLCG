/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = min(855209524, (arr_1 [i_0 - 1]));
        var_20 = ((!(((-517521818 ? -517248656 : 627600740)))));
        var_21 = (-1460530468 | 1029742956);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = (855209541 ? var_1 : (-2147483647 - 1));
        arr_5 [4] = (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_1] = max(var_2, (max((min((arr_0 [i_3]), -1421273854)), (((!(arr_11 [i_2] [i_1])))))));
                        var_23 *= (((((~(min(-855209525, 203848166))))) && 418404086));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_16 [i_5] &= arr_14 [i_5] [i_5];
        arr_17 [4] [i_5] = (-(arr_12 [i_5] [i_5] [2] [i_5]));
        arr_18 [i_5] = (min(1528162971, ((-(arr_15 [3] [i_5])))));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_24 = max(((-((-1946356991 ? 1370829770 : (arr_15 [i_5] [i_6]))))), (((arr_8 [i_5] [i_6] [1]) ? (((arr_14 [i_5] [i_5]) ? (arr_1 [i_5]) : (arr_12 [i_5] [i_5] [i_5] [i_6]))) : (~4194300))));
            var_25 = arr_3 [i_5] [i_5];
            var_26 = (min(var_26, ((~(((arr_6 [i_6] [i_6] [i_5]) / (arr_0 [i_5])))))));
            var_27 = (+(((arr_1 [i_6]) & (arr_1 [i_5]))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_26 [i_6] = ((!((max((arr_23 [i_5] [i_5] [i_7] [7]), var_14)))));
                        arr_27 [i_5] [i_5] [i_5] [i_5] = (((-(arr_24 [i_5] [i_6] [i_5] [i_6] [i_5] [i_7]))) % (min(var_5, -16476967)));
                        var_28 = (((((-(~var_13))) + 2147483647)) >> (((min(((119683211 ? (arr_19 [i_5] [i_7] [2]) : 203848166)), ((-(arr_7 [i_5] [i_6]))))) + 689905060)));
                    }
                }
            }
        }
        for (int i_9 = 4; i_9 < 7;i_9 += 1)
        {
            arr_31 [i_9] &= ((((min(var_0, (arr_3 [4] [4])))) <= (((((arr_4 [i_9 - 3]) ? var_8 : (arr_14 [i_5] [i_9]))) / 378051584))));
            var_29 = (-(((max(var_7, var_18)) - (arr_23 [i_5] [i_5] [i_5] [i_5]))));
            var_30 |= ((!(arr_3 [12] [i_9])));
            arr_32 [i_5] = min(1498279415, var_19);
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_35 [i_5] &= (((--16777216) == (((arr_34 [i_10] [4]) ? (arr_34 [i_5] [i_5]) : 2147483647))));
            var_31 = (max(var_31, (((var_5 + (arr_33 [i_5] [i_10]))))));
        }
        arr_36 [i_5] = min((((((var_5 & (arr_23 [i_5] [i_5] [i_5] [i_5])))) ? (~var_6) : ((~(arr_1 [7]))))), (-2147483647 - 1));
    }
    for (int i_11 = 2; i_11 < 20;i_11 += 1)
    {
        arr_41 [i_11] = 773541422;
        arr_42 [i_11] [i_11] = min(-855209524, var_13);
    }

    for (int i_12 = 1; i_12 < 23;i_12 += 1)
    {
        arr_47 [i_12] = min(((var_0 ? var_3 : (((arr_0 [i_12 + 1]) ? -1786591547 : -1032606665)))), (((!2147483647) / (((arr_45 [i_12 + 1]) ? -138629281 : (arr_44 [i_12 + 1]))))));
        var_32 = arr_1 [4];
        var_33 = (max(2067337182, 1552980015));
    }
    #pragma endscop
}
