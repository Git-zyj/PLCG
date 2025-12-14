/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((((((~var_9) ? (arr_1 [i_0] [i_1]) : (arr_0 [i_1 - 1])))) ? (arr_1 [i_0] [i_0]) : -4013738149560957648));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_16 = ((-(arr_10 [2])));
                            arr_16 [i_1] [i_1 - 2] [13] [i_4] [i_1] [i_1 - 2] = (((((1 + (arr_13 [i_0])))) == ((((!(arr_10 [i_2])))))));
                            var_17 = 2270734915520853319;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_18 = var_2;
                            var_19 ^= (!1);
                        }
                    }
                }
            }
        }

        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            var_20 = (14433005924148593986 || 4013738149560957630);
            arr_24 [i_0] [i_0] = (arr_0 [i_7]);
            arr_25 [i_0] [1] = (((arr_11 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2]) ? (((arr_11 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2]) + (arr_11 [i_7 - 2] [i_7 + 2] [17] [i_7 - 2]))) : ((-(arr_11 [i_7 - 2] [i_7] [14] [i_7 - 2])))));
            var_21 ^= 0;
        }
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            var_22 ^= (!35);
            var_23 &= -17;
            var_24 = (max(var_24, (arr_13 [i_8 + 1])));
            var_25 = (~var_3);
            arr_29 [1] = (max(-var_9, (max(14433005924148593986, 11813219841390014533))));
        }
        var_26 = (arr_19 [i_0]);
    }
    var_27 = var_5;
    var_28 = (((4013738149560957630 / var_9) ? (((var_10 / ((var_7 ? var_10 : var_1))))) : ((var_7 ? 14433005924148593967 : var_8))));
    var_29 = var_11;
    #pragma endscop
}
