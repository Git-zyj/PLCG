/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((((var_5 ? 16 : 4139854250456577581))) ? (!var_14) : (~4139854250456577567)));
        var_18 = var_0;
        var_19 = ((-var_0 ? ((((max(var_13, 7203945410705591834))) ? (!var_2) : var_3)) : ((var_8 ? 3 : ((var_1 ? var_3 : 4139854250456577577))))));
        var_20 = (max(var_20, (((~(18281 >= 15))))));
        arr_3 [18] &= (max(-3, (min(4139854250456577544, var_0))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_21 = 4139854250456577581;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [8] [i_1] = var_2;
                        var_22 |= ((((min(4139854250456577567, 63))) ? ((max(-4030, -36))) : ((~(~1)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_23 = ((((-12261 ? 58 : -16))) ? (min(6752178134502050654, var_14)) : (min(((var_0 ? var_4 : var_2)), (~var_7))));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_24 = (((!(((-25 ? -972224563 : 62))))) ? ((4139854250456577546 ? ((2041 ? -4139854250456577555 : var_12)) : (var_4 ^ var_11))) : var_3);
                                arr_28 [i_5] [i_6] [i_5] [i_6] [i_5] = ((~((~((var_5 ? 33 : var_14))))));
                                var_25 += (min((min(-30062, var_2)), (max(var_13, var_6))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_39 [i_12] [1] [i_6] [i_6] [i_5] = ((30 ? (((!((max(-107, 250)))))) : ((((((1 ? -11 : 1)) + 2147483647)) >> ((((-4139854250456577556 ? var_13 : 22)) - 4025145472646918060))))));
                                var_26 = ((var_0 > ((1008 ? 18 : var_3))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
