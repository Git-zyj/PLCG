/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 ^= (arr_1 [i_0 + 1]);
        var_13 *= var_2;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            arr_15 [i_0 + 1] [i_2] [8] [i_3] [i_3] [1] = ((((((arr_3 [i_0 - 1] [i_1 + 4] [i_3 + 1]) * ((var_8 ? var_2 : var_4))))) ? (((var_11 ? (arr_13 [i_0] [i_0 + 3] [i_3] [i_1 + 4] [6] [i_4 - 2]) : var_0))) : var_5));
                            var_14 = ((((max(94, -15))) ? (((var_1 ? (arr_5 [i_0] [i_1 + 2] [i_3 + 1]) : var_10))) : (min(((var_0 ? var_1 : var_2)), (((var_10 ? (arr_4 [i_0] [i_1]) : var_10)))))));
                            arr_16 [6] [i_3] [5] [i_3] [i_3] = (min(((var_8 ? ((var_0 ? var_5 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))) : var_8)), ((var_4 ? var_8 : (1 >= 31730)))));
                            arr_17 [i_3] [i_1] [0] [i_3] [i_4] = var_11;
                            arr_18 [i_3] = (max(-1523657139, 118));
                        }
                        for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_15 = (var_3 & var_0);
                            var_16 = (arr_2 [i_2]);
                        }
                        for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_17 = (((!var_4) ? (((((max(var_4, var_7))) * ((min(var_6, var_9)))))) : ((2260 ? -9007703084044149425 : 183))));
                            arr_23 [i_3] [i_1 + 1] [i_1] [15] [i_1 + 4] [i_1 - 1] = (max((~-14669), ((((max(var_5, var_8))) ? ((max(var_4, var_11))) : var_2))));
                        }
                        arr_24 [i_3] [i_1] [i_2] [i_3] = (!var_7);
                        var_18 = (var_10 ? ((((!(arr_9 [i_3 + 1] [i_1 + 3] [i_2] [i_3] [11] [i_0 + 1]))))) : -var_8);
                    }
                }
            }
        }
        var_19 = 1;
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_20 -= (((~65535) ? ((var_10 << (((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) - 18513)))) : -524287));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                {
                    arr_31 [i_7] [6] [8] = ((((var_8 ? (!var_8) : (var_3 ^ var_10))) >= var_7));
                    arr_32 [i_7] [7] [i_8] [i_7] = (!var_7);

                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_36 [i_7] = (arr_0 [17] [i_9 - 1]);
                        arr_37 [i_7] [i_7] [i_9] [i_10] = -524288;
                        var_21 = var_10;
                    }
                    arr_38 [i_7] [i_8] [i_7] = ((((((var_2 > (arr_20 [6] [i_7] [i_9] [i_8 - 1] [i_7] [i_8] [12])))) > ((max((arr_20 [i_9] [i_7] [i_9] [i_8] [i_8] [i_7] [i_7]), var_1))))));
                    var_22 = var_1;
                }
            }
        }
        var_23 = (max(var_23, var_1));
    }
    var_24 = ((!(((var_10 ? ((min(var_0, var_0))) : var_9)))));
    #pragma endscop
}
