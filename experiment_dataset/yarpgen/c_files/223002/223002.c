/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (min(0, 0));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (((min(var_6, (((var_8 ? var_12 : var_8)))))) ? ((max(((var_6 ? var_5 : var_14)), ((var_0 ? var_2 : var_13))))) : (max(((min(var_4, var_14))), (min(20514, 448)))));
                }
            }
        }
    }
    var_16 *= min(((((min(14196556780863935966, var_10))) ? 14707831803389678544 : (((9567781670748292601 ? 20514 : 125))))), 39082);
    var_17 = ((((min(((4250187292845615650 ? 208 : 64770)), ((var_14 ? var_2 : var_11))))) ? ((((max(var_7, var_10))) ? (min(16116787534932105039, 33488896)) : ((max(var_11, var_6))))) : ((min(((var_8 ? var_10 : var_1)), var_2)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_18 = var_12;
                                var_19 *= (min(var_10, (min((max(var_0, var_1)), (min(8330973668468749895, 4250187292845615650))))));
                                var_20 = (min(var_20, (((var_2 ? (min((max(18446744073709551615, 1)), (((53443 ? 59100 : 0))))) : var_9)))));
                            }
                        }
                    }

                    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_21 -= (min(4250187292845615649, ((max(76273317, 0)))));
                        var_22 = (max(var_22, (((((((((var_6 ? var_15 : var_10))) ? (((var_12 ? var_9 : var_10))) : (min(82, 14196556780863935963))))) ? (max((((1 ? 13 : 20514))), (max(var_0, var_2)))) : (((((min(var_15, var_10))) ? ((1 ? 20 : 20)) : ((max(7, 164)))))))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_23 *= (((((var_6 ? var_12 : var_1))) ? ((var_7 ? var_5 : var_15)) : ((var_11 ? var_5 : var_8))));
                        var_24 = ((var_6 ? ((var_3 ? var_1 : var_12)) : ((var_1 ? var_8 : var_1))));
                        arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] = ((((var_1 ? var_1 : var_11))) ? ((var_3 ? var_12 : var_9)) : ((var_7 ? var_3 : var_2)));
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_25 |= (min(6650, 0));
                        arr_35 [i_3] [i_5] [i_5] [i_5] = (min(var_8, ((((min(var_6, var_4))) ? ((1823161269 ? 281474972516352 : -20447)) : var_9))));
                        var_26 = ((((max(var_14, ((var_3 ? var_3 : var_12))))) ? var_9 : ((((min(var_12, var_2))) ? (min(var_7, var_8)) : (((min(var_8, var_11))))))));
                        var_27 = (min(((var_7 ? (((var_15 ? var_6 : var_9))) : ((var_14 ? var_3 : var_7)))), ((min(((var_7 ? var_15 : var_5)), var_5)))));
                        var_28 = (max(var_28, ((((((((min(4250187292845615652, 253))) ? ((var_14 ? var_11 : var_5)) : ((max(var_2, var_5)))))) ? (min((max(var_15, var_0)), (((1 ? -20447 : 4278547560))))) : ((min(((var_4 ? var_11 : var_8)), ((max(var_8, var_8)))))))))));
                    }
                    var_29 = var_14;
                }
            }
        }
    }
    var_30 = (max(var_30, (((((min(((min(var_12, var_3))), ((var_0 ? var_5 : var_11))))) ? (((min((min(var_1, var_8)), var_8)))) : ((((min(var_4, var_10))) ? var_2 : ((var_0 ? var_7 : var_10)))))))));
    #pragma endscop
}
