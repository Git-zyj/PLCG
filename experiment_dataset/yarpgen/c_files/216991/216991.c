/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 = var_0;
        arr_2 [i_0] [i_0] = var_5;
    }
    var_11 -= (~1335690861);

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_12 = -var_1;
        var_13 -= var_2;
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_14 = 2825797193;
        var_15 = 8641641619749373119;
        var_16 = -var_3;

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_17 |= -8070273418713539235;
            var_18 = var_6;
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_19 = 8070273418713539209;
            var_20 = (~var_3);
            arr_12 [i_2] = 846025791;
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            arr_17 [i_2] [1] [i_5] = ((!(~var_0)));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_21 = 255;
                        arr_22 [i_2] [i_2] [i_2] [i_6 - 1] [i_7] = -var_4;
                        var_22 = 22;
                        var_23 = -8070273418713539210;
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_24 = var_9;
            var_25 = (min(var_25, (~61447)));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            var_26 = (min(var_26, var_7));
            arr_27 [i_2] [i_9] [i_2] = 1131708613;
            arr_28 [i_2] = var_6;
            arr_29 [2] [i_2] [2] &= -1;
            arr_30 [i_2] [i_2] = 1;
        }
    }
    #pragma endscop
}
