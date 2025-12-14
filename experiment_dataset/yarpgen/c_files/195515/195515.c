/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (((min(8291665189370575739, 188))) ? ((4611686018427387872 / (var_9 - var_4))) : (((204 - (arr_6 [i_0] [i_0])))));
                    var_17 = (188 ? 0 : ((((var_2 ? -834676334782380286 : (arr_0 [0] [i_0]))) - -6204007648088177716)));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_18 = ((!(((3 ? 122 : 492817257502208389)))));
                        var_19 = var_15;
                        var_20 = (-var_12 - -7287063766655336743);
                    }
                }
            }
        }
    }
    var_21 = (-834676334782380286 ? ((-(max(-6185533360931941398, var_3)))) : var_7);
    var_22 = ((min(((-3 ? 7537145278654445709 : 834676334782380285)), 246)));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_4] [i_6] = (16 ? var_7 : ((-4611686018427387873 ? 0 : 138)));
                    var_23 = ((~((+((min((arr_12 [17] [9]), 82)))))));
                }
            }
        }
    }
    #pragma endscop
}
