/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(((4294967276 ? 32767 : 32765)), var_13))) ? (var_14 & -32763) : (((min(var_13, var_13))))));
    var_19 = ((var_17 * ((var_2 / ((12749274836999941197 ? var_9 : (-32767 - 1)))))));
    var_20 |= ((-989 ? (~var_4) : var_16));
    var_21 |= var_4;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((((((1 ? (arr_1 [i_0 - 2]) : 75))) ? 1 : (arr_1 [i_0]))) <= (arr_2 [1] [1])));
        var_22 = (((((~(((arr_0 [i_0]) ? 743566120 : 12900))))) ? ((var_12 ? -989 : ((15 ? 76 : 253)))) : ((((min(231, 65535))) ? var_9 : var_13))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_23 = 15;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_24 = ((~(arr_2 [i_4 - 1] [i_1 + 1])));
                        var_25 = (max(var_25, ((((var_1 ? var_5 : 114)) > (arr_10 [i_1 + 1])))));
                        var_26 = (var_13 || var_7);
                    }
                }
            }
            var_27 = (min(var_27, (arr_10 [i_1])));
            arr_14 [i_2] = 74;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 7;i_6 += 1)
                {
                    {
                        var_28 = (max(var_28, -20736));
                        var_29 ^= (8243345417206045792 * var_6);
                        var_30 = (max(var_30, ((((207 ? 61 : 1305))))));
                        var_31 = (max(var_31, (var_2 - 1)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {
                {
                    var_32 = var_8;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_33 = 184;
                                var_34 ^= -19843;
                                arr_32 [i_1 + 1] [i_9] = (((var_10 ? 4891 : var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
