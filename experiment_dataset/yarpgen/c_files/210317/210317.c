/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 += (-6516 > 23539);

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 |= ((arr_4 [i_0] [i_1 + 1]) ? ((((arr_5 [i_1 + 4] [i_1 - 1] [i_1 + 3] [i_1 + 3]) > var_8))) : ((~(arr_4 [i_0] [i_0]))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = var_4;
                    }
                }
            }
            var_15 = (arr_0 [i_0] [i_1 + 4]);
            var_16 = (max(var_16, ((((arr_6 [i_1 + 1] [i_1] [i_1] [i_0]) > ((max((arr_7 [i_0] [i_1 + 3] [i_0] [i_0]), var_8))))))));
            var_17 = (max(var_17, ((((((min(29511, 0))) > ((-(arr_7 [i_0] [i_0] [i_1] [i_0])))))))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_18 = -1;
            var_19 ^= (min(6528, 38));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            var_20 = arr_15 [i_5] [i_5] [i_0];
            var_21 = (max((((((-(arr_1 [i_0]))) > (arr_11 [i_0] [i_0] [i_0])))), (((((arr_12 [i_0] [i_5]) > 65535)) ? ((((var_1 > (arr_11 [i_0] [i_5] [i_5]))))) : var_5))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_19 [i_0] = (((var_4 > var_11) > 1));
            var_22 = (min(var_22, var_3));
            var_23 = (min(var_23, (arr_4 [i_0] [i_6])));
        }
        var_24 |= var_2;
        var_25 = min((arr_1 [2]), ((((arr_0 [i_0] [i_0]) > 23539))));
    }
    var_26 = ((~(-2147483647 - 1)));
    var_27 = var_7;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_28 = (-2147483647 - 1);
                    arr_28 [i_7] [i_7] [i_9] |= (min((min(var_0, var_7)), (((-(arr_2 [i_9] [i_9] [i_7]))))));
                    arr_29 [i_7] [i_9] [i_7] [i_7] |= (-9272 > 127);
                }
            }
        }
    }
    #pragma endscop
}
