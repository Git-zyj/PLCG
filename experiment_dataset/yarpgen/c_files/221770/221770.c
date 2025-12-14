/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [0] [16] &= -4294967295;
        var_20 = ((((var_19 ? var_1 : var_19)) != (2454354277 && var_4)));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    var_21 &= ((((var_15 < var_4) ? (max(var_17, 367461908)) : ((var_4 << (var_0 - 896726576))))) & ((((min(var_10, var_9))) ? 3256828216 : var_5)));
                    var_22 = max((1038139068 == 396027681), var_11);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            {
                                var_23 &= (var_11 % var_9);
                                arr_16 [i_1] [i_1] = (~var_19);
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_1] = ((!((max(var_12, (!var_19))))));
        var_24 = (-((var_8 ? var_15 : (~3898939615))));
        arr_18 [i_1] = (~((~(min(var_7, var_15)))));
    }
    var_25 = (var_8 & var_9);

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_29 [i_7] = var_0;
                    var_26 = (min(var_26, (max(1038139080, -var_13))));
                    var_27 = min(((((~var_4) > (4294967295 * 3764495580)))), var_19);
                    arr_30 [i_7] [i_7] = (-((min(2104372050, var_2))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_36 [i_6] [2] [4] [i_6] [i_6] [2] [15] = ((~(var_7 > var_11)));
                                arr_37 [i_6] [i_6] [i_6] [2] [i_6] [5] [i_6] = min(((~(3526393547 ^ 3))), (!768573748));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_28 = (max(var_28, (((min(2454354255, var_3)) % (1412930025 ^ 2454354267)))));
                    var_29 = (!3481284857);
                }
            }
        }
        arr_44 [i_6] = -var_2;
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        var_30 *= arr_21 [i_13];
        var_31 = (((((-((var_11 ? (arr_27 [12]) : var_15))))) && ((max((arr_33 [i_13] [i_13]), ((1038139058 ? 3587783747 : 1840613019)))))));
    }
    #pragma endscop
}
