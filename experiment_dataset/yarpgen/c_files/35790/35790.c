/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 *= 1;

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_19 *= (arr_0 [i_0 + 1]);
            var_20 = (arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_21 = (((arr_4 [i_0] [i_1] [i_0] [i_1]) ^ 54884));
                        arr_10 [i_0] [i_0] = (((arr_7 [i_1] [i_0] [i_1]) & (arr_7 [i_0] [i_0] [7])));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_22 &= var_13;
            var_23 += (((arr_3 [6] [i_4]) || (arr_4 [10] [4] [2] [i_0 + 1])));
            var_24 = (max(var_24, (arr_5 [i_0] [8] [i_0] [i_0])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_25 &= (arr_6 [i_0 + 1]);
            var_26 = (-1327601084156182357 || (((var_6 ? 1327601084156182368 : (arr_3 [i_0] [i_0 + 1])))));
        }
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_27 = (((min(-var_13, (1327601084156182356 % 1327601084156182363))) % (((1327601084156182367 << (1327601084156182377 || 1327601084156182356))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_28 = (arr_2 [i_7] [i_7]);
                    var_29 = (((~(arr_9 [i_6] [i_7] [i_6 - 1]))));
                    var_30 = ((1327601084156182358 <= ((((arr_4 [i_6 + 1] [i_7] [i_7] [i_6]) ? (((arr_5 [i_6] [i_6] [i_7] [i_7]) ? var_15 : var_9)) : 0)))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_31 = max((arr_28 [i_9] [i_9]), (arr_29 [18] [i_9]));
        var_32 = (!var_17);
        var_33 = (((((4282217003 & (arr_28 [i_9] [i_9])))) ? (1327601084156182368 << 0) : (arr_29 [i_9] [i_9])));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_34 = ((!(arr_29 [i_10 + 1] [i_10 - 1])));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_40 [i_9] [i_9] [i_9] [i_12] [i_13] = (((!1327601084156182367) ? (((((65535 & (arr_32 [0] [0])))) & 1327601084156182339)) : var_13));
                                var_35 ^= ((max(14489, -4336184904749172701)) & (((((((arr_36 [i_13]) << 1))) ? (-120 & var_14) : (arr_38 [i_11] [i_11] [3] [i_12])))));
                            }
                        }
                    }
                    var_36 = (max(var_36, 55243));
                }
            }
        }
    }
    var_37 -= ((var_3 ? ((((-1327601084156182359 ? 1056192297 : var_0)) % 1)) : (((max(-1626741276, 1)) << (var_4 - 236)))));
    var_38 = ((var_3 ? var_3 : ((var_16 & (-1327601084156182352 & var_6)))));
    var_39 = (max(var_39, var_1));
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    var_40 = ((~(((-1327601084156182359 || 182) % ((1327601084156182350 + (arr_39 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))));
                    var_41 = 20020;
                }
            }
        }
    }
    #pragma endscop
}
