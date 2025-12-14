/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [10] = var_7;
        arr_3 [i_0] = (max((((arr_1 [i_0]) ? var_11 : (arr_1 [i_0]))), (((7080974963075896425 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 += var_14;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, var_0));
                    var_22 += (var_10 >> (var_2 + 76570273));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_16 [i_1] [12] [i_3] [7] = ((arr_6 [i_2] [i_4] [i_3]) ? 13182848222575869225 : (arr_4 [i_1] [i_1]));
                        arr_17 [i_1] [i_2] [i_3] [i_4] [7] = (18305692320129691264 / ((1081 ? ((((arr_5 [i_1]) % var_9))) : -7271655815749443430)));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_20 [i_1] [i_2] [i_1] [i_5] = (arr_11 [i_5]);
                        var_23 = ((-((var_5 ? 7904659152749687452 : ((((!(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    arr_26 [i_1] [i_1] [i_1] [i_7] = ((!(((var_10 ? ((((arr_10 [i_1] [12] [i_1]) ? var_7 : (arr_19 [4] [11] [3] [i_6] [i_1])))) : 2996421682123123981)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_24 += var_10;
                                var_25 = (((max(10818485054676325068, 17505664476793121821)) + -var_15));
                            }
                        }
                    }
                    var_26 = (max(var_26, var_19));
                    var_27 = (-(arr_21 [i_1] [i_6] [i_7]));
                }
            }
        }
    }
    var_28 = var_3;
    #pragma endscop
}
