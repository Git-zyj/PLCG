/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_8 [i_0] [i_0] [i_2] [i_3] [i_1] [i_3] = (((((var_4 ? var_6 : var_8))) ? var_5 : (var_5 <= var_2)));
                        var_17 = (max(var_17, (((((var_16 ? var_5 : var_15)) << (((((var_6 + 9223372036854775807) << (var_5 - 3862961607))) - 7146731461427424353)))))));
                        arr_9 [i_0] [i_0] = (((((var_6 ? var_3 : var_12))) ? ((var_14 ? var_12 : var_15)) : ((var_14 ? var_0 : var_11))));
                        var_18 = (min(var_18, (((var_6 ? (var_11 + var_4) : ((var_10 ? var_10 : var_13)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [9] [i_0] = (((((var_14 ? var_4 : var_12))) ? ((var_4 ? var_13 : var_11)) : ((var_4 << (var_8 - 92)))));
                        arr_14 [i_0] [i_0] [i_2] [i_2] = var_7;
                        arr_15 [i_0] [i_0] = (((((var_15 ? var_6 : var_5))) ? (((var_13 << (var_8 - 91)))) : ((var_1 ? var_0 : var_6))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, ((((((var_15 ? var_16 : var_6))) ? (((var_11 << (var_7 - 15503)))) : var_5)))));
                        var_20 = (max(var_20, ((((((var_10 ? var_10 : var_16))) ? (var_8 + var_7) : (var_1 - var_1))))));
                        arr_18 [i_0] [0] [i_2] [i_0] = (((((var_6 ? var_16 : var_2))) ? ((var_9 ? var_14 : var_0)) : (var_13 && var_3)));
                        var_21 = (((((var_7 ? var_10 : var_9))) ? var_9 : ((var_13 ? var_7 : var_9))));
                    }
                    var_22 = (min(var_22, (((((var_12 || ((max(var_4, var_16))))) ? ((((min(var_12, var_16))))) : (max(var_5, (var_8 / var_9))))))));
                }
            }
        }
    }
    var_23 = (min(var_23, (((((var_12 ? ((var_6 ? var_16 : var_13)) : var_7)) << ((((var_1 + ((var_16 ? var_2 : var_5)))) - 3986910577)))))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_24 = ((((((var_4 ? var_9 : var_7))) ? (((var_6 + 9223372036854775807) >> (var_4 - 6977))) : var_12)));
                arr_24 [i_6] [i_6] [i_6] = ((((((var_8 / var_3) ? (var_14 & var_4) : (var_12 || var_10)))) ? var_16 : ((((var_0 && var_12) || var_14)))));
            }
        }
    }
    #pragma endscop
}
