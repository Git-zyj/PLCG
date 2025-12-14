/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~(max(var_5, var_6))))) ? 11453853209451496158 : (((3003408566 ? (((var_9 ? 1 : var_11))) : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = (((65535 - 1) ? ((1 >> ((((0 ? -1 : 3477516059)) - 3477516037)))) : ((((min(var_10, 4735111953171579211)) < var_1)))));
                            arr_11 [i_1] [i_1] = 2147483643;
                            var_13 = ((((max(0, 1528159384757714860))) ? ((((arr_9 [i_1] [i_2] [i_1] [i_0]) ? (arr_0 [i_1]) : var_3))) : (((var_1 ? (arr_1 [i_1] [13]) : var_2)))));
                            var_14 = 1;
                            var_15 &= (((!((min((arr_7 [i_1] [i_1]), (arr_1 [i_0] [i_3])))))));
                        }
                    }
                }
                arr_12 [i_1] [i_1] = 1;
                var_16 = (max((((var_1 ? 0 : 1))), (((!(arr_3 [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    var_17 = var_11;
    var_18 ^= (min(var_3, (~65529)));
    #pragma endscop
}
