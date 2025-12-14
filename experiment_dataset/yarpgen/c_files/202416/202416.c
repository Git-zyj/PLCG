/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 *= ((((var_5 & var_4) ? (!var_3) : (~var_9))));
        arr_4 [i_0] = (((min((min(var_6, var_3)), (1 - var_12))) ^ (((min(var_10, var_1))))));
        var_14 = var_5;
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_15 = ((max(var_2, (min(var_11, var_4)))));
                        var_16 = (max(((var_3 ? ((50 ? var_0 : var_7)) : ((min(50, 18879))))), var_0));
                        var_17 |= 747859766;
                        arr_18 [i_3] [i_2] [i_2] [i_3] |= (min(var_9, var_0));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_18 *= (((var_0 & var_11) ? -var_10 : var_7));
                        var_19 = (min(((11059474653432083185 - ((min(-1556198129, var_12))))), ((((17126570404185706855 < -32764) + var_0)))));
                        arr_27 [11] [i_5] [i_6] [i_5] = ((~(min((min(var_9, 11059474653432083199)), (var_4 - 182)))));
                        arr_28 [i_6] = (max(65533, (min((min(var_1, var_5)), (((var_8 ? 0 : var_2)))))));
                        arr_29 [i_1 + 1] [i_6] = ((((((min(747859766, 84)) >> ((((var_2 ? var_4 : var_7)) - 1311367579))))) ? var_2 : var_6));
                    }
                }
            }
        }
        var_20 = (((((min(var_3, var_10)) + ((min(var_0, 56054))))) / var_5));
        arr_30 [i_1] = var_5;
    }
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        var_21 = (((~var_8) >= var_11));
        arr_35 [i_8] [i_8 + 2] = ((min((var_7 && -32765), (var_8 * var_5))));
        var_22 = (((max(var_9, var_7))) / var_8);
        var_23 = var_3;
    }
    var_24 &= var_6;
    #pragma endscop
}
