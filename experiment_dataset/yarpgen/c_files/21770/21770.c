/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [17] [i_1] [i_1 - 2] = (~0);
                var_13 = (min(var_13, (((((((min(1, 827852059))) ? ((-827852055 ? var_6 : (arr_4 [i_0] [5] [i_0]))) : 827852065)) * (((min(((min((arr_2 [i_0] [i_1]), var_4))), var_3)))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_14 = (max(var_14, -827852060));
        var_15 = ((~(((arr_3 [i_2] [i_2] [i_2]) ? (arr_7 [i_2] [9]) : ((-(arr_6 [i_2] [i_2])))))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_16 = (arr_11 [i_3]);
        arr_12 [i_3] [i_3] = (max(200, 60289));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_4 [i_5] [i_5] [i_5 - 2])));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_23 [i_3 - 1] [i_3 - 1] [i_5] [7] [i_3] = ((arr_11 [i_5]) != (arr_15 [i_3] [i_3] [i_3]));
                        arr_24 [i_4] [i_4] [14] [i_4] |= (((827852059 | -6686226397212527348) ^ 3));
                        var_18 = (max(var_18, ((((arr_4 [i_6] [i_5 - 1] [i_5]) || (arr_15 [i_5 - 1] [i_4] [i_5]))))));
                    }
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        var_19 = (min(var_19, (18323471376166168823 + -3679654996278301069)));
                        var_20 = (max(var_20, var_1));
                        var_21 = (min(var_21, ((max(var_1, 65521)))));
                        arr_28 [i_3] [i_5] [i_3] = ((+(min(((827852041 ? (arr_16 [i_3 + 3] [i_4] [i_7]) : 4237282214)), ((193 ? 4237282214 : 0))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_22 = (((!var_9) << ((((2765049216968171459 ? var_5 : (arr_11 [i_8]))) - 2932455108511823410))));
                        var_23 = ((arr_14 [i_3]) & (~var_6));
                        var_24 ^= (var_12 - (var_11 - -2111660301));
                    }
                    var_25 = (max((((-(((arr_20 [i_3] [i_4] [i_4] [i_5 - 2]) ? -2765049216968171450 : (arr_9 [i_3] [i_3])))))), var_2));
                }
            }
        }
        var_26 += ((((((~0) | ((((arr_27 [i_3 - 1] [i_3] [15] [i_3]) ^ var_3)))))) ? ((min(var_6, var_6))) : (min(((3959169662 ? var_2 : 827852059)), (arr_4 [i_3 - 1] [i_3 - 1] [14])))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                {
                    var_27 = (max(var_27, -965254383));
                    var_28 = var_4;
                }
            }
        }
        var_29 = -827852060;
        var_30 = (max(var_30, (~-28)));
        var_31 = (((arr_17 [i_9] [i_9] [i_9]) * 67));
        arr_41 [i_9] = (((arr_32 [i_9] [i_9]) ? (arr_32 [i_9] [i_9]) : 6371));
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_32 = ((7 ? 624710884 : 67));
        var_33 = ((((var_1 ? 2226 : ((69 ? 1822117592186131382 : -6703345505478385473))))) ? 67 : 4237282214);
    }
    var_34 = var_4;
    #pragma endscop
}
