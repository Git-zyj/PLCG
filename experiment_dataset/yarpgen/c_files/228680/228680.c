/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((((2666816091273875985 ? -2666816091273875992 : ((((arr_2 [i_0]) ? var_16 : var_7)))))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((((max((arr_1 [i_0]), var_10))) ? var_17 : var_12))));
        var_18 += (min((((((min((arr_0 [10]), var_14))) ? var_5 : (arr_1 [i_0])))), (max(((min(-2666816091273875993, 16552))), ((var_10 ? 844424930131968 : var_4))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 += var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (arr_0 [i_2]);
                                var_21 = ((((max((arr_2 [i_0]), (((var_11 ? 251 : 16554)))))) ? ((var_8 ? (min(var_0, (arr_11 [i_0] [i_1] [i_2] [i_4]))) : (arr_11 [i_0] [5] [i_0] [i_0]))) : (min(((min(-2666816091273875986, 59812))), ((var_7 ? var_6 : var_10))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((((max(9, ((6 ? 65529 : 16527))))) ? (min(-2666816091273875986, 15)) : (~var_11)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] = ((((!(arr_12 [i_1 - 2]))) ? (((!var_1) ? var_0 : var_6)) : (((((!(arr_4 [i_6]))) ? (((max((arr_11 [i_0] [i_1] [9] [i_5]), var_7)))) : 17)))));
                                arr_22 [i_0] [i_0] [1] [i_0] [i_0] = 64;
                            }
                        }
                    }
                }
            }
        }

        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            var_22 = var_7;
            var_23 = (max(var_23, (min(((((~var_16) < (arr_5 [i_7 - 3] [i_7] [i_7 + 2])))), ((((max(-371177270541127083, var_12))) ? (((var_6 ? var_12 : var_9))) : (min(2, (arr_2 [i_0])))))))));
            arr_25 [i_0] &= (min((max(var_3, (((arr_10 [i_0] [9] [i_0] [i_0] [i_7] [i_7 - 1]) ? 5859379756103088059 : var_13)))), ((-1 ? ((var_9 ? 367731063 : (arr_15 [i_0] [i_0] [8] [1]))) : (arr_0 [i_0])))));
            arr_26 [i_0] [i_7] = (min(var_17, -123));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_24 = ((var_0 ? (arr_11 [i_0] [i_0] [i_0] [i_8]) : var_8));
            var_25 = (min(var_25, ((((((~(arr_23 [i_0] [i_8])))) ? ((((arr_9 [i_0] [i_8]) ? (arr_27 [i_0] [i_0] [i_0]) : (arr_27 [i_0] [i_0] [i_0])))) : ((((min(-99, 3971031693))) ? ((35184103653376 ? 1561548085 : (arr_24 [i_8]))) : 1)))))));
        }
    }
    var_26 = (-(max(-4282677883276711612, 254906316)));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            {
                var_27 = (min(((((max((arr_33 [i_9] [i_10 + 1]), (arr_33 [i_9] [i_10]))) <= (max(-2666816091273875990, 14))))), (((((var_1 ? var_1 : var_17))) - (max((arr_30 [2]), 12729306483113262307))))));
                var_28 = -2666816091273876001;
                var_29 = (max((((+(((arr_29 [i_9] [i_10]) ? (arr_34 [i_9] [i_10 - 1]) : (arr_29 [i_9] [i_9])))))), (max(var_0, (arr_34 [i_10] [i_10 - 1])))));
            }
        }
    }
    #pragma endscop
}
