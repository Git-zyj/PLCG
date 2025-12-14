/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((var_10 - -70) ? var_10 : var_12));
    var_19 *= var_17;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_20 -= (((-2550551893510746019 ? 75 : 75)));
        var_21 += var_16;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_0] = (min(((((var_8 && (arr_3 [i_0] [i_1] [i_2]))) ? 127 : (((arr_0 [i_2] [i_3]) ? var_9 : -75)))), ((((0 <= (arr_2 [i_0] [i_0] [i_0])))))));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_15 [i_0] [i_4] = (min(((((max(var_14, (arr_12 [17] [23])))) ? 192 : (arr_14 [i_0] [i_0 - 1]))), (arr_3 [i_1] [i_1] [i_2])));
                            arr_16 [i_1] [i_0] = ((((-var_14 ? 10188656704499245687 : ((((arr_6 [i_0] [i_1]) * 63))))) + (((192 & ((9223372036854775801 ? var_5 : 0)))))));
                            var_22 ^= 4294967295;
                            arr_17 [i_0] [i_0] [i_0] [i_0] [1] [i_4] [i_3] = ((((((((arr_6 [11] [11]) >> (var_6 - 57)))) ? ((((arr_4 [i_0]) ^ 16))) : (((arr_10 [i_0] [1] [i_2] [1] [i_4]) + -31710495942682183)))) - ((min(116, -var_10)))));
                        }
                    }
                }
            }
        }
        arr_18 [i_0] = (max((arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]), (((arr_2 [i_0] [i_0 - 1] [i_0 + 1]) ? 0 : (min(255, (-9223372036854775807 - 1)))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_23 = ((+((((((min((arr_22 [i_5] [i_5]), var_2)))) <= (((arr_24 [i_5] [i_7] [8]) ? (arr_3 [i_5] [1] [i_7]) : 524287)))))));
                    var_24 = (((~(var_4 & 4294967293))));
                    var_25 *= (((max(124, 755189632))));
                }
            }
        }
        arr_28 [i_5] = -9223372036854775793;
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_26 = (!-5);
        var_27 = -2;
    }
    var_28 = (((((var_17 ? var_1 : 255))) && -6256994269860971476));
    var_29 |= ((((((var_3 ? var_12 : -104)))) ? ((64 ? ((max(119, var_4))) : var_15)) : 10094));
    #pragma endscop
}
