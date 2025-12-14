/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (8257536 | 33965);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = ((-var_6 ^ ((min((arr_8 [i_0] [i_0 - 1] [i_0 - 1]), (arr_1 [i_0]))))));
                    var_14 += (((((((-(arr_1 [i_2])))) <= (arr_7 [i_0] [i_1] [i_2]))) ? ((((((min(1, var_10)))) <= ((var_8 ? (arr_1 [i_0]) : -6495362369535326971))))) : ((((((arr_3 [i_0] [i_2] [0]) / (arr_5 [i_2] [4] [i_2])))) ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 1))));
                    arr_9 [i_0] [i_0] [i_1] [15] = ((!((max(var_7, (((-(arr_6 [i_0])))))))));
                    var_15 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = ((((((arr_13 [i_3] [i_3] [i_3 - 1] [i_3] [3]) + (arr_13 [i_3] [i_3] [i_3 - 1] [i_3] [5])))) - (arr_10 [i_3] [4] [i_3 - 1] [i_3])));
                                var_17 |= (!((!((((arr_7 [3] [i_1] [i_4]) ? (arr_2 [i_2]) : -123))))));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (!((min(122, (arr_15 [i_0 - 1])))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_22 [i_0] [i_0] = (min(((+(((arr_0 [i_0]) ? (arr_4 [i_0]) : var_0)))), ((((((arr_6 [11]) ^ (arr_3 [i_6] [i_0] [i_6])))) ? -1 : ((var_7 ? (arr_18 [i_5] [i_0]) : (arr_19 [14])))))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_19 = var_11;
                            arr_25 [i_0] [1] [i_0] [14] [i_7] [i_7] [i_8] = 566465432;
                            var_20 = (max((arr_20 [i_0]), (arr_10 [i_5] [i_6] [i_7] [i_8])));
                        }
                        var_21 = var_1;
                        var_22 = (max(var_22, (arr_18 [i_7] [i_7])));
                        var_23 = ((!(((-118 ? (arr_16 [i_7]) : ((var_8 ? -123 : 102)))))));
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_24 = (max(((((arr_29 [i_9 - 1]) != (arr_28 [i_9 - 1])))), ((118 ? -26628 : (arr_29 [i_9 - 1])))));
        arr_30 [i_9] [i_9] = (arr_27 [i_9 - 1]);
        var_25 = (max(var_25, ((((((arr_26 [i_9 - 1]) & 28)) & ((max((arr_26 [i_9 - 1]), (arr_26 [i_9 - 1])))))))));
    }
    #pragma endscop
}
