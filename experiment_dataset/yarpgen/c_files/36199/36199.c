/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_17 = (min((min(((8652288382321181794 ? (arr_6 [i_0] [i_1]) : var_0)), (((arr_3 [i_0]) ? (arr_6 [i_0] [i_1]) : var_9)))), (!3635403730)));
                    var_18 = var_16;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_19 ^= var_15;
                        arr_12 [i_1] = ((min(var_9, (arr_2 [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_4] [i_4] [i_4] [i_1] [i_4] = ((var_7 ? ((min(var_5, (arr_3 [i_4])))) : (((arr_4 [i_1]) ? (max(var_15, -4869024176958252726)) : ((min(var_5, 2153709998)))))));
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_4] = ((~(((var_7 ? var_0 : var_8)))));
                        arr_17 [i_0] [i_1] [i_1] [i_4] = ((min((((arr_4 [i_1]) ? var_13 : (arr_2 [i_0]))), var_8)));
                    }
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_5] = arr_8 [i_1];
                    var_20 = (!2489314802);
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_21 -= (min((min((-89 == 34), 2153709998)), (min(0, 3635403727))));
                                var_22 = (min(var_22, var_7));
                            }
                        }
                    }
                    var_23 = (((arr_2 [i_0]) ? (max(var_11, (3130476498 - var_8))) : ((((arr_23 [i_0] [i_0] [i_0]) | (arr_23 [i_0] [i_1] [i_6]))))));
                    var_24 = (max(var_24, (((-(min((arr_5 [i_0]), 15467556874924448170)))))));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_25 = (((((((var_2 | (arr_24 [i_0] [i_1] [i_1] [i_10]))) + (arr_32 [i_1] [i_11 - 1])))) | (((((min(-5981371957865632627, -5981371957865632653)) + 9223372036854775807)) >> (((2153709992 || (arr_36 [i_0] [i_0] [i_0] [i_10] [i_11]))))))));
                                var_26 += ((((min((((-2529063189351671853 >= (arr_11 [i_9] [i_10] [i_0])))), (min(var_10, var_15))))) ? var_0 : 255));
                                arr_40 [i_11] [i_11] [i_11] [i_1] [i_1] = (((((~(3953072371 / var_13)))) ? (((((min(var_7, (arr_38 [i_0] [i_1] [i_1] [i_10] [i_11])))) ? var_13 : (((min(var_8, (arr_14 [i_0] [i_1] [i_1])))))))) : 1105364489294506308));
                                var_27 = (min(var_27, var_5));
                                arr_41 [i_0] [i_1] [i_1] [i_1] [i_11] = 1105364489294506313;
                            }
                        }
                    }
                    arr_42 [i_1] [i_1] [i_0] = ((-(arr_20 [i_0] [i_1] [i_0])));
                    var_28 = (max(var_28, (1 && 8242307717703410780)));
                    var_29 = (min((((((var_10 ? (arr_30 [i_1] [i_1] [i_9]) : (arr_28 [i_0])))) ? (var_4 & var_15) : (((arr_10 [i_0] [i_0] [i_9] [i_9]) ? -5981371957865632653 : var_13)))), var_11));
                }
                arr_43 [i_1] = (min(1894261150, (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])));
            }
        }
    }
    var_30 = (var_7 == var_5);
    #pragma endscop
}
