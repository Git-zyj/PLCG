/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = 2249566658;
        var_21 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (~(arr_6 [15]));
                    var_22 = (((((var_12 || 2249566658) && (arr_6 [i_0 - 2]))) || (!var_3)));
                }
            }
        }
        var_23 = ((((~(var_8 || var_19))) >= ((2045400648 ? 2045400637 : (!2249566658)))));
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_24 = (max(-2822555026, ((max((arr_2 [i_3]), -633673849)))));
        arr_10 [12] [i_3] = (((237 ? 2045400637 : 7)));
        var_25 |= var_10;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_26 = var_7;
        var_27 = (max(var_27, var_10));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_28 = (min(var_28, ((((arr_14 [i_4]) * (!var_17))))));
                        var_29 = 1959753807;
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        var_30 = (max(var_30, ((((arr_21 [i_8]) & 633673848)))));
        arr_24 [i_8] = (((arr_22 [i_8]) <= (arr_23 [i_8])));
        var_31 = (min(((((arr_19 [i_8] [i_8] [2] [i_8] [i_8]) % 148))), (((!((max(var_10, 247))))))));
    }
    for (int i_9 = 3; i_9 < 18;i_9 += 1)
    {
        var_32 = var_2;
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    {
                        var_33 = var_2;
                        var_34 = (min((!2249566659), 0));
                        arr_34 [i_10 - 1] [i_10 - 1] [i_9] = (arr_28 [i_9] [i_10 - 1]);
                        arr_35 [17] [i_10] [i_11] [i_10] = (max((max(1021556805, (arr_18 [i_10 + 4] [i_9 - 1] [i_9]))), (arr_13 [i_9 - 3])));
                    }
                }
            }
        }
        var_35 ^= var_2;
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            {
                var_36 = ((((max((!248), ((var_19 ? (arr_21 [17]) : -633673848))))) / (~1)));
                var_37 = (--1055425550);
                var_38 |= (min(-4294967295, 0));
            }
        }
    }
    var_39 = (-var_15 ? (((((var_0 ? 2223961569 : var_6))) ? (~var_8) : (154 - var_17))) : ((var_9 ? var_11 : var_17)));
    var_40 = var_8;
    #pragma endscop
}
