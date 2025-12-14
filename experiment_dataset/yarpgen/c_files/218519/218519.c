/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(((var_5 ? ((136 ? 4935585742907731084 : 8670176800455811902)) : 79)), (var_12 ^ var_1)));
    var_15 -= var_10;
    var_16 = (min(var_16, -8670176800455811899));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((~(min((var_12 * 10991615818430418706), (((-904475997 & (arr_3 [i_1] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] = ((-128 & (min(1, var_1))));
                                var_18 = var_10;
                            }
                        }
                    }
                }
                var_19 = (min(var_19, ((((-9223372036854775807 - 1) & (((((79 ? -15517 : -11742))) ? (((-30960 ? 19 : 37893))) : -28)))))));
                var_20 = (((arr_9 [i_0] [i_1 - 3] [i_1 - 3] [i_1 - 3]) ? ((var_3 ? (arr_9 [i_1] [i_1 + 4] [i_1] [i_1]) : 32764)) : (-22 <= 23582832883164725)));
                var_21 = (max(var_21, ((((arr_11 [i_1 + 4] [i_1 + 3] [i_1 - 2] [i_1 - 3] [i_1 + 2] [i_1 + 2]) >= var_11)))));
            }
        }
    }
    #pragma endscop
}
