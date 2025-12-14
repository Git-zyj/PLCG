/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 5389;
    var_20 ^= var_9;
    var_21 = (-7703925358025876384 / -7703925358025876381);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = (((arr_3 [i_1]) ? var_7 : (((arr_5 [i_1] [i_1 - 2] [i_1 - 2]) ? (arr_3 [i_1]) : (arr_4 [i_0 + 1] [13] [i_1 + 2])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_23 = (((arr_12 [i_4] [i_4] [i_3 + 2] [i_1] [i_3 + 2] [i_3 + 2] [i_3]) % ((((var_12 != (arr_4 [i_0] [i_0] [i_0])))))));
                                var_24 = var_7;
                                var_25 = (arr_4 [i_2] [i_1] [i_2]);
                            }
                        }
                    }
                }
                var_26 = (((arr_3 [i_1]) ? (arr_10 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_3 [i_1])));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_27 = (arr_3 [i_1]);
                    var_28 = ((arr_15 [i_0]) ? (~2912098530762939667) : (arr_15 [i_0]));
                    arr_18 [i_1] [i_1] [i_5] = ((((((arr_9 [i_0] [i_0 - 1] [i_1 - 1]) ? (arr_2 [i_0]) : (arr_7 [11] [i_0 - 1] [i_1 + 1])))) ? ((((max((arr_9 [i_0 + 1] [12] [i_5]), (arr_16 [i_0] [i_0 + 1] [i_0])))) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : 7703925358025876381)) : ((((arr_8 [i_1] [i_0 - 1] [i_0 - 1] [i_5]) ? 7703925358025876408 : (arr_15 [i_0 + 1]))))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_29 = (max(var_29, (arr_4 [i_0] [i_1 - 3] [i_6])));
                    var_30 = (max(var_1, (((arr_14 [i_1] [i_1]) ? 7703925358025876381 : (arr_14 [i_1] [i_1])))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_31 = var_18;
                    var_32 = (((arr_0 [i_7]) ? (arr_20 [i_0 + 1] [i_1 - 2] [i_1 - 2]) : var_7));
                    var_33 = (max(var_33, ((((arr_17 [i_0 - 1] [i_0 - 1] [i_1 + 1]) < var_5)))));
                    var_34 = (arr_23 [i_1 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
