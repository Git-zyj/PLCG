/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_1, var_15)) % -18049));
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 -= ((!(((-(arr_5 [i_0] [i_1]))))));
                var_23 = (((((-1128544998 << (((((arr_3 [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : var_19)) - 25067))))) ? (arr_0 [i_0]) : ((max(18048, var_0)))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_24 = (min(((var_18 ? (arr_4 [4] [i_1] [i_1]) : (arr_3 [i_1]))), ((var_14 ? (arr_3 [i_1]) : (arr_3 [i_1])))));
                    var_25 = (min(var_25, ((((~var_12) ? (((((arr_0 [i_0]) && (arr_2 [i_0] [i_0]))) ? (~86) : (((arr_7 [i_0] [i_1] [i_2] [i_2]) ? 805306368 : (arr_6 [i_0] [i_1] [i_2] [i_2]))))) : (arr_4 [i_2] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] = var_10;
                                var_26 = (arr_8 [i_0] [i_1] [i_1] [i_3] [i_4]);
                            }
                        }
                    }
                    var_27 += (min(((18080 ? (arr_0 [i_1]) : (arr_0 [i_0]))), (arr_0 [i_0])));
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_28 = (min(var_28, (arr_3 [i_0])));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_29 = 1362480244290701974;
                                var_30 = ((((var_7 + 9223372036854775807) << (((max(var_7, var_13)) - 1365557665459003503)))));
                            }
                        }
                    }
                    var_31 += (((1362480244290701974 < (((arr_16 [i_5 + 3] [i_5] [i_1] [i_0]) ? var_1 : var_13)))));
                    var_32 *= ((-var_13 ? (((-(arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5 + 1])))) : var_1));
                    var_33 = (min(var_33, ((((18 ? -503390329555871919 : -18065))))));
                }
            }
        }
    }
    var_34 = ((var_9 ? (((var_11 && 4981867752113480907) ? var_1 : ((var_9 ? var_1 : var_17)))) : ((-(max(3379639275, var_17))))));
    #pragma endscop
}
