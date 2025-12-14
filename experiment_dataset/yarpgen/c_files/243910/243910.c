/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 10154021706850625259));
                    var_20 = 18446744073709551615;
                    var_21 = 8743;
                    arr_10 [0] [i_0] [i_1] [5] = -8736;
                    arr_11 [i_0] [i_1] = 1022;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_4] [i_5] [i_5] [i_7] = 127;
                                arr_25 [i_5] [6] [3] [i_4] [4] [i_6] [i_5] = 2062;
                                arr_26 [i_3] [i_3] [i_3] [i_4] [i_3] = 8747;
                                var_22 = 2147483647;
                                var_23 = -15076;
                            }
                        }
                    }
                }
                var_24 = 4287816634381514285;
            }
        }
    }
    #pragma endscop
}
