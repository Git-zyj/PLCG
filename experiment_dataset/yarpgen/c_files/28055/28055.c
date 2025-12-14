/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(-1, -var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_6 [i_0] [i_2] = (min(((max((min(65280, var_16)), 1))), ((-((-(arr_4 [i_2] [i_1] [i_2] [i_1])))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_11 [i_3] [i_1] [i_1] [i_2] [i_4] [0] = (4294967271 - var_14);
                            var_18 = (arr_9 [i_0] [i_1]);
                        }
                        var_19 = ((((var_2 && var_1) ? ((((arr_4 [i_0] [i_1] [i_2] [i_3]) || var_15))) : (!var_5))));
                        var_20 = ((((((((!(arr_10 [i_0] [i_0] [i_0 + 1] [i_3] [i_3] [i_3] [i_1]))))) * (arr_7 [i_2] [i_2] [i_2] [i_1] [i_0 + 1]))) & ((((((min(var_13, -16))) <= 65274))))));
                        var_21 = 254;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_14 [10] [i_1] [i_2] [11] = (-2251799813685247 || var_1);
                        var_22 -= ((!(((1 ? var_0 : 75)))));
                        var_23 ^= (arr_8 [i_0] [i_1 - 2]);
                    }
                }
                var_24 = (((((arr_12 [i_1] [i_0 + 1]) + 1)) - var_6));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_25 = ((4294967290 < ((((!(arr_2 [i_0 + 1])))))));
                            var_26 -= (arr_8 [i_0] [i_0 + 1]);
                            var_27 = (max((-2147483647 - 1), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_28 = (max(var_28, (((~(arr_15 [12] [6] [i_1 - 4]))))));
                            arr_20 [i_0 + 1] = (((-((min((arr_17 [i_0] [18]), var_8))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
