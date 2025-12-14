/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_9;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = (var_1 <= var_10);
        var_21 *= (((((min(-11360, var_15)))) | 583333990));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_11 [i_0] [i_1] [i_2] = (4981229716497218124 << (((-6843859580761303997 + 6843859580761304028) - 31)));
                arr_12 [18] [i_2] |= ((764336783 ? -1955331041 : var_5));
                arr_13 [i_0] = -15031;
            }

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_22 = (var_12 + 16182367819835783837);
                var_23 += var_18;
                var_24 = var_12;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_25 = 57344;
                    var_26 = var_9;
                    var_27 = (max(var_27, 1513));
                    arr_22 [i_0 - 1] &= (((var_13 ? var_15 : var_5)));
                    var_28 ^= ((-32761 / 32767) ? ((var_10 ? var_10 : -11882)) : 16182367819835783837);
                }
                for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_29 = 1955331058;
                    arr_26 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = var_3;
                }
                for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_30 = (max(var_30, 1872388799));
                    var_31 -= var_11;
                    var_32 -= (-32767 - 1);
                }
                arr_31 [i_0] [i_1] [i_3] = (((-16 ? 3351180439322273776 : var_11)));
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            var_33 -= var_15;
                            arr_40 [i_0 - 1] [i_7] [i_0] [16] [i_7] [i_0] &= var_4;
                            var_34 *= var_12;
                        }
                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            var_35 = var_16;
                            var_36 ^= ((3983069265 && (-6292066641807313362 ^ var_12)));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_47 [i_1] [5] = var_19;
                            var_37 *= ((8191 * (-127 - 1)));
                        }
                        arr_48 [5] [11] [i_1] [i_0 - 1] [i_0] = 173;
                        var_38 = var_2;
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            arr_51 [1] [1] = var_4;
            var_39 = ((((var_7 ? -1416443105892105172 : -32184)) + var_8));
        }
        var_40 -= 127;
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_41 += ((((((21386 / var_17) + (min(1, 311898030))))) ? (min(57342, (max(311898019, 18446744056529682432)))) : ((max(((3983069276 ? -127 : var_16)), 112)))));
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_42 = 1295989434135283300;
                            var_43 = (var_12 / var_10);
                        }
                    }
                }
            }
            var_44 = (min(var_44, var_13));

            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                arr_67 [i_13 - 1] [i_13 - 1] [i_14] [14] = -var_8;
                var_45 += (((min((var_17 / var_11), var_6)) / 32767));
                var_46 += ((((((var_4 ^ -3325) | (var_13 ^ var_0)))) ^ ((var_7 ? (var_11 ^ 192) : ((min(-127, var_12)))))));
            }
        }
        arr_68 [0] = ((((6793 ? 18446744073709551615 : 6157388528741368458)) <= var_16));
    }
    var_47 = (32767 * 6584004665527112791);
    #pragma endscop
}
