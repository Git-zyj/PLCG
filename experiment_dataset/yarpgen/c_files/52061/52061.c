/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [1] = var_9;
                var_20 = ((((((((var_19 ? -2752706115759024948 : 1612512891))) ? 5952170481663449178 : (!var_5)))) ? 227 : var_7));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_2] = -var_2;
                    var_21 = (~var_18);
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_22 = (max(((((max(224, var_9)) != 227))), (arr_0 [12])));
                    var_23 = max((max((-127 - 1), (max(1612512891, 5846445023503437603)))), ((((((var_18 ? var_9 : var_8))) ? var_16 : (-127 - 1)))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_0] = ((((((arr_0 [i_1]) / (arr_6 [i_0])))) ? (((((var_9 ? var_11 : 227))) ? -3740167555164995408 : (arr_16 [i_0] [i_0] [i_0] [i_0]))) : var_2));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 += (arr_5 [i_0]);
                                arr_24 [18] [i_5] [18] [19] = (min(5107766987102403920, -226952743));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((227 ? 2752706115759024947 : 5354))) ? (max(1, -226952756)) : (min(-var_15, var_7))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                arr_30 [3] [i_7] [9] = var_12;
                var_26 = -5107766987102403920;
            }
        }
    }
    var_27 = (min(0, -var_16));
    #pragma endscop
}
