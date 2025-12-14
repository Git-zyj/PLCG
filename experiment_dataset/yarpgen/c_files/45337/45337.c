/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((var_19 ? (min(var_1, var_14)) : (((var_16 ? var_18 : var_10)))))) ? (((((8511293217157249858 ? 21 : -511))) ? var_17 : 0)) : var_18)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = var_6;

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_22 = (max(var_22, (((((((((var_11 ? var_2 : var_9))) ? (((var_9 ? var_7 : var_3))) : ((8511293217157249858 ? 8511293217157249858 : var_19))))) ? ((((max(var_13, var_13))) ? (max(var_8, var_7)) : var_6)) : (((var_11 ? ((var_2 ? var_3 : var_6)) : (max(var_2, var_15))))))))));
            var_23 |= ((((((((var_16 ? var_10 : var_6))) ? var_0 : ((var_4 ? var_2 : var_11))))) ? (((var_1 ? ((var_18 ? var_14 : var_15)) : var_0))) : (max(((var_4 ? var_11 : var_5)), ((max(var_7, var_13)))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = ((((max(9935450856552301768, -32744))) ? (min(var_11, var_15)) : var_17));
            var_24 = (max(var_3, var_0));
            var_25 = (min(var_0, (min(var_14, var_12))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_11 [i_0] [12] [i_3] = (((((var_1 ? var_8 : var_7))) ? var_2 : (((((var_2 ? var_7 : var_8))) ? ((9935450856552301757 ? 15 : 8511293217157249859)) : var_16))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_26 += ((6 ? 17446276778032612732 : 14069152584347770042));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((var_18 ? var_19 : var_14))) ? var_12 : var_8));
                        }
                    }
                }

                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_27 &= ((8511293217157249859 ? -1940618404 : 17137));
                    var_28 = (max(((((max(var_7, var_2))) ? (min(var_1, var_7)) : (min(var_8, var_17)))), var_8));
                    var_29 = ((((max(((max(var_13, var_0))), ((var_17 ? var_15 : var_8))))) ? ((var_2 ? var_11 : var_2)) : ((((((1 ? -453270805 : var_9))) ? ((0 ? 2147483647 : 20)) : ((max(var_17, var_15))))))));
                }
                for (int i_7 = 4; i_7 < 22;i_7 += 1)
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((var_14 ? ((var_4 ? var_8 : var_5)) : ((min(var_11, var_4)))))) ? ((max((max(var_3, var_9)), var_19))) : (((((-24723 ? 621 : 5))) ? var_11 : var_11)));
                    arr_27 [i_0] [i_2] = max(var_4, ((var_17 ? var_2 : (min(var_11, var_5)))));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_30 = ((var_11 ? var_19 : var_13));
                    var_31 = (min(var_31, var_4));
                }
            }
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                var_32 = (((((15 ? 509075435 : -8117))) ? var_4 : (max(var_2, ((var_1 ? var_18 : var_19))))));
                var_33 = (max(191953232, 3694122816));
            }
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                arr_37 [i_0] [i_0] [i_0] [i_10 - 1] = ((((min(var_3, var_2))) ? (((min(1, 1)))) : (((((var_14 ? var_3 : var_8))) ? (((var_1 ? var_16 : var_10))) : ((var_19 ? var_17 : var_8))))));
                arr_38 [i_10] [i_2] [14] = ((((min(var_19, var_15))) ? var_16 : var_16));
                arr_39 [i_0] [i_2] [13] = (max(((max((max(var_16, var_19)), ((min(var_10, var_6)))))), (max(var_11, var_8))));
                var_34 = (max(var_34, ((min(((((max(3197511109589561356, 8511293217157249858))) ? 5378281599307954654 : 1)), ((min((min(var_14, var_17)), ((var_15 ? var_8 : var_15))))))))));
                var_35 += (max((((var_7 ? var_9 : var_18))), (max(((var_7 ? var_18 : var_11)), var_19))));
            }
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        arr_42 [i_11] = (((((((max(var_10, var_18))) ? (((var_4 ? var_9 : var_15))) : var_8))) ? (max(var_12, ((max(var_19, var_0))))) : ((min((min(var_11, var_6)), var_18)))));
        var_36 *= (max(((min(var_7, var_11))), ((var_15 ? var_5 : (min(var_12, var_3))))));
        var_37 -= (min((((((-45 ? 10543806730108284147 : -21))) ? 7902937343601267469 : 10072062303526945712)), var_3));
        arr_43 [7] = min(var_1, ((10543806730108284164 ? ((127 ? -2 : 0)) : (((1 ? -16362 : 20))))));
        var_38 = (max(var_38, ((((((((var_14 ? var_6 : var_8))) ? ((var_17 ? var_8 : var_0)) : var_15))) ? (max((max(10543806730108284167, var_14)), (((35 ? -17279 : 1226199711))))) : (((((var_2 ? var_15 : var_3))) ? (((var_12 ? var_2 : var_0))) : (max(var_12, var_8))))))));
    }
    var_39 = ((12741 ? 237 : 0));
    #pragma endscop
}
