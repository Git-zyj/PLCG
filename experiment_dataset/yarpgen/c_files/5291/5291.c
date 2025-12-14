/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (var_7 - var_5);
                    var_18 -= (((var_1 && var_10) + ((var_14 ? -var_8 : (var_5 + var_3)))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_19 = (max(var_19, (((~(!var_5))))));
                        var_20 -= (!var_9);
                        var_21 -= ((~(!1)));
                        var_22 -= ((~((var_14 ? var_7 : var_4))));
                        var_23 = (min(var_23, (1 * var_2)));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_24 = (((var_5 || var_11) ? var_6 : -var_12));
                        var_25 = (((!4112261465) ? ((12900 ? (!var_9) : (!var_8))) : (((var_10 || (!var_1))))));
                        var_26 = (((((var_15 & var_10) & var_14)) != -var_3));
                        var_27 = (max(var_27, ((((((-((var_9 ? var_1 : var_7))))) ? ((~(var_11 / var_7))) : var_11)))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_28 -= (((var_15 ^ var_6) % ((-(var_3 | var_14)))));
                        var_29 = (!var_1);
                        var_30 = (min(var_30, ((((var_9 & var_16) | (~var_9))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                var_31 = -var_2;

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_32 = ((-((var_11 ? var_14 : (((var_12 ? var_8 : var_12)))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_33 = (var_8 && var_9);
                        var_34 = ((-var_3 - (!var_2)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
