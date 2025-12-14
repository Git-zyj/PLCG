/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min((((1 ? 1233255297 : -1233255283))), (1233255297 - -3731457438485591509))) / ((-(min(var_10, var_14)))));
    var_19 = max((((min(var_0, var_15)))), ((var_17 ? var_1 : var_17)));
    var_20 = var_5;
    var_21 = (max(var_16, (!var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_22 = (-(arr_6 [i_0] [i_0] [i_2] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_23 = (arr_4 [i_3] [i_3]);
                                var_24 |= (arr_3 [i_3] [i_0]);
                                arr_16 [i_0] [i_2] [8] [i_0] [i_0] [i_1] [i_1] = (arr_5 [6] [11]);
                                var_25 = (arr_7 [i_0]);
                            }
                        }
                    }
                    var_26 = var_0;
                    var_27 = var_11;
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_20 [10] = (arr_8 [i_0] [i_0] [i_0]);
                    var_28 = ((var_7 ? (arr_6 [14] [i_1] [i_0] [i_1]) : (arr_6 [i_0] [0] [i_0] [0])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_5] [i_6] [17] = ((arr_7 [i_6]) - var_10);
                                var_29 &= -var_2;
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_30 = (arr_8 [i_8] [i_1] [i_8]);
                    var_31 ^= ((((max((arr_5 [9] [i_0]), ((-1233255278 ? 1462297071 : 45))))) ? ((min(((min(var_1, var_14))), ((1 ? var_4 : (arr_4 [12] [i_1])))))) : (max((max((arr_4 [i_0] [i_1]), (arr_26 [7] [i_8] [i_8] [5] [18]))), ((min(var_8, var_13)))))));
                }
                var_32 = (max(var_32, ((((((max(var_13, (arr_11 [i_0] [i_0] [i_0] [i_0])))) / (arr_2 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
