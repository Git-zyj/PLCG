/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_11 << (var_11 - 231))));
    var_13 = (((((var_0 ? var_6 : ((var_2 ? var_5 : var_1))))) ? var_11 : ((var_4 ? var_6 : var_8))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((var_1 ? var_1 : (((var_5 ? var_8 : var_4))))))));
        arr_3 [16] = (((var_2 ? var_9 : var_6)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((var_6 ? var_7 : var_4)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_21 [i_1] [i_2] [i_1] [6] [i_5 - 2] = (((((var_8 ? var_6 : var_6))) ? ((((var_8 != var_6) ? (var_11 * var_7) : var_7))) : var_4));
                            var_15 = (min(var_15, ((((((var_0 > var_0) <= var_9)) ? var_5 : var_0)))));
                        }
                        var_16 = (min(var_16, var_0));
                        var_17 = (min(var_17, (((((((var_6 ? var_2 : var_4)))) ? var_10 : (((((var_6 != var_4) <= var_1)))))))));
                        arr_22 [i_1] [i_2] = ((((var_6 ? var_11 : var_2)) / (((var_0 ? var_6 : var_11)))));
                    }
                }
            }
        }
    }
    var_18 &= (((((((((var_7 ? var_0 : var_11)) + 2147483647)) << (var_7 - 94)))) ? var_1 : var_2));
    #pragma endscop
}
