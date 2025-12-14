/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (max(var_14, 31685));
        var_15 = (min(var_15, 1));
        var_16 &= 76;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_8 [i_1] [i_1 + 1] [i_2] [i_1] = 76838569;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_13 [i_4] [i_3] [i_1] [i_1] [i_0] = 1;
                            var_17 = (min(var_17, 13443810167395363130));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [11] [i_3] [i_0] = 65535;
                            arr_18 [i_1] [i_1] [22] [1] [1] [i_1] [1] = 1;
                        }
                        var_18 = 1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_19 = 1;
        var_20 = (min(var_20, 1));
    }
    var_21 = var_4;
    #pragma endscop
}
