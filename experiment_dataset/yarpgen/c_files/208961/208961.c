/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] = (min(var_15, 4294967292));
                            var_18 &= (!var_6);
                            var_19 = (~(!var_11));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_13 [i_4] = ((4294967276 ? ((((var_7 ? var_5 : var_2)))) : (((((var_4 ? var_6 : var_4))) ? 4294967287 : (((1973048497 ? var_2 : var_12)))))));
                    arr_14 [i_0] [i_4] = var_8;
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_20 = var_6;
                    var_21 = (min(var_21, var_2));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        var_22 = ((var_11 ? var_1 : var_12));
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((((max(2268420699, var_10))) ? var_1 : (max(var_0, var_14))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_23 = (min(var_23, (((5418676648153024593 ? ((54321 ? var_1 : 91570072)) : var_13)))));
                            var_24 = (((var_14 ? var_0 : var_10)));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] = (((var_8 ? var_12 : var_4)));
                            var_25 = ((((min(((var_16 ? var_10 : var_8)), var_7))) ? (max(((2064217234040526798 ? var_4 : 2268420707)), 144131539)) : (((4294967276 ? 3467 : var_13)))));
                            var_26 = (min(var_26, var_3));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_34 [i_10] [i_7] [i_6] [i_1] [i_1] [i_0] [i_0] = (var_1 ? (((var_10 ? var_13 : -15))) : ((var_14 ? 3 : 39)));
                            var_27 = 2268420699;
                        }
                    }
                    var_28 = (max(var_28, (((~(((var_0 ? var_7 : -253653266))))))));
                    var_29 = (((((max(550076506, -2007406443)))) ? var_5 : var_5));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_30 = ((max(-15, var_10)));
                                var_31 = (min(var_31, var_10));
                                var_32 = (((29 ? var_12 : ((var_14 ? var_8 : var_10)))));
                                var_33 = (min(var_33, ((((max(var_11, var_16))) ? var_14 : 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = var_9;
    #pragma endscop
}
