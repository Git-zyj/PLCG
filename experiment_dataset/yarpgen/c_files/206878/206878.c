/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_14 = (max(var_14, (((+(((arr_1 [i_1 + 1]) ? 94 : (arr_1 [i_1 + 1]))))))));
                    arr_8 [i_0] [i_0] = ((((max((min((arr_1 [i_2]), var_4)), 1))) ? ((33 ? 120 : 3)) : (arr_2 [i_0] [i_1 + 1])));
                    var_15 = -81;
                    var_16 += (-(min(1, ((var_13 ? 37508 : (arr_7 [i_1 - 2] [i_0]))))));
                }
                for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_17 = 93;
                    var_18 = (max(116, 243));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_15 [i_4] [i_5] [i_4] [i_4] [i_4] [i_4] [5] = ((~((max(17, (arr_2 [i_1] [i_4]))))));
                                arr_16 [i_5] [i_5] [i_3] [i_5] [i_3] = ((!((!(((var_12 ? 34 : var_12)))))));
                                var_19 = (((arr_9 [i_3 - 1] [i_5] [6]) ? ((max(252, 212))) : ((min(219, -35)))));
                                arr_17 [i_3] [i_1 - 1] [i_5] [i_4] [i_5] [i_5] [i_4] = (min((((1 ? (10 ^ 206) : (((arr_6 [i_0]) % var_11))))), var_8));
                            }
                        }
                    }
                    var_20 ^= (min((((var_6 - var_3) && var_5)), (120 && 47759)));
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_21 = (arr_4 [8]);
                    var_22 = (max((((arr_2 [i_1 - 2] [i_6 + 1]) ? (((arr_3 [i_6] [i_6] [i_6]) ? var_0 : (arr_10 [i_0] [i_6]))) : (var_0 + var_13))), 405762172));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_23 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_27 [i_8] [i_8] = var_13;
                                var_24 = min(218, 36);
                                var_25 = ((-(min(var_1, (((arr_1 [i_0]) ? 1912066855 : var_7))))));
                            }
                        }
                    }
                    arr_28 [5] [1] [i_7] = (((min(((var_4 ? 1 : 2149419747)), 1))) ? (((arr_19 [i_1 - 1] [i_1 + 1] [i_7]) << (((arr_19 [i_1 - 1] [i_1 - 3] [i_7]) - 18)))) : -68);
                    var_26 *= ((171 + ((((9007199254740991 ? 126 : 21908)) ^ 1))));
                    var_27 = (arr_9 [i_1 - 3] [i_1 + 1] [i_1 - 3]);
                    var_28 += 1687987430;
                }
                var_29 = (46378 ^ 6691);
                var_30 = (~1);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    var_31 = ((arr_33 [i_11 - 2] [i_10] [i_11 - 2]) + -2362614693260125860);
                    var_32 = var_0;
                    var_33 = (max(var_33, (-127 - 1)));
                }
            }
        }
    }
    var_34 += ((1 < (264306385 ^ 43887)));
    #pragma endscop
}
