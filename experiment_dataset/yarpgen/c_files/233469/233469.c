/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((14101605447070276517 ? 3115342280 : 0));
                arr_6 [i_1] = (arr_3 [i_0] [i_0]);
            }
        }
    }
    var_13 = (min((((((255 ? 1 : var_12))) ? var_1 : var_10)), var_1));

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            arr_12 [i_2] [i_3] [i_2] = (min(((((var_5 % (arr_7 [i_2]))) & (arr_10 [i_3 - 1] [i_3 - 3] [i_3 + 2]))), (((9903766655026051501 ? (15 && 0) : var_10)))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_14 = (((arr_9 [i_3 + 1] [i_3] [i_4]) < var_3));
                var_15 = (((12249600149720691447 < 3) / (arr_14 [i_3] [i_3 - 3] [i_3])));
                var_16 = ((1 ? 1179625015 : -25636));
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_17 = (arr_15 [i_2] [i_2] [i_5]);
            var_18 = var_8;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_19 = (23 - 4228340854);
            var_20 = ((var_0 * ((((arr_19 [i_2] [i_6]) ? 0 : (arr_11 [i_6]))))));
            arr_20 [i_2] [12] [i_6] = var_10;
            var_21 = (((arr_14 [i_6] [i_6] [i_6 + 1]) ? 51656 : var_9));
            arr_21 [i_6] [i_6] [i_2] = ((arr_10 [i_6 + 1] [i_6 + 1] [i_6 + 1]) ? (var_1 && -1) : (~0));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_30 [i_2] [1] [i_8] [i_9] = (((((~((var_11 ? (arr_17 [i_2] [i_2] [i_2]) : var_8))))) ? (arr_24 [i_9] [i_7] [i_2]) : (((-((-(arr_28 [i_9] [i_9] [i_9] [i_8] [i_7] [i_2]))))))));
                        var_22 = (!1179625015);
                        arr_31 [i_2] [i_7] [i_8] [i_8] = -9903766655026051492;
                    }
                }
            }
            arr_32 [i_2] [i_7] [i_2] = ((-var_12 << (((arr_10 [i_7] [i_2] [i_2]) / var_0))));
        }
        var_23 = (min(1, 10));
        var_24 = (((((-1 ? 18 : 63))) - ((67108863 ? 221666272 : (arr_18 [i_2] [i_2] [i_2])))));
    }
    #pragma endscop
}
