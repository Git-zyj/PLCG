/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_13 += 1;
                        var_14 *= 0;
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_15 = (max(var_15, 65526));
                        var_16 = (min(65516, 13));
                        var_17 = (((min(12160286039269101728, var_7)) > -12160286039269101724));
                        arr_16 [i_0] [i_0] [i_0] = var_3;
                        var_18 = (((((min(2825, 0)))) ^ (~var_8)));
                    }
                    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_19 &= (-var_10 <= -12834769452170492612);
                        var_20 = (min(var_20, (~1)));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1 + 2] [i_2 + 1] [8] [i_0] = 15;
                        arr_23 [i_0 + 1] [4] [i_0] [1] [i_6 + 1] = 4455;
                        arr_24 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_0] = (~var_1);
                        var_21 = var_5;
                    }
                }
            }
        }
    }
    #pragma endscop
}
