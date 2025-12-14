/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((-55 ? (max((var_11 ^ 0), var_10)) : (~var_9)));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] [i_1] [i_0 - 2] = (((3302051376 - (arr_4 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (((((arr_3 [i_4]) && (~var_1))) ? ((46 ? 65535 : 19255)) : (arr_1 [i_0 - 3])));
                                arr_17 [12] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] = (arr_14 [i_4] [i_4] [i_3] [i_0] [i_1] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_16 = ((((max((((arr_12 [i_0 - 3] [i_0] [0] [i_0 - 3] [i_0] [i_0]) ? (arr_4 [i_0 - 2]) : -7)), 1))) && ((!(~12703602130758935144)))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_17 = 12703602130758935144;
                        var_18 = ((-(max(((((arr_16 [i_7] [i_6] [i_6] [i_0] [i_0] [i_0]) < (arr_6 [i_7] [i_6] [i_0])))), (arr_23 [i_7] [i_6] [i_5] [i_0])))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_19 &= 128;
        var_20 &= (!(((-(((arr_27 [i_8]) ? 114 : var_4))))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        arr_31 [i_9] = -12440475536782061250;
        arr_32 [i_9] [i_9] = var_7;
        var_21 = (((arr_29 [i_9] [i_9]) ? (arr_29 [i_9] [i_9]) : var_13));
    }
    var_22 -= ((-((((var_6 ? var_3 : var_3))))));
    var_23 = (((((max(var_1, var_13))) ? var_3 : ((var_13 ? 19255 : var_12)))) > var_13);
    #pragma endscop
}
