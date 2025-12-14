/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = ((((max(var_6, 0))) ? (((~255) ? 1 : 255)) : ((~(arr_5 [i_1] [i_1 - 1])))));
                                var_18 = (!6);
                                var_19 = (min((((250 >> (((arr_5 [i_0] [i_1 - 1]) + 2064709371))))), (((((arr_11 [i_0] [i_0] [i_0] [i_0] [15]) ? var_5 : 0)) + ((var_2 ? 14505659171627668331 : var_13))))));
                                var_20 -= ((((~(~242))) >> ((((179 ? ((1 ? var_16 : 255)) : (max(-1925605255, var_5)))) - 11383299555674612589))));
                            }
                        }
                    }
                }
                var_21 = (arr_3 [i_0] [i_0]);
                var_22 = ((((((arr_11 [7] [i_1 - 1] [7] [i_1 - 1] [i_1]) ? var_1 : (arr_2 [i_1 - 1] [i_1 - 1])))) & ((1450613739 ? var_0 : var_11))));
                var_23 = (min(1674610004, 576460752303357952));
            }
        }
    }
    var_24 = (min(var_24, ((var_1 << (var_1 - 80)))));
    #pragma endscop
}
