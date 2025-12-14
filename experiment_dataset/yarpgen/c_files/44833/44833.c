/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_5 ? (min(var_0, var_4)) : var_7))) ? (((!(((var_8 ? var_2 : var_8)))))) : ((((var_1 ? var_7 : var_3))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_11 &= (min(var_3, var_4));
        var_12 = (max((~var_0), ((var_4 ? (max(var_1, var_4)) : var_6))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_13 = ((!(((var_0 ? ((var_3 ? var_0 : var_8)) : (!255))))));
            var_14 += (max((max(var_9, var_3)), var_9));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_8 [2] [i_2] [i_0] &= (!var_8);
            arr_9 [i_0] = (max((((!(!var_7)))), ((var_1 ? -var_7 : (max(var_2, var_4))))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_15 &= var_4;
            var_16 = (((((max(var_6, var_3)) ? ((max(var_8, var_7))) : ((max(var_6, var_7)))))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_0] [18] [i_0] [i_6] [i_6] = (~var_8);
                            var_17 *= (((((137438953471 ? var_4 : (max(var_7, var_4))))) ? var_2 : ((((max(0, 137438953471))) ? var_4 : var_1))));
                            var_18 = ((~((var_9 ? var_1 : ((var_7 ? var_3 : var_2))))));
                            var_19 = (max(var_19, (((~(min(((var_3 ? var_1 : var_9)), ((max(var_8, var_8))))))))));
                        }
                    }
                }
            }

            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                var_20 = (min(var_20, (((min(var_3, (~var_4)))))));
                arr_23 [i_0] [i_3] [i_0] [i_0] = (min(((min((!var_4), var_3))), (min((!var_8), var_9))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_21 = var_3;
                            var_22 = ((((max(((var_4 ? var_2 : var_5)), ((max(var_4, var_2)))))) ? ((min(var_1, var_0))) : (~var_8)));
                            var_23 += ((min((max(var_0, var_3)), var_7)));
                            arr_29 [i_0] = (min((((!((min(var_8, var_9)))))), (((!var_6) ? (!var_0) : var_9))));
                        }
                    }
                }
                arr_30 [i_0] [i_0] [i_7] [i_0] = (max((!18446743936270598145), (~var_3)));
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {

                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    arr_37 [i_0] [i_3] [i_3] [i_0] [i_10] [i_11] = ((((((var_0 ? var_5 : var_6)))) ? (!var_9) : (((max(var_6, var_2))))));
                    arr_38 [i_0] [i_3] [10] [i_3] [i_11] = ((-((var_6 ? var_0 : var_0))));
                }
                var_24 += var_3;
            }
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {

                for (int i_13 = 2; i_13 < 20;i_13 += 1)
                {
                    arr_45 [i_0] [i_0] [i_0] [i_0] = (max(((max(var_0, var_9))), ((var_0 ? (min(137438953470, 1)) : ((var_9 ? var_9 : var_5))))));
                    arr_46 [i_0] [i_0] = ((~(((var_6 ? var_3 : var_5)))));
                    arr_47 [i_0] [i_12] [i_0] = (~var_4);
                    arr_48 [19] [i_0] [i_12] [6] [i_12 - 1] = var_2;
                }
                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {
                    var_25 *= (((-9223372036854775807 - 1) ? 1 : 252));
                    arr_52 [i_0] [i_0] [i_3] [i_0] [i_0] [i_14] = (max(((var_9 ? var_3 : var_8)), var_8));
                    var_26 *= ((var_4 ? (((var_5 ? var_8 : var_8))) : var_3));
                    var_27 = ((((((((var_7 ? var_8 : var_8))) ? -var_2 : var_5))) ? (min(((var_7 ? var_2 : var_9)), var_8)) : (!var_5)));
                }
                arr_53 [i_3] [i_0] = var_8;
                var_28 = (max(var_28, (((((max(1909, 1))) ? (((((min(var_7, var_7))) ? var_3 : ((min(var_6, var_8)))))) : (max(var_4, ((max(var_4, var_0))))))))));
            }
        }
    }
    var_29 = (((!var_6) ? (min(var_6, (max(var_5, var_0)))) : ((((!(((var_5 ? var_9 : var_4)))))))));
    var_30 = (min(var_30, var_3));
    #pragma endscop
}
