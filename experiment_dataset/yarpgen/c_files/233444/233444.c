/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 ? ((8624725723750793708 ^ (var_14 - var_5))) : var_6));
    var_19 &= var_2;
    var_20 = ((((~(-117 / 8624725723750793718)))) ? var_10 : var_9);
    var_21 = ((((var_15 ? (var_11 == -1) : -var_11)) ^ (((-4558478618544686141 > (-114 + 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_22 -= arr_1 [i_1 + 1] [i_0];
                var_23 = (-4558478618544686138 ^ (((((arr_6 [i_0] [i_0]) >= -4558478618544686123)))));
                var_24 = (((4558478618544686141 & 4558478618544686156) ? 11 : var_10));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_25 = ((!((max(38322, var_2)))));
                                var_26 = 114;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
