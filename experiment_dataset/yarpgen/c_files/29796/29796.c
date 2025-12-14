/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 -= 1;
        var_20 = 1;
        var_21 = (min(var_21, 40));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = 106;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = 118;
                        var_22 -= -47;
                        var_23 = 138;
                        var_24 ^= 150;
                    }
                }
            }

            /* vectorizable */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_25 = 3;
                arr_15 [i_0] = 118;
                arr_16 [i_0] [i_1] [i_0] = 118;
                var_26 = (min(var_26, 58));
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_27 ^= 233;
        var_28 = 27127;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_29 = 3672447581;
        var_30 = 28;
        var_31 ^= 0;
        var_32 = (max(var_32, 4026990009));
    }
    var_33 = var_13;
    var_34 = var_1;
    var_35 = var_2;
    #pragma endscop
}
