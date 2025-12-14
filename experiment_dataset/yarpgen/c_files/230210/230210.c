/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [3] [i_2] = (~var_16);
                    arr_8 [i_1] [i_1] [i_2] [i_1] = 1841434602;
                    var_17 = 1841434596;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_0));
                                arr_25 [i_4] [i_3] = -2891435112;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_19 = 63;
                                var_20 &= 3165950910;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_21 *= (!1841434596);
                                var_22 += var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_23 = ((~(~9223363240761753600)));
                                var_24 = 1403532176;
                            }
                        }
                    }
                    var_25 = 2453532694;
                }
            }
        }
    }
    #pragma endscop
}
