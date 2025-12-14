/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(-3733969441642298863, ((((min(0, 65535)) << ((((65543 ? var_8 : 65555)) - 4294966997))))));
    var_11 ^= (((max(var_0, var_9)) | (((26684 ? (((65535 ? 56355 : 65555))) : (var_3 / 65541))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((max(43, 26655))) ? 61821 : 719568365100122898));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 ^= (3694 != 61841);
                    var_13 ^= (max(1, var_6));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_14 ^= 61841;
                    var_15 = (min((max(1195128533579778085, (var_9 ^ 28))), (((65535 ? 3714 : 17495)))));
                    var_16 ^= ((1 ? 4294901754 : ((((((min(32946, var_5))) && ((max(3708, var_4)))))))));
                    var_17 = var_3;
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_18 ^= (((-719568365100122885 + 9223372036854775807) >> (3719 - 3684)));
                        arr_20 [i_1] = (((arr_4 [i_1] [i_0] [i_1]) ? (((((arr_18 [i_5 - 3] [i_1] [i_1] [i_1] [i_1] [i_0]) == 3686)))) : (arr_12 [i_5] [i_1 + 2])));
                        var_19 = (min(var_19, (arr_16 [i_0] [i_1] [i_1] [i_4 + 1] [i_4 + 3] [i_4 + 3])));
                        arr_21 [i_0] [i_1] [i_1] [i_4] [i_1] [i_5] = 819403353;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_25 [i_1] = var_3;
                        var_20 = 14336;
                        arr_26 [i_0] [i_1] [i_1] [i_6] = ((!(~var_5)));
                    }
                    var_21 = var_1;
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_30 [i_1] = (((33943 * 3714) ? (91 + -719568365100122885) : var_8));
                    arr_31 [i_1] = ((~((12787602560446876622 ? 8508 : (arr_17 [15] [i_1] [i_1 + 1] [i_1])))));
                    var_22 ^= max(2434817569, ((((62 & 11848126730239049322) && (26678 * var_0)))));
                }
            }
        }
    }
    var_23 ^= 26046;
    #pragma endscop
}
