/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 3151514937;
    var_20 += ((524288 ? ((((1 < var_11) ? -836092117 : var_14))) : ((var_4 ? 836092129 : var_0))));
    var_21 = (((((var_6 ? (~var_2) : (var_6 / var_8)))) ? ((-var_3 ? ((max(var_16, -15))) : (min(var_15, var_0)))) : -571662806));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = (((((-7222 ? (((((arr_5 [i_0] [i_2] [i_4]) <= -836092130)))) : (max(var_9, (arr_7 [i_1] [i_2])))))) || (((((arr_9 [i_0] [0]) ? (arr_5 [i_0] [i_0] [2]) : -7222))))));
                                var_23 *= var_2;
                                var_24 = (((((-7011063807902606098 ? (((arr_1 [i_3]) ? 4294443013 : var_8)) : (((max(var_5, 7221))))))) ? (arr_1 [8]) : (arr_1 [i_0 - 3])));
                                arr_14 [i_0] [i_0] = (((max(var_3, (arr_9 [i_0] [i_0]))) <= ((((arr_4 [i_0]) ? 836092129 : 1543160049)))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_25 = var_11;
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_0] = -836092136;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (((((((var_2 ? -2 : var_8)) & ((var_17 ? var_14 : var_0))))) ? var_17 : ((3626219597 ? (var_13 * var_14) : (((var_0 ? var_6 : -6)))))));
    #pragma endscop
}
