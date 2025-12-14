/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((-15255 > var_9) >= -0)))) >= (~var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((((((min(var_1, -4292684271519015712))) ? var_12 : var_10)) + 9223372036854775807)) << ((((var_6 & ((var_14 ? var_3 : var_9)))) - 532543556))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] = (((((var_7 ? var_7 : 15))) ? (((((41706 ? var_7 : 1055785210))) ? var_12 : (((0 ? 0 : var_13))))) : (27 != 120)));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = (max(var_1, var_10));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((-((var_8 ? var_12 : var_8))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 21;i_5 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((!var_11) >= ((4294967295 ? var_5 : var_12))));
                                var_16 ^= -0;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_17 = (min(var_17, ((max((((var_5 * 116) ? -var_7 : (!0))), (((!(((var_8 ? -16 : var_6)))))))))));
                                var_18 *= ((max(var_13, var_3)));
                                arr_22 [i_0] [i_1] [i_1] [i_0] [i_6] = (((!var_4) << (((((-18 ? 4292684271519015729 : 116))) ? (!var_13) : (!0)))));
                                var_19 *= ((((((var_1 ? var_3 : -6)) - (var_7 < 0))) * (((!((min(var_5, 19988))))))));
                                arr_23 [i_3 - 1] = -21;
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                arr_27 [i_7] [i_3] [i_2] [i_2] [i_1] [i_0] = var_14;
                                arr_28 [i_0] [i_1] [i_3] [i_7] = (-2147483647 - 1);
                                arr_29 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = -1;
                                arr_30 [i_0] = (76 == var_6);
                            }
                            arr_31 [i_0] = ((((max((max(var_6, 0)), ((max(121, var_4)))))) & (((((var_14 ? var_6 : var_8)) > -var_2)))));
                            var_20 = (max(((((-124 == var_2) ? var_3 : -32))), ((-(~var_8)))));
                            arr_32 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = (min((((var_14 ? -2968459111 : ((-32 ? -28 : var_9))))), (max(-2340918087141748361, -1))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (-(max(var_4, var_12)));
    #pragma endscop
}
