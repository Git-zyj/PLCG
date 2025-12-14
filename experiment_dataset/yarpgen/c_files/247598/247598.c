/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_2 || var_8) ? var_5 : ((var_14 ? var_14 : var_6))))) ? (var_6 + var_4) : var_11));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((var_8 / var_2) || (var_0 <= var_2)));
        var_17 = (min(var_17, (((var_12 && (var_11 * var_2))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (((((((8097400174337636872 ? var_0 : 8097400174337636872))) ? var_11 : 15330))) ? var_15 : ((var_11 ? var_7 : var_3)));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_2] [i_4 + 2] = ((var_4 / var_5) & (((var_7 ? ((var_12 ? var_11 : var_8)) : var_11))));
                        arr_17 [i_4] [i_3] [i_3] [i_2] [i_1] = var_1;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_18 = ((var_10 - var_6) ? (((-32767 - 1) ? 1 : -8255615587372433303)) : var_5);
                            var_19 = (((((var_2 ? var_12 : var_3))) ? (((var_11 - var_7) - (var_11 != var_11))) : var_4));
                            arr_24 [i_7 + 3] [i_6] [i_5] [i_2] [i_1] = ((var_10 < var_10) ? var_11 : (8097400174337636886 && 9223372036854775807));
                            var_20 = var_13;
                            var_21 = ((((((((var_13 ? var_13 : var_4))) ? (var_0 / var_5) : var_3))) || ((((8097400174337636886 + 0) & var_9)))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_34 [i_1] [i_2] [i_8] [i_9] [i_10 - 2] = (var_2 ? -10798 : 8481264568165479015);
                            arr_35 [i_1] [i_2] [i_8] [i_9] [i_10] = (((var_11 <= var_11) <= (((-1204980535089019395 ^ 8688) ? var_0 : var_15))));
                            var_22 = (min(var_22, (((((var_8 ? var_15 : var_5)))))));
                        }
                    }
                }
            }
            var_23 = (min(var_23, ((8097400174337636886 ? ((-28702 ? 10798 : -9223372036854775807)) : -9223372036854775807))));
        }
    }
    #pragma endscop
}
