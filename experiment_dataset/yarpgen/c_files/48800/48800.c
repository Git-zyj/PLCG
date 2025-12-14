/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1 > 42);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max((max(var_8, ((49 ? 1 : 1)))), ((var_5 ? (4294967290 || -20581) : ((max(var_0, 1)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = (((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [7]) : var_5));
            var_15 = (max(var_15, (arr_4 [i_0] [i_0] [5])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_16 = var_1;
                            var_17 = (~240);
                            arr_14 [i_4] [i_3] = var_6;
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [i_0] [i_0] = ((1 ? -5 : 20042));
            var_18 += (!4080825559);
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_19 = (min(var_19, 4080825530));
                                var_20 = (max(var_20, var_2));
                                arr_32 [i_6] [i_8] [i_8] [5] [i_9] [11] = 208;
                                var_21 = (((((255 ? ((240 ? var_7 : var_1)) : ((var_1 ? var_5 : var_7))))) ? (((((min(1, 346246419))) ? (arr_27 [i_6]) : ((255 ? -20603 : -54))))) : ((var_6 ? (((min(1, 1)))) : var_10))));
                                var_22 = 192;
                            }
                        }
                    }
                    arr_33 [i_8] = 1;
                }
            }
        }
        arr_34 [i_6] [i_6] = (max(208, ((((((var_4 ? var_3 : 80))) ? var_2 : 3429486663496797021)))));
    }
    #pragma endscop
}
