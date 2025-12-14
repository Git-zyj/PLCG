/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (arr_6 [i_1] [i_1] [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_12 |= (((arr_0 [i_0 - 1]) == 1073741824));
                            var_13 &= (((((var_4 ? (arr_8 [i_3]) : 50833))) ? (arr_1 [i_2] [i_0 + 1]) : (arr_12 [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_14 = (arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                            arr_18 [i_1] [i_1] [i_1] = (arr_12 [i_1]);
                            arr_19 [i_1] [i_3] [i_3] [i_1] [i_1] [i_1] [i_1] = (~219);
                        }
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_15 = (((arr_14 [i_0 - 1] [8]) ? (arr_14 [i_0 + 1] [i_0 + 1]) : (arr_16 [i_2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])));
                            var_16 = (arr_12 [i_0 - 1]);
                            arr_22 [i_6] [i_3] [i_1] [i_1] [i_1] [i_0] = (1 * 10242811371009697865);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_17 = (min(var_17, (((-74 ? 65518 : 250)))));
                            var_18 = (min(var_18, 0));
                        }
                        arr_25 [i_1] [i_3] [i_2] [i_1] [i_0] [i_1] = ((!((((arr_4 [i_1]) ? (arr_23 [i_1] [i_2] [i_2] [i_0] [i_1]) : -599243405955212469)))));
                        var_19 = 7644933112582625641;
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        var_20 ^= (~9955231259419432214);
                        var_21 = ((var_8 ? (arr_9 [i_0 + 1] [i_0]) : ((var_2 ? (arr_12 [i_2]) : (arr_21 [i_1] [i_2] [i_1] [i_1])))));
                        arr_28 [17] [i_1] [6] [i_1] [i_0] = 255;
                        var_22 = (max(var_22, ((((166 / 837840908) ? (arr_27 [i_8 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_8 [i_1]))))));
                        arr_29 [i_1] [i_2] [i_1] [i_1] = var_5;
                    }
                    var_23 = ((((arr_23 [i_1] [i_2] [i_0] [i_0] [i_1]) ? 0 : 11370)));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    arr_33 [1] [i_1] [i_1] [i_0] = ((-((11388 ? var_8 : 82))));
                    arr_34 [i_1] [i_9] [i_1] [i_1] = -1084258474654847538;
                    var_24 = ((-(arr_24 [i_1] [i_0 - 1] [14] [i_0 - 1])));
                    var_25 = (max(var_25, (((-(arr_9 [i_0 - 1] [i_0 - 1]))))));
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_10] [i_1] [i_1] [21] = ((2092074592 ? (max((arr_5 [i_1]), (arr_9 [i_0 + 1] [i_0 + 1]))) : (((9056278509396604068 || (((arr_2 [i_10] [i_0 + 1]) == 3217845292)))))));
                    var_26 = ((((1077122004 ? (min(var_9, var_5)) : ((var_1 ? (arr_10 [i_10]) : 3217845316))))) ? (min((((arr_17 [i_0] [i_10] [i_1] [i_1] [i_1] [i_0] [14]) ? 31 : var_3)), (((var_6 ^ (arr_17 [2] [i_10] [i_10] [i_1] [i_1] [16] [3])))))) : (arr_20 [i_0] [i_1] [i_1] [i_0] [i_0]));
                    arr_38 [i_1] [i_1] = ((-(arr_8 [i_10])));
                    arr_39 [i_1] [i_1] [i_1] = ((+(((arr_2 [i_0 + 1] [i_0 - 1]) ? 98 : -1405724482))));
                }
            }
        }
    }
    #pragma endscop
}
