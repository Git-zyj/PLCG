/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = (min((!40237), ((726733435 ? (!-726733435) : (4294967284 && -726733436)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = ((((min(var_5, var_13))) ? (~-726733441) : ((var_6 >> (arr_13 [i_0 - 3] [i_0 + 1] [i_0] [i_0] [7] [12])))));
                                var_19 = ((-(min((arr_8 [i_0] [i_0] [i_4]), ((min(45432, var_9)))))));
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_0] = ((~((max(4452, 726733435)))));
                            }
                        }
                    }
                }
                var_20 = 5100469056477828148;

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((6672 ? var_11 : ((var_14 ? (arr_4 [14]) : 9))))) ? (min(871862816, (((235 << (var_7 + 5306181142284318764)))))) : var_5)))));
                                var_22 = 1583543392;
                                var_23 = ((((var_10 * (arr_1 [i_0]))) % (max(1032021858, (arr_21 [i_0] [i_6 + 3] [i_5 + 2] [i_5 + 3] [i_0])))));
                            }
                        }
                    }
                    arr_24 [i_0] [i_0] [i_0] = ((~(1092963818521011960 <= -5618704221140613541)));
                    var_24 = -726733436;
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_25 = (min(((((arr_6 [i_0 - 2] [i_0 - 2]) && 0))), (119 / var_3)));
                                var_26 = (arr_5 [i_5 + 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 7;i_12 += 1)
            {
                {
                    arr_39 [i_10] [i_10] [i_10] = ((~((var_7 + (arr_12 [i_12] [0] [i_12 + 3] [i_12] [i_12])))));
                    var_27 = 18446744073709551615;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 2; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    var_28 = -726733421;
                    arr_46 [i_15] [i_14] [17] = -var_10;
                    var_29 *= ((min((arr_40 [i_15] [i_13]), 726733435)));
                }
            }
        }
    }
    #pragma endscop
}
