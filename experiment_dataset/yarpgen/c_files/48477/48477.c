/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, 2147483641));
                                var_21 = ((~((0 ? 11 : 65529))));
                                var_22 -= var_18;
                            }
                        }
                    }
                    var_23 = var_7;
                }
            }
        }
        arr_14 [8] [8] = (((((((var_1 < (arr_2 [i_0] [i_0]))) ? (min(var_12, var_16)) : (10232 && 0)))) ? var_0 : (((var_1 + 0) ? var_9 : (((arr_12 [i_0]) ? 0 : var_3))))));
    }

    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        var_24 = var_19;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                {
                    var_25 = (min((((var_6 <= (arr_10 [i_5] [13] [i_5] [11] [i_6] [i_7 - 2])))), ((-((min(10252, var_18)))))));
                    var_26 |= (max((arr_7 [i_5 - 2] [i_6 - 1] [i_6]), (arr_19 [i_7])));
                }
            }
        }
    }
    var_27 = (max(var_27, var_1));
    #pragma endscop
}
