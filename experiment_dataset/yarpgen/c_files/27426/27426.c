/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((min(65, (arr_9 [i_0] [i_1] [i_0]))))));
                    var_22 ^= (~(min(-29667, var_18)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((((((var_15 ? -67 : (arr_0 [i_0] [i_0])))) ? (arr_7 [i_0]) : (min((arr_8 [i_0] [i_3] [i_4]), var_2))))) ? ((min((((!(arr_2 [i_0])))), (arr_11 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1])))) : 71)))));
                                var_24 *= (((min(-74, (max((arr_6 [i_0] [i_1]), -9223372036854775792)))) & (((~((((arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4 - 2]) <= var_5))))))));
                                var_25 = ((-(((!((min(var_1, var_16))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_13, var_9));
    var_27 = var_16;
    #pragma endscop
}
