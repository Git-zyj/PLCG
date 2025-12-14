/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (var_11 ? ((~((var_10 ? 7 : 0)))) : var_10);
    var_15 = ((var_12 ? (((!(((var_6 ? var_3 : var_7)))))) : var_10));
    var_16 &= min(0, (min(var_13, var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_2] = var_6;
                        var_17 -= (max((((~((0 ? (arr_14 [i_0]) : 72))))), (min(7074239446259646488, 215))));
                        var_18 = (arr_2 [6]);
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_19 &= 0;
                            arr_23 [3] [9] [i_2] [11] [i_2] [0] [i_2] = (((!0) ? 3829328884733870412 : (arr_9 [i_2] [i_2] [i_2] [i_2])));
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_20 = 109;
                            arr_26 [i_0] [i_2] = (((((~(~var_5)))) ? ((98 ? (max(-5254297027550967233, -7562387670426043795)) : 87)) : ((((max(var_4, 127))) ? (((min((arr_4 [i_0] [i_0]), var_8)))) : (min(-127, 0))))));
                            var_21 = (min(((var_11 ? 1 : 1)), ((min(var_8, var_6)))));
                            var_22 = (min(var_22, -1382323184008854786));
                        }
                        for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (max((max(0, 179)), ((((179 ? -38 : 1))))))));
                            var_24 = ((((min((min((arr_6 [7] [7]), -955421684152352273)), (min(1, -6186007190002599656))))) ? ((((((arr_0 [5]) ? var_8 : 127))) ? -var_12 : (~-194879903073554115))) : (((((-(arr_9 [i_2] [i_1] [i_1 + 1] [i_1 - 1]))))))));
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_25 = (((~var_6) + ((min((arr_18 [i_2]), var_4)))));
                            arr_32 [i_0] [i_2] [1] [9] [i_0] = ((!((min(-964496149393721928, 97)))));
                            arr_33 [i_0] [i_0] [i_2] [i_0] [0] = (min(((~(((-9223372036854775807 - 1) ? (arr_18 [i_2]) : 0)))), var_1));
                            var_26 = (min(var_26, ((~(((((1 ? var_1 : var_11))) ? (((max(0, 0)))) : (min((-9223372036854775807 - 1), 9223372036854775807))))))));
                        }
                        arr_34 [i_2] = ((-((min((arr_5 [i_1 - 1] [i_1 + 1] [i_1]), (arr_5 [i_1] [i_1 - 1] [i_1]))))));
                        var_27 = (min(var_27, var_1));
                        arr_35 [i_0] [i_0] [i_0] [i_4] [i_2] = ((max(((max(1, var_2)), (min(var_3, 246))))));
                        var_28 = (((arr_6 [6] [4]) & (((((0 ? var_12 : -4128255310302805038)) <= var_10)))));
                    }
                    var_29 = ((((((arr_2 [i_1]) ? var_0 : ((-(arr_12 [i_0] [i_0] [i_2] [1] [i_0])))))) ? (min(var_5, (max(1, var_9)))) : ((((((2091172975184279301 ? 127 : 1))) ? ((147 ? 243 : 27)) : (arr_2 [i_1 + 2]))))));
                }
            }
        }
    }
    var_30 ^= (~((((min(var_7, -5413726617123207600))) ? (~1) : (min((-9223372036854775807 - 1), var_5)))));
    #pragma endscop
}
