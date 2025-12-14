/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_17 = var_14;
                        arr_9 [i_0] [i_1] [i_1] = (~var_4);
                    }

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_4] = ((min(2017612633061982208, -16429131440647569429)));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = 16429131440647569408;
                    }
                    var_18 = (min((~-1), (min(var_8, 12558))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_6] [i_6] [i_6] = -98;
                    var_19 = (min(var_12, (min(-98, 14755))));
                    arr_23 [i_6] [i_5] [i_5] [i_5] = 4381;
                    var_20 = var_14;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {
                var_21 = var_5;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_34 [i_8] [i_9] [i_9] [i_8] = -1362709471010832601;
                            arr_35 [i_8] = 5625017410494834131;
                        }
                    }
                }
                arr_36 [i_8] = 16429131440647569408;
            }
        }
    }
    #pragma endscop
}
