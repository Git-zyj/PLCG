/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_11;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((var_1 > var_6) ? var_3 : (min(var_5, var_10))));
        arr_4 [i_0] = (~(((((var_7 ? var_6 : var_0))) ? var_9 : var_13)));
        var_16 = (min(var_16, (((89 << ((((-var_9 ? var_6 : var_12)) - 10155382609534255868)))))));
        var_17 = ((min(var_10, var_0)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] = ((!((((((var_0 ? var_3 : var_12))) ? (((min(-121, 96)))) : ((var_11 ? var_0 : var_6)))))));
        arr_10 [i_1] [i_1] = (((((var_14 ? ((var_3 ? var_8 : var_0)) : var_1))) ? var_13 : (((var_1 ? ((var_0 ? var_14 : var_8)) : var_5)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            {
                arr_15 [i_3] [i_3] [i_3] = ((~(((26247 >= 16697714649381468381) ? var_0 : ((var_11 ? var_9 : var_10))))));
                arr_16 [i_2] [i_3] = (!var_13);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_18 = (!-var_8);
                            var_19 *= ((!((((((var_11 ? var_11 : var_5))) ? ((var_14 ? var_5 : var_2)) : (var_0 >= var_7))))));
                        }
                    }
                }
                var_20 = ((min(var_12, ((var_11 ? var_9 : var_6)))));
                var_21 = (min(var_21, (((16697714649381468381 ? 4130961007174807045 : (!112))))));
                var_22 = (max(var_22, (((((var_4 ? var_14 : var_13)) >> (var_6 + 30))))));
            }
        }
    }
    var_23 = ((~((((~var_6) == ((var_5 ? var_13 : var_12)))))));
    #pragma endscop
}
