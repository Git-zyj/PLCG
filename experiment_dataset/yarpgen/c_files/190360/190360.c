/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = var_7;
                    arr_8 [i_1] [i_1] [i_1] [i_2 - 1] = (arr_6 [i_0] [i_0] [i_1] [6]);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_3] [8] [17] [6] [i_0] [i_0] = var_5;
                        arr_13 [i_0] [i_0] [5] [i_3] = var_8;
                    }
                    var_12 = (min(var_12, var_1));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    arr_18 [i_0] [4] [9] = -13620;
                    var_13 = ((13598 <= ((((max(32512, (arr_15 [i_0] [i_0])))) ? 47757 : (arr_10 [i_0] [i_4] [16])))));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (min(((((((arr_5 [i_0] [9] [9]) ? var_8 : var_4))) ? (((arr_3 [i_5 - 1]) % (arr_14 [i_0] [1] [1]))) : (max((arr_5 [i_5 + 1] [7] [i_5]), var_6)))), (((var_8 ? (min(var_6, var_8)) : (((min(-3432, 47757)))))))));
                        var_14 = (min(var_14, ((((!var_6) ? (min((arr_11 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1]), (arr_10 [i_5 - 1] [i_5 + 1] [i_5 - 1]))) : ((((arr_4 [i_5 + 2] [i_4] [i_5]) ? (arr_10 [i_5 - 1] [i_5 + 2] [i_5 + 2]) : (arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 2])))))))));
                        arr_22 [i_0] [i_0] [i_0] = ((((min((arr_11 [i_5 - 2] [10] [i_5 - 2] [i_5 + 2]), var_6))) ? ((((((var_8 ? (arr_4 [i_0] [5] [i_5]) : var_2))) && -32737))) : ((-(((arr_20 [i_0] [8] [8]) ? -18225 : var_2))))));
                        arr_23 [i_0] [i_4] [i_0] [i_6] = ((var_1 ? ((((45989253490795099 ? var_8 : -366740343848603658)) >> ((min(var_2, var_4))))) : ((((18446744073709551615 ? 2554613672 : -1268947036))))));
                    }
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        var_15 = (min(var_15, ((min((~var_10), ((-1268947035 ? var_8 : (arr_24 [i_0] [i_4] [i_5] [i_7]))))))));
                        var_16 = (min(var_16, (arr_26 [0] [i_4] [i_5 + 2] [i_7 - 1])));
                        arr_27 [i_0] [i_7] [i_5] [i_7] = ((~((~(min(var_9, 13605))))));
                    }
                    arr_28 [i_0] = 13637;
                    arr_29 [i_0] [i_4] [i_5 - 2] [1] = (((arr_26 [i_0] [i_4] [i_0] [i_0]) & (!28)));
                }
            }
        }
        var_17 = (min(((min(-32759, (arr_10 [i_0] [i_0] [1])))), (max((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0] [16] [i_0])))));
    }
    var_18 *= var_6;
    #pragma endscop
}
