/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_13 = var_2;
        var_14 *= (arr_1 [i_0]);
        var_15 = (!var_3);
        var_16 -= ((((((arr_0 [i_0] [i_0]) && var_4))) != ((~(arr_0 [i_0] [i_0])))));
        var_17 = ((var_3 + ((-(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [12] = (min(((min(var_7, (arr_0 [i_1] [i_2])))), (max((max(var_12, (arr_5 [i_2] [i_2] [i_2]))), var_5))));
            var_18 += (arr_1 [i_1]);
            var_19 = -var_4;
            arr_8 [i_1] [i_2] = (max((((max((arr_1 [i_2]), (arr_4 [i_1] [i_1] [i_2]))) << (((min(var_8, (arr_0 [i_2] [i_2]))) + 342195427369455661)))), (((max((arr_2 [i_1]), (arr_1 [i_2]))) * ((max(var_6, var_9)))))));
            var_20 -= var_4;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_17 [4] [i_1] [4] [i_3] [i_4] [i_5] = (((arr_14 [i_1] [i_3] [i_1] [i_1]) != ((-(min(var_1, var_6))))));
                        arr_18 [i_1] [i_3] [i_4] [i_4] = (max(((min((!var_10), (arr_0 [i_1] [5])))), (((((((arr_3 [i_4]) > (arr_11 [i_1]))))) * ((var_12 % (arr_12 [i_5] [i_4] [i_4])))))));
                    }
                }
            }
            var_21 = (max((arr_15 [i_1]), ((min((arr_13 [i_1] [1]), (max((arr_5 [i_3] [i_1] [14]), (arr_11 [i_3]))))))));
        }

        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_22 = (max((max((arr_6 [i_1]), var_0)), var_10));
            arr_23 [i_6] = (max(var_3, ((-(((arr_21 [i_1] [i_6]) / var_1))))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_23 = (min(var_23, ((max((((((-(arr_16 [10] [i_1] [i_1] [i_7]))) % (arr_5 [i_1] [i_1] [i_1])))), (min(((((var_8 + 9223372036854775807) << (((var_0 + 494769379243504079) - 49))))), (min((arr_15 [i_1]), var_4)))))))));
            arr_27 [i_7] = (min((min((min(var_7, (arr_2 [i_1]))), (arr_9 [i_7] [0] [0]))), (!var_9)));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                arr_34 [i_1] [i_8] [i_8] = ((+(((var_12 + 9223372036854775807) << (var_1 - 63106)))));
                var_24 = (var_0 ^ var_10);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_25 *= ((var_4 != (~var_8)));
                            var_26 = ((+(((arr_40 [4] [i_11] [i_9] [i_10] [i_11]) & (arr_6 [i_1])))));
                            var_27 = var_5;
                        }
                    }
                }
            }
            var_28 = (min(var_28, var_7));
        }
        var_29 = (max(var_5, ((~(arr_41 [i_1] [i_1])))));
    }
    var_30 = var_1;
    var_31 = var_7;
    #pragma endscop
}
