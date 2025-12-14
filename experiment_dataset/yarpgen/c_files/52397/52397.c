/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 & (!var_1)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (max(((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))), var_5));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 = (min(var_20, var_13));
            var_21 = var_10;
            var_22 = ((((992 << (((-1467 + 1489) - 15)))) << ((((~1457) >= ((min(1023, 992))))))));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_23 = (((arr_0 [i_2]) ? (((var_12 >= (arr_6 [0] [i_3])))) : (arr_0 [i_3])));
            var_24 = (max(var_24, var_12));
            arr_8 [i_3] [i_3] = (!var_1);
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_18 [i_2] [i_4] [i_4] [i_2] [1] [i_5] = (arr_3 [i_6 - 1] [i_6 - 1]);
                            arr_19 [i_5] [i_6] [i_5] [i_4] [i_5] |= ((~(arr_17 [i_5] [i_5])));
                            arr_20 [i_2] [i_4] [i_5] [i_6] [i_7] [i_7] [i_4] = (((arr_14 [9] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_4]) ? var_3 : (arr_14 [i_2] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_4])));
                            arr_21 [i_5] [i_4] [i_5] [i_6] = var_3;
                        }
                    }
                }
                var_25 = (~var_11);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                arr_26 [i_4] = ((((50005 ? 44 : -23245)) | ((-1457 ? var_3 : 64548))));
                var_26 = var_12;
            }
            var_27 -= (arr_13 [i_2] [i_4] [2]);
        }
        arr_27 [i_2] = 49064;
    }
    #pragma endscop
}
