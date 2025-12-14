/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 0;i_4 += 1)
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_0] [i_4] = (((arr_9 [i_4 + 1] [22] [22] [i_3] [9]) % (arr_4 [i_0] [i_1])));
                                var_16 = (min(var_16, ((((arr_0 [i_0]) ? ((max((max((arr_3 [i_0] [i_1]), 1638875086)), ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) <= -19559)))))) : var_10)))));
                                var_17 = ((max(-2055734335, -2055734322)));
                                var_18 = ((((-19567 & (-2055734322 >= 19545))) << (-var_14 + 1854304173)));
                            }
                            var_19 = (max(var_19, (((+(((arr_4 [i_1] [i_2]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_1] [i_3]))))))));
                            var_20 = ((!((((arr_5 [i_3]) ? (arr_3 [i_0] [i_0]) : (-19560 <= -19558))))));
                        }
                    }
                }
                var_21 -= ((min(-112, 2055734349)));
            }
        }
    }
    var_22 = (max(18961, -405765431));
    var_23 = ((min(var_10, (((-20705 ? var_8 : var_11))))));
    #pragma endscop
}
