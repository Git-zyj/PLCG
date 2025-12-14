/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(18726, var_12));
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((!((min((max(var_6, -229615337)), -13762)))));
        var_18 = (min(var_18, ((max(0, ((!(var_7 & var_8))))))));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = (((max(var_3, 63367)) * 0));
        var_20 = (min(var_20, ((min(((((max(65535, -3928460418630122114)) != (min(var_5, 0))))), 931908765)))));
        arr_6 [i_1] [11] = (((0 & 41467) & ((min((18 > 14678), var_0)))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (~-1);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_21 *= ((((var_7 ? (65535 <= var_6) : ((min(1, 1))))) % ((var_1 | (61899 == -683353145)))));
                    arr_15 [i_2] = (((min((var_11 & var_14), ((max(var_7, 1))))) & (((1 & var_14) & (((var_9 ? var_13 : 18)))))));

                    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_22 = (((8124454032168441600 % 1) % (~-1207)));
                        arr_18 [1] [i_2] [i_2] [i_3] [i_2] [i_2] = ((-30498 ? 32762 : -22));
                    }
                    for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_23 ^= (((((min(-9416, var_0)))) & -14));
                        arr_21 [i_2] [i_3] [i_3] [6] [i_3] [i_3] &= (((((32767 ? 6291456 : (-32767 - 1))))) % ((-33 ? 2607854387229698700 : -9427)));
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_24 = (max(-9157119393781965521, 35238));
                            arr_28 [i_2] [i_2] = -2607854387229698700;
                            var_25 = var_14;
                            var_26 = (min(((var_4 ? var_2 : 2607854387229698700)), -4007));
                            var_27 ^= (min((min((var_2 * 1), -1317317708540404127)), (-9438 & 0)));
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            var_28 = (var_1 ? 11080 : -21);
                            arr_31 [i_2] [i_2] [i_2] [i_2] = ((-28223 ? -1620686481 : -9157119393781965521));
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (9426 == 16382);
                            arr_33 [i_2] [i_2] = (1 % -229615338);
                        }
                        arr_34 [i_2] [i_2] = 16411;
                    }
                    var_29 -= ((53858 ? 7997103192738391394 : 62245));
                    var_30 -= ((((min(-8, 1))) + (-30025 * var_0)));
                }
            }
        }
        arr_35 [i_2] = (min(((~(29815 == -9223372036854775790))), ((min(0, 29815)))));
        arr_36 [i_2] = ((((var_15 ? -1 : (-32767 - 1))) & (((!(((var_2 ? 28 : -28566))))))));
    }
    #pragma endscop
}
