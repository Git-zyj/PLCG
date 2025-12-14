/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 + 1] [7] = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 &= 0;
                    arr_8 [i_0] [i_1] = ((max(10, ((var_0 ? var_6 : (arr_6 [i_0 + 2] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_11 = (min(var_11, ((min((~var_5), var_7)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_12 = (max((max(((76 ? (arr_11 [i_3] [13]) : var_8)), (arr_9 [i_3]))), (arr_11 [i_3] [i_3])));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_13 = (((arr_15 [i_3] [i_4] [i_5]) ? (min((arr_11 [i_3] [i_4]), (arr_14 [i_3] [i_3] [i_3]))) : var_9));
                            arr_19 [i_3] [i_4] [12] [i_6 + 2] |= (((((((~(arr_16 [i_3] [0] [i_4] [3] [i_6 + 2] [i_6])))) ? (arr_9 [i_3]) : var_2)) & (((min(var_5, (arr_14 [i_6 - 2] [i_5 + 4] [3])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_14 += ((((max((arr_24 [i_3] [i_4 - 1] [i_7] [i_8] [i_3] [13]), (arr_24 [i_3] [i_4 - 1] [i_7] [i_8] [i_7] [i_3])))) ? ((((((140737488355320 ? 91 : -77)) <= ((var_4 ? (arr_24 [i_3] [i_3] [i_4] [i_4] [i_4] [i_8]) : 1)))))) : ((1 ? 18446744073709551607 : (((((arr_17 [i_3] [i_3] [i_8] [1] [i_3]) || (arr_22 [i_3] [i_4] [i_7])))))))));
                            var_15 |= (-(~1152358554653425664));
                            arr_26 [i_3] [i_4] [i_7] [i_8] = (((arr_9 [i_7]) ? 2147483647 : (min(((0 ? 1 : (arr_21 [i_3] [i_3]))), ((max(235, var_8)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_16 = ((((var_6 || ((max(var_3, (arr_30 [i_3] [i_4]))))))));
                                arr_35 [i_3] [i_4] [i_10] [i_10] [i_11 - 1] = var_6;
                                arr_36 [i_10] [i_4 - 1] [i_4] [i_4 - 1] [i_4] [14] = (((min((!var_4), ((!(arr_30 [i_11] [i_11 - 1]))))) ? ((var_2 ? (!var_6) : ((1 ? var_6 : (-2147483647 - 1))))) : (((arr_15 [i_4 - 1] [i_9 + 2] [i_11 - 1]) / (arr_18 [i_3] [i_3] [14] [i_3] [i_3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((min(var_8, (((var_5 ? var_4 : var_5))))))));
    #pragma endscop
}
