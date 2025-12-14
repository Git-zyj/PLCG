/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(1533123863, 25696));
    var_15 *= 25710;
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = var_5;
                            var_18 = (arr_0 [i_1]);
                            arr_9 [16] [16] = 25710;
                            var_19 ^= (max((arr_6 [i_0] [i_1 + 2] [i_2] [i_1]), (max((arr_6 [i_0] [i_1] [i_1] [11]), ((var_13 ? 487526757 : 16412551652066043553))))));
                            arr_10 [i_0] [i_0] [i_2] = ((~((((max((arr_0 [2]), 1658285474))) ? (((max((arr_6 [11] [i_1] [i_2] [i_3]), var_2)))) : (((arr_8 [i_0] [i_0] [1] [i_0] [i_0] [i_0]) ? (arr_2 [i_2]) : var_5))))));
                        }
                    }
                }
                var_20 *= (max(((39826 << (var_7 - 612713252947037006))), 25720));
                arr_11 [i_0] = (arr_0 [i_0]);
            }
        }
    }
    var_21 = -var_7;
    #pragma endscop
}
