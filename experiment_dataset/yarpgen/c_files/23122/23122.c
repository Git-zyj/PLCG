/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((!(((var_7 ? 2438964990 : var_9))))))));
    var_19 *= (~var_9);
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0 - 2] [i_4] &= ((+(min((arr_14 [i_0] [i_0 - 3] [i_1] [i_4] [i_1] [i_4] [i_4]), (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_0 - 1] [i_4] [i_4])))));
                                var_21 = (((((-(~var_13)))) ? (((min((arr_3 [i_4]), 30)))) : ((((min(-57, 10673346784950171445))) ? ((var_14 ? 170 : 18446744073709551605)) : 1856002305))));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, (((+(min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 3]))))))));
            }
        }
    }
    #pragma endscop
}
