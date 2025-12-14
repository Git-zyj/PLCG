/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_10 - 255)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0 + 1] = ((!((var_0 && (((arr_3 [i_0]) && (arr_3 [i_1])))))));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [i_0 + 1] [i_0] [i_0 - 1] = (arr_6 [i_0] [i_0 + 1] [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_0 - 1] [i_3] [i_2] = (arr_1 [i_1]);
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] = var_1;
                                var_13 = ((-((((arr_11 [i_0 + 1]) && (arr_11 [i_0 - 1]))))));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        var_14 ^= (arr_1 [i_2 + 1]);
                        arr_17 [i_0 - 1] [i_1] [i_2] [i_5 - 2] = (arr_6 [i_5 + 1] [i_2] [i_1] [i_0 + 2]);
                    }
                }
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    var_15 = (min(var_15, ((((arr_9 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) >= (((((-(arr_1 [i_6]))) < -1539051145093218904))))))));
                    arr_20 [i_6] = (arr_6 [i_6] [i_1] [i_1] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((max(((!(arr_26 [i_6 - 1] [18] [i_7]))), (-1669550289 > 1))))));
                                var_17 += ((((max(((-(arr_14 [i_0 - 1] [i_6] [i_7] [i_8]))), (27806 < 37729)))) >= (arr_19 [i_0 + 2] [i_0 + 1] [i_6 + 2] [i_8 - 1])));
                                var_18 = (arr_21 [i_8] [i_8]);
                                var_19 = (arr_18 [i_6] [i_1]);
                                var_20 += 84;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((max((max(var_5, 37729)), var_0)));
    var_22 = (min(var_22, var_7));
    #pragma endscop
}
