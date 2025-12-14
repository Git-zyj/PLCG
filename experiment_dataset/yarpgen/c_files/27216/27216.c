/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((10302847316338518422 | 0) & (3861 / -10867)))));
                arr_4 [i_0] = (((min(((var_12 << (var_13 + 5092751225193648064))), (arr_1 [i_0 + 2])))) - (max((arr_2 [i_0 + 2]), -4488416334013114397)));

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_19 = ((((var_11 == (((-602922478 ? (arr_2 [i_2]) : 3861))))) ? -var_3 : (arr_5 [i_0] [i_0] [i_0] [i_0 + 3])));
                    var_20 = (min(var_20, ((((((((20 ? var_10 : var_16))) || ((max(899974466, -13787))))) ? ((((!((((arr_6 [22] [12] [i_1]) ? (arr_5 [i_0] [i_0] [i_0] [i_2]) : -3871))))))) : (3527775953995787650 & 0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_3] [i_2] = ((max(var_16, var_11)));
                                arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] = ((-((max(var_1, 4)))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    arr_15 [i_5] [9] [i_5] [i_0 + 3] = var_8;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            arr_23 [i_1] [i_7] [0] [i_7] [i_7 + 1] [i_1] |= (((((var_11 ? var_13 : 0))) && (((3527775953995787657 ? 112 : -14354)))));
                            arr_24 [i_7 - 1] [i_5] [i_5] [i_5] [1] = 1251185074189130111;
                        }
                        arr_25 [i_0 + 2] [i_0 + 2] [i_5] [i_0 + 2] = 8670;
                        var_21 = 31385;
                        arr_26 [1] [i_5] [1] [i_6] = (((!126) ? var_0 : (arr_13 [4] [4] [i_0 + 2] [i_0 + 2])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            {
                var_22 = -1251185074189130111;
                arr_33 [11] [i_8] &= -10867;
            }
        }
    }
    var_23 = ((var_12 ? ((((262143 != -1251185074189130112) == var_0))) : var_1));
    var_24 = (min(var_24, (((var_12 ? ((~((2097024 ? -8669056261395282820 : -6115878219291213333)))) : (((((-463433528652883324 | var_6) + 9223372036854775807)) >> 1)))))));
    #pragma endscop
}
