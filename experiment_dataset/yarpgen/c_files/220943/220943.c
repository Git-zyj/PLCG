/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((1 + -var_0) ? ((var_3 & (var_10 * 1))) : (((((((23769 ? -23770 : 4423))) <= var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min(var_9, var_0));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_1] = ((((((-23769 + 2147483647) >> (7896392247368609574 - 7896392247368609568)))) ^ 10636656148581064650));
                            arr_12 [i_1] [i_1 - 2] = var_8;
                            arr_13 [i_1] = (min((((-64 ? 1 : -23750))), (min(var_3, 0))));
                            arr_14 [i_1] = (((((-7896392247368609574 ? 23783 : (1048572 && 23783)))) ? (((0 ? 23769 : 0))) : 0));
                            var_12 &= ((var_10 ? 120 : 1));
                        }
                    }
                }
                var_13 = (min(1578431079, (((~-3891421695636674500) ? 1 : (3413392294 % var_1)))));
            }
        }
    }
    var_14 = -1;

    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        arr_19 [i_4] = (((((1662649525 ? -1349169788439891429 : 65535))) ? ((((min(var_9, 65535))))) : (((var_4 && var_9) ? (min(var_6, var_5)) : (1875326601972119027 || var_4)))));
        var_15 = (((min(0, -123))) || (!var_10));
        var_16 = ((((((((arr_16 [i_4] [i_4]) ? 0 : var_6))) ? 1 : 143)) + (23778 + 9266)));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_17 = (((!743312520) > (!8191393891351996537)));
        var_18 &= (~((((18446744073709551614 * 23768) && ((min(0, 29489)))))));
        var_19 = ((((max(39604, 1))) ? (((((var_3 * (arr_6 [i_5] [i_5] [i_5] [4])))) ? 0 : (arr_20 [0]))) : 1));
    }
    #pragma endscop
}
