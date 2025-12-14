/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_10;
    var_13 = 169973239;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((((max((arr_1 [i_0]), (arr_1 [i_0]))))) & (~var_10)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 -= (517095736809798350 - 13);
            var_15 = ((-(((var_4 || (!var_10))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_16 = var_7;
            var_17 = (((arr_3 [i_0] [i_0] [2]) ^ (arr_3 [i_0] [i_0] [i_0])));
            arr_7 [i_0] [i_0] [i_0] = 169973251;
        }
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_18 = ((~(min(var_3, ((max((arr_5 [i_4]), var_11)))))));
                        var_19 |= var_10;
                        var_20 = (arr_5 [i_5]);
                        var_21 = ((max((max((arr_13 [23]), var_8)), -var_4)));
                    }
                }
            }
            var_22 = var_2;

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_23 = -6285401608511112808;
                var_24 = (250 ? -82 : -1);
                var_25 = (max(var_25, (((47406 ? (arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 2]) : var_9)))));
            }
            for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_26 = 18118;
                arr_21 [i_7] = (min((((var_4 ^ (arr_3 [i_7 + 1] [20] [18])))), (var_7 >= var_9)));
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
            {
                arr_25 [i_0] [5] [i_3] [20] = ((-(((arr_10 [i_0] [i_3 - 1] [i_3 - 1]) | (arr_1 [i_0])))));
                arr_26 [i_0] [1] [i_8] = ((((var_2 ? (arr_10 [i_0] [i_0] [i_0]) : (arr_14 [i_3] [i_8]))) < (arr_11 [i_8 - 1] [i_3 - 1] [i_0])));
                var_27 = (max(var_27, ((((arr_16 [i_8] [i_0] [i_0] [i_0]) > var_2)))));
            }
        }
        var_28 = (max(var_28, -var_10));
    }
    var_29 |= ((var_2 ? var_6 : ((((max(-104, var_1)) > ((var_5 ? var_8 : var_8)))))));
    #pragma endscop
}
