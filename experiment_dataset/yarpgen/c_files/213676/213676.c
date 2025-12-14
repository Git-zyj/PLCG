/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = max(0, -4091037644670853009);
        arr_3 [i_0] [i_0] = ((((var_3 * var_3) / ((min(1, (arr_1 [i_0])))))));
        var_13 = (min(var_13, ((((min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) + ((min(147, 1)))))));
        arr_4 [i_0] [i_0] = (((((var_7 | 376700114) ? ((min(1, 0))) : 0)) <= 187));
        var_14 = (min(var_14, var_3));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = ((0 <= (max((arr_7 [i_1 + 1]), var_3))));
        var_15 = (arr_5 [i_1 - 4] [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_16 = (((((1 ? 1 : 16011788810077119828))) ? (arr_6 [i_1 - 3]) : 1));
            var_17 += var_5;
            arr_12 [i_2] [i_1 + 1] [i_2] = 17978;
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_17 [i_1] [i_1] &= ((((max((1 || 1), (((arr_6 [i_1]) ? 0 : -60))))) || var_0));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_18 = (arr_22 [i_1] [i_3] [i_4 + 1] [i_5 + 2] [i_6] [i_4]);
                            var_19 -= ((~(arr_21 [i_3] [i_3] [i_3 + 1])));
                        }
                    }
                }
                arr_25 [i_1 - 2] [i_3] [i_4 + 2] [i_4] = ((arr_14 [i_3]) ? (!var_2) : (2275458657 - var_7));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_20 = var_8;
                arr_28 [i_3] [i_1] [i_1] = -1;
            }
        }
    }
    #pragma endscop
}
