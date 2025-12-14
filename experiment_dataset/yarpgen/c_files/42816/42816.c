/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = (!-var_9);
            var_13 = var_9;
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_14 = (max((min((max(var_4, var_9)), (((var_9 ? var_0 : var_12))))), (!var_5)));
                        arr_11 [i_4] [i_0] [i_4] [i_4] = (~((((max(var_3, var_2))) ? (min(var_2, var_4)) : (max(var_4, var_3)))));
                        var_15 = (min((((-(!var_7)))), (max((min(var_7, var_4)), (min(var_1, var_6))))));
                        var_16 = -var_4;
                        var_17 = ((((!(~var_1))) ? (max(var_3, (min(var_9, var_3)))) : (((((var_10 ? var_9 : var_12))) ? (max(var_12, var_0)) : (((35139 ? 3616 : 45)))))));
                    }
                    var_18 = (!var_9);
                    var_19 = ((-576460752303423487 ? var_1 : (((var_3 ? -var_10 : var_2)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_20 = ((~(~var_0)));
                                var_21 = var_8;
                                var_22 = (~(min((min(7195091658572454211, 135)), ((175 ? var_5 : 11251652415137097404)))));
                                var_23 = (((((!var_4) ? (((max(var_12, var_7)))) : (max(var_6, var_10))))) ? ((var_1 ? (!var_8) : (max(var_4, var_1)))) : var_10);
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] [i_0] = var_3;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_24 = (min(((((((var_2 ? var_1 : var_6))) ? ((max(var_5, var_7))) : ((var_11 ? var_1 : var_3))))), (((!var_6) ? ((var_0 ? var_11 : var_6)) : ((3616 ? var_10 : 12571179088443487790))))));

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_24 [i_7] = var_6;
            var_25 = (min(var_25, var_10));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_31 [i_7] [i_7] [i_7] [i_10] = ((~(min(0, 11251652415137097401))));
                        arr_32 [i_7] = var_9;
                    }
                }
            }
        }
        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            var_26 = (max(((((!var_2) ? (!var_7) : (~var_9)))), var_1));
            arr_36 [i_7] [i_11] = var_7;
            var_27 = (max(var_27, ((var_0 ? var_4 : ((((!((min(var_6, var_11)))))))))));
            var_28 ^= (max(((var_9 ? (min(var_9, var_1)) : var_12)), (!var_7)));
            var_29 = max((!var_9), (((((var_5 ? var_5 : var_2))) ? (max(var_6, var_5)) : -var_11)));
        }
        var_30 = (max(var_2, (max((min(var_3, var_12)), (!var_10)))));
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    arr_43 [i_7] [i_7] [i_7] [i_7] = var_5;
                    arr_44 [i_13] [i_13] [i_13] [i_7] = ((~(max((~248), var_4))));
                    var_31 = var_4;
                }
            }
        }
        var_32 = ((!(((-((var_7 ? var_0 : var_6)))))));
    }
    var_33 = var_3;
    var_34 = ((var_9 ? ((-(max(var_5, var_8)))) : (((~(~var_0))))));
    var_35 = var_9;
    #pragma endscop
}
