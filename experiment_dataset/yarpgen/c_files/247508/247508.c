/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        var_13 = (min(var_13, (((arr_2 [6]) % (arr_2 [12])))));
        arr_4 [i_0] = var_1;
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = var_8;
        arr_8 [i_1] [i_1] = var_2;
        arr_9 [i_1] [i_1] = (max((((((min(4836650784714277593, 17965))) && (((17984 / (arr_0 [4] [i_1]))))))), (((~-17970) ? (max(var_10, -769967938)) : -34))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_12 [i_2] = (((((~(min(var_5, 1461337531))))) ? (((((arr_11 [9]) ? 1 : var_3)) & 1)) : ((((var_9 ? -23 : (arr_1 [i_2])))))));
        var_14 = ((((min((max(var_4, var_11)), 56))) ? ((max(45675, 58))) : ((((max((arr_11 [i_2]), 1810861872)) == (~var_6))))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_15 += (((1579154137 & (max(var_11, (arr_13 [2] [i_3]))))));
            var_16 = (max(((((((arr_11 [i_3]) == var_6))) % ((-1579154111 ? (arr_11 [11]) : 45675)))), (((arr_11 [i_3]) ? (-17968 && var_4) : 54))));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_17 ^= (arr_14 [i_2] [i_4]);

            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                arr_21 [i_2] [i_4] [i_5 + 1] = ((((((-57 && var_8) ^ (arr_14 [1] [i_4])))) || (32767 & -28371)));
                var_18 = ((((((min(1879012419, -33)) - (14 == 17980)))) ? ((((((~(arr_18 [i_2] [i_4] [i_5 + 1] [i_2])))) ? var_9 : (((!(arr_1 [i_5]))))))) : ((-17980 ? -var_2 : 4294967295))));
            }
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                arr_24 [i_2] [i_2] = ((((max((arr_18 [i_6] [i_6] [i_6 - 1] [i_6 + 1]), (arr_18 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1])))) ? ((28571 % (max((arr_13 [i_2] [i_4]), var_6)))) : (((((min((arr_2 [i_2]), (arr_16 [i_2])))) ? ((((arr_2 [i_2]) != var_11))) : (arr_23 [i_2] [i_4] [i_2]))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_19 += (max((((arr_26 [i_8] [i_7 - 1] [i_6] [i_2]) ? var_6 : ((0 ? (arr_18 [i_2] [i_6] [4] [i_8]) : (arr_0 [10] [i_4]))))), -441251703));
                            arr_32 [i_2] [5] [i_6] [i_7] [i_2] [i_8] = (((arr_11 [i_4]) ? ((max((arr_28 [i_4] [i_4] [i_6 + 1] [i_2]), var_10))) : 1318479466));
                            var_20 ^= ((((min(23296, (arr_26 [i_8] [i_7] [i_2] [i_2])))) ? (((~(((arr_17 [10]) ^ 441251702))))) : (((arr_16 [2]) ? 18229450907733544467 : 0))));
                            var_21 = -var_10;
                        }
                    }
                }
                var_22 = (~(((arr_25 [i_6] [i_6 - 1] [i_6] [i_6 - 1]) ? (max((arr_10 [4]), 56)) : ((-13 ^ (arr_1 [i_6]))))));
            }
            var_23 = (max(var_23, (~1)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_24 = (max(var_24, (((max(-1579154120, var_9)) != ((((arr_11 [i_9]) > (1 * 45668))))))));
                        arr_38 [6] [i_4] [i_9] [i_2] [i_9] = ((((max(var_10, (arr_13 [i_2] [i_10])))) ? (((!(arr_13 [i_2] [i_4])))) : ((((arr_13 [i_2] [i_4]) >= (arr_13 [i_2] [i_2]))))));
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            var_25 = (max(var_25, var_7));
            var_26 = ((-12184 / (arr_10 [i_11])));
            var_27 = (arr_35 [i_2] [i_2] [i_2] [i_2]);
        }
        var_28 = (arr_18 [4] [i_2] [i_2] [i_2]);
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        var_29 = var_12;
        var_30 = (max(var_30, (arr_27 [i_12] [i_12] [i_12] [i_12])));
    }
    var_31 = var_6;
    var_32 = ((((min((max((-2147483647 - 1), var_8)), (max(var_6, var_5))))) && (((12 << (56 - 34))))));
    #pragma endscop
}
