/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = max((((17827 ? (var_6 && var_12) : (arr_4 [i_0 - 1] [i_0 - 2] [i_1])))), ((var_12 ? var_14 : var_2)));
                var_19 = (min(var_19, (arr_2 [i_1])));
            }
        }
    }
    var_20 = (max(var_2, (var_10 | var_1)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = (((!-var_9) - ((-1 % ((var_16 ? (arr_7 [i_2] [i_2]) : 15174))))));
                arr_9 [i_2] [i_2] = ((15169 ? -8 : 1));
                var_22 &= ((~(((arr_5 [8]) ? (arr_5 [16]) : var_7))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            arr_15 [i_5] [i_4] &= (arr_7 [i_5 + 1] [i_4]);
            var_23 &= (!var_4);
            arr_16 [1] = var_2;
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_20 [i_4] [i_6] [i_6] = ((((max(((var_2 ? 11962464515757257906 : -1683566107)), (((4 ? var_14 : var_4)))))) ? (!var_4) : (((var_0 / var_13) ? (-93 & 1) : (arr_8 [i_4] [i_6] [i_6])))));
            var_24 = (arr_6 [i_4]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_25 ^= (max(-1104582219, -1073741824));
                        var_26 += var_4;
                        var_27 = ((((((max((arr_8 [i_8] [i_6] [i_6]), -4250129035269810343))) ? (~var_10) : (var_10 * var_16))) / (var_2 % var_12)));
                        arr_28 [i_4] [1] [i_7] = ((-(~var_0)));
                        arr_29 [i_4] [2] [i_7] [i_8] [4] = (((((var_9 / var_4) - (max(16325412354936995145, var_10)))) - 5858165221856048635));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            arr_34 [i_9] [i_9] [i_4] = ((var_12 ? var_6 : var_12));
            var_28 = var_1;
            var_29 = (((arr_8 [i_9 - 1] [i_9 - 1] [i_9]) << (((arr_8 [i_9] [i_9 - 1] [i_4]) - 185901749669503967))));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_30 &= (arr_33 [i_4] [i_10]);

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_31 = -var_0;
                var_32 = var_0;

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_33 = (min(var_33, ((((15193 >= -1328184224809055526) ? (((!(arr_36 [i_11] [i_11])))) : (((-14848 < (arr_37 [i_4] [i_10] [i_11] [i_12])))))))));
                    var_34 = (arr_5 [i_4]);
                    var_35 = ((!(~var_12)));
                }
            }
            arr_44 [i_4] [i_10] = ((var_9 ? (max((arr_23 [i_4] [i_4] [1]), var_3)) : (var_12 / 98)));
        }
        var_36 = ((((max((arr_19 [i_4] [i_4]), var_8))) ? (((2554210657 % -32753) ? ((50342 ? 65521 : var_5)) : ((var_8 ? (arr_43 [i_4] [i_4] [i_4]) : var_5)))) : (((!((min(55009, var_10))))))));
        var_37 ^= ((-(arr_33 [i_4] [i_4])));
        var_38 = ((-var_10 ? 1 : ((((((arr_43 [i_4] [i_4] [1]) ? var_9 : var_8)) == -55031)))));

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 11;i_14 += 1)
            {
                var_39 = (((((((max(10815576480315842654, var_5))) ? (-9223372036854775807 - 1) : (((1 % (arr_42 [i_13]))))))) & (((((~(arr_31 [i_4] [i_4] [i_14])))) ? var_14 : ((var_13 ^ (arr_38 [i_4] [i_4] [i_14 - 1] [i_4])))))));
                var_40 ^= ((-1 ? -1 : (((arr_36 [i_14 + 1] [i_14 + 1]) ? (arr_36 [i_14 - 1] [i_14 - 1]) : var_4))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_57 [i_4] [i_4] [i_14] [i_16] [8] [i_14] [i_13] = (~var_10);
                            var_41 = var_4;
                            var_42 *= ((((12588578851853502976 ? (arr_22 [i_14 + 1] [i_15] [i_15]) : (arr_22 [i_14 + 1] [i_16] [i_16]))) & (arr_18 [i_4] [i_4] [i_4])));
                            var_43 += (((((((var_12 ? 1 : var_12))))) / (arr_10 [i_16])));
                        }
                    }
                }
                var_44 = (164 ? 1 : 11962464515757257886);
                arr_58 [i_14] = -9223372036854775783;
            }
            var_45 = (max(var_45, (-var_2 - 6484279557952293731)));
        }
        /* vectorizable */
        for (int i_17 = 2; i_17 < 11;i_17 += 1)
        {
            arr_63 [i_17] [7] [4] = (+((4698219878218325276 ? (arr_25 [i_4] [5] [i_17] [i_17] [6] [1]) : var_13)));
            arr_64 [i_4] [i_17] [10] = var_9;
        }
    }
    #pragma endscop
}
