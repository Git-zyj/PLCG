/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -25033;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] = 0;
                var_15 = 1997145151290988912;

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [2] [i_1] = 35977;
                    arr_9 [i_0] [i_0] [6] = 7245896743598775945;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_16 *= 127;
                    var_17 = 16449598922418562704;
                    arr_12 [i_0] [i_3] [i_3] = -71;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_18 = 191;
                    var_19 *= 26184;
                    var_20 = 26185;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [17] [i_1] [0] [i_5] [i_5] [i_6] [i_4] = 26194;
                                var_21 = -178077632;
                                var_22 = 9863543914207682435;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 36;
    #pragma endscop
}
