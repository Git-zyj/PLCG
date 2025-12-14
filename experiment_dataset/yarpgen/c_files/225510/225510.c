/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 &= (max(((min((var_8 + var_17), ((~(arr_6 [i_1] [i_1])))))), ((27 ? (min(var_0, -15)) : var_5))));
                                var_19 = (arr_10 [0] [i_4 - 2] [i_3 + 1] [i_4 - 2]);
                            }
                        }
                    }
                    var_20 ^= ((!(((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2]) ? (arr_11 [i_0] [16] [i_0] [i_1] [16] [i_1]) : (arr_2 [i_0])))) ? (-3289884630552412664 & var_4) : (arr_3 [i_0] [i_1] [i_1]))))));
                    arr_14 [i_0] [i_2] [i_2] [i_2] = ((max(-2044070889, ((min((arr_8 [11] [i_2] [i_2 - 2] [i_2]), 18936))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_1] [i_2] [i_5] [i_6 + 2] = ((var_14 || ((max((arr_13 [i_2]), (arr_5 [i_0] [i_0] [i_2 + 1] [i_2]))))));
                                var_21 = (arr_19 [i_0] [i_0] [i_2] [5] [i_6] [i_1] [10]);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_7] [i_1] [i_7 - 1] [i_7] = -27;
                    arr_25 [i_7] = (((((19273 ? (arr_15 [i_7] [i_0] [i_0] [16] [i_0]) : (arr_5 [i_7] [i_1] [i_0] [i_7])))) ? (arr_17 [i_0] [i_7 + 1] [16] [i_7 + 1] [i_7 + 1]) : 3723254055631668323));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_22 ^= 233;
                        arr_30 [i_8] = (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [12] [18] [12]) : var_16));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_10] [i_8 - 1] [6] = (((arr_10 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1]) || (arr_10 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1])));
                        var_23 = var_4;
                    }
                    var_24 = (~40309);
                    var_25 *= ((0 ? (-27526 % -6575988542168781878) : (arr_5 [i_1] [i_1] [i_1] [i_1])));
                    arr_36 [i_0] [i_0] [i_0] = ((((arr_1 [i_0] [18]) ? var_11 : (arr_2 [i_0]))));
                    arr_37 [i_0] [i_0] [i_8 - 1] = var_17;
                }
            }
        }
    }
    var_26 = (max(var_26, 6575988542168781877));
    var_27 = ((((((min(var_11, var_7))) ? (((var_6 ? var_12 : var_15))) : ((var_3 ? var_5 : var_1))))) ? ((~(~var_3))) : (!var_13));
    #pragma endscop
}
