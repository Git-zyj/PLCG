/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((((min(-14180, var_12))) ? (65535 & 0) : var_7))) ? var_1 : (((~var_3) ? var_11 : -122)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (21 <= var_7);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (((((27965 ? var_1 : var_0))) ? (var_8 / var_11) : ((var_7 ? var_10 : 23662))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] = 0;
                        var_15 = 0;
                    }
                    arr_14 [i_1] = ((!(var_2 + 0)));
                    var_16 *= ((((((var_6 || var_7) ? var_5 : var_1))) ? (((min(var_6, var_4)) / (((min(var_3, -7089)))))) : (((~(var_7 / -27965))))));
                }
            }
        }
        var_17 = ((!(((~((min(4, 27965))))))));
        var_18 = (((((var_1 ? -27966 : var_11))) ? (-14167 | var_12) : -3931653191593687528));
        var_19 = ((!(var_9 / var_3)));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_20 *= var_10;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_21 = 0;
                        var_22 = ((!((min(var_6, (var_7 || var_4))))));
                        arr_27 [i_6] [i_6] [i_6] [0] [i_6] [i_5] = (!-3931653191593687527);
                    }
                }
            }
        }
        var_23 = ((((min((min(var_10, var_4)), (var_1 && var_0)))) ? (var_10 * 8556380160) : (~var_7)));
    }
    var_24 = (((((~var_12) ? (var_5 | var_9) : (var_9 | 27963)))) ? ((~(var_3 ^ 554153860399104))) : (((var_12 ? (min(var_4, var_11)) : (1 ^ var_3)))));
    var_25 = ((12288771405877553425 ? 27963 : 1));
    #pragma endscop
}
