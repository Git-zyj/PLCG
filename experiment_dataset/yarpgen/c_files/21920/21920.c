/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 -= ((var_0 ? ((((arr_0 [i_1]) + 2240950085))) : var_8));
                var_14 = 35543;
                arr_7 [i_0] = (min(((((var_4 ? var_7 : (arr_0 [i_0]))) >> (255 - 248))), ((-(var_4 ^ var_3)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_15 = (((arr_9 [11]) ? var_2 : (var_8 + var_1)));

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_16 ^= var_0;
                    arr_17 [i_4] [i_4] [i_4] [1] = max(((-82 ? 0 : -82)), ((-19 ? ((var_11 ? 0 : var_10)) : (((177 * (arr_8 [i_2])))))));
                    arr_18 [i_2] [i_4] [i_4] [i_4] = (max(var_4, 81));
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_17 = var_4;
                    arr_21 [i_5] [i_5] [i_5] [5] = var_10;
                    var_18 = var_9;
                    var_19 = ((!((((var_6 ? var_0 : var_12))))));
                    var_20 = (max(var_20, (((var_11 ? (~0) : (min(var_8, (arr_15 [i_2] [i_2] [i_2] [i_2]))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_2] [i_2] [i_2] [3] [i_6] [i_7] = var_1;
                        var_21 = 81;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_22 = ((var_3 ? ((var_2 ? var_6 : var_10)) : ((var_4 ? var_8 : var_12))));
                        var_23 = 18446744073709551599;
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_24 -= (arr_32 [i_9] [i_6] [i_6] [i_3] [14]);
                        var_25 = (min(var_25, (((((-90 ? -16032 : (arr_13 [i_2])))) || (!var_4)))));
                        var_26 = (-82 && 1);
                        var_27 = ((0 ? (~var_7) : ((var_0 ? 107 : var_10))));
                        var_28 |= ((((0 ? var_6 : 123)) / -25));
                    }
                    var_29 ^= (--12);
                    arr_33 [i_2] [i_3] [i_6] [11] = (!0);
                    var_30 = var_2;
                    var_31 = ((255 ? -23139 : -90));
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_32 = (min(var_32, ((((15937 % -4294967283) || (((4294967283 ? 2631142682891998770 : 9223372036854775807))))))));

                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        var_33 = (max(var_8, (var_5 > var_3)));
                        var_34 = 2836328005646914042;
                    }
                    var_35 = (max(var_35, (arr_38 [i_10] [i_3] [8])));
                }
                var_36 *= var_0;
                arr_40 [i_2] = (((var_9 - var_3) + ((max(var_11, -var_7)))));
                var_37 *= ((89 ? (((-90 % (max((-127 - 1), -1))))) : var_12));
            }
        }
    }
    #pragma endscop
}
