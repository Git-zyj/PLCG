/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 3935821395;
    var_12 = ((var_3 ? var_5 : 1));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = 127;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 = var_9;
                        var_15 = (min(var_15, -65));
                    }
                }
            }
            var_16 = (min(var_16, ((((var_3 ? -32766 : var_0))))));
            var_17 = ((169 ? 32766 : -32763));
        }
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        var_18 = (min(var_18, (((var_10 ? ((max(0, -32766))) : ((-32763 ? var_7 : 255)))))));
        var_19 = (min(var_19, 32766));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_20 [i_5] [i_5] [i_5] [i_5] = ((((((((192 ? var_6 : -3484104585368368855))) ? ((var_8 ? -808577673 : var_5)) : (((5692 ? -771408459 : 2677413585)))))) ? (-32767 - 1) : 58103));
                        var_20 = 65535;
                        arr_21 [i_4] [i_5] [i_4] [i_5] [i_7] [i_7] = var_6;
                        arr_22 [i_4] [i_5] [i_5] = ((var_5 ? ((65526 ? 2337709871 : 32)) : (((((var_10 ? 1 : 8796025913344))) ? (min(-32763, 2337709871)) : (((1 ? -32755 : 32766)))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_21 = ((-89 ? -1 : 1235522916));
                            var_22 = ((((max((~32755), ((var_1 ? 60 : var_6))))) ? (((!-80) ? var_0 : 66)) : -63));
                        }
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            var_23 ^= var_1;
            var_24 = -35;
        }
        var_25 = var_6;
    }
    #pragma endscop
}
