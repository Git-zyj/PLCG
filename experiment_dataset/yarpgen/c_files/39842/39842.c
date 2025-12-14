/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 ^= 143;
                                arr_11 [i_0] [i_1] [i_3] [i_1] [i_4] = -118;
                                var_17 = ((((((max((arr_5 [i_0] [i_2] [i_0] [i_4]), var_11))) || (arr_6 [i_0] [i_0] [i_4 - 1]))) ? ((((arr_9 [i_0] [i_1] [1] [i_3] [i_4] [i_4]) >> (((min(-35, 2022157279)) - 2022157253))))) : (5338143360532237334 - -4194303)));
                                var_18 = (max(var_18, ((min((arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]), (((arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 2]) ? ((var_11 ? (arr_9 [i_0] [i_1] [i_1] [i_3] [i_4 - 1] [i_1]) : var_13)) : (var_11 * 144))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [0] [i_6] = (1 != 9167);

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_19 = (-(((((!(arr_14 [i_0] [i_0] [i_5] [i_0] [i_6] [i_7])))) * 2044353043)));
                                var_20 = (((((arr_17 [i_0] [i_1] [i_5] [i_6]) ? var_7 : -2044353043)) - (((((((arr_12 [i_0] [i_0]) ? -9171 : (arr_4 [i_0])))) / ((var_1 ? var_6 : (arr_0 [i_0]))))))));
                                var_21 += (min((arr_1 [i_0] [i_1]), ((((min((arr_6 [1] [i_1] [i_5]), (arr_2 [i_0])))) >> (((((arr_3 [i_0] [9] [i_0]) ? var_4 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + 8279))))));
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_22 -= (max((max(((var_4 ? (arr_19 [i_0] [i_1] [1] [i_6] [1]) : (arr_2 [i_0]))), (-9167 ^ var_12))), (max(((18255657541466413656 ? 57 : 2044353043)), ((0 ? -46 : -9151))))));
                                var_23 = (((~var_15) ? (((arr_8 [i_0] [i_1] [i_5] [i_6] [i_8] [i_5]) ? var_6 : (arr_8 [i_0] [i_1] [i_1] [i_5] [i_1] [i_1]))) : ((min(((4144374411 ? (arr_6 [i_0] [i_1] [i_5]) : 2044353043)), ((var_10 ? (arr_10 [i_0] [i_1] [i_5] [i_1] [i_1]) : (arr_14 [i_0] [1] [i_5] [i_6] [i_8] [i_5]))))))));
                                arr_21 [1] [i_8] [i_5] [i_6] [i_8] = var_0;
                            }

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 11;i_9 += 1)
                            {
                                arr_26 [i_9] [2] [i_1] [2] = (((var_10 > var_13) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (3740583020711425787 > var_0)));
                                arr_27 [i_6] [i_1] [i_0] &= (arr_13 [i_0] [i_1]);
                                var_24 = (max(var_24, ((!(((arr_7 [2] [i_5] [i_6]) && var_7))))));
                            }
                            for (int i_10 = 0; i_10 < 11;i_10 += 1)
                            {
                                arr_32 [i_0] [i_0] [i_0] = (((arr_14 [i_0] [i_0] [i_1] [i_0] [i_6] [i_10]) ? ((max(((var_8 ? 1296171479 : -1646847762)), ((((arr_19 [i_0] [2] [1] [i_0] [i_0]) ? -9167 : var_10)))))) : (((min(var_7, (arr_4 [i_1]))) | (((min((arr_25 [i_0]), var_8))))))));
                                var_25 = (max(var_25, ((((((var_0 & ((min(var_2, var_9)))))) ? ((((18446744073709551615 > (arr_4 [i_0]))))) : ((-var_12 ? (arr_19 [i_0] [i_1] [i_5] [i_6] [i_10]) : (arr_14 [i_0] [i_1] [i_1] [i_5] [i_5] [i_10]))))))));
                            }
                        }
                    }
                }
                arr_33 [i_0] [6] = 7327;
            }
        }
    }
    var_26 = (min(var_9, (var_7 + 2044353043)));
    var_27 = 10144046608864605181;
    var_28 = max(((((min(25745, var_15))) && var_1)), var_2);
    #pragma endscop
}
