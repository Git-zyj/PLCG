/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((!((max(((var_0 ? 3764178451805753568 : 2055023086)), 16683185917687464425)))));
    var_12 = (min(var_12, ((((max((min(var_4, var_3)), var_4))) ? ((14682565621903798047 >> (((max(2055023086, var_4)) - 4294967197)))) : (((var_3 ? 2055023086 : var_0)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = ((-(16683185917687464425 % var_7)));
            var_14 *= (((((arr_0 [2]) ? var_7 : var_3)) % 1588262678));
            var_15 = (max(var_15, (((arr_1 [i_0]) << (((-10422550 - 14682565621903798056) - 3764178451795330998))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_16 -= (!10422552);
                var_17 *= ((var_6 ? ((((arr_1 [i_0]) == var_7))) : 65535));
                var_18 = (max(var_18, (((((arr_8 [14]) + 2147483647)) << (var_7 - 48)))));
                arr_9 [8] [i_2] [8] |= ((!((((arr_3 [i_3]) ? var_0 : 1070211549)))));
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_19 -= var_2;
                var_20 &= 1839727029;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_21 |= (min(((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))), 1839727036));
                            var_22 ^= ((((18446744073709551597 / (var_3 - var_0))) + var_7));
                            var_23 |= ((-((-(var_4 / var_8)))));
                        }
                    }
                }
                var_24 = (min(var_24, -13630));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    arr_23 [18] [i_0] [18] [i_0] [i_0] |= -var_7;
                    arr_24 [20] [18] [i_7] [i_7] [i_7] |= (~16);
                }
                var_25 = (min(var_25, ((((var_9 + -939689654) + (arr_10 [i_0] [i_0] [i_0]))))));
                var_26 &= (13650 == var_7);
                var_27 = (((arr_20 [i_0] [i_2] [18] [i_7]) ? var_10 : 1298967698));
            }
            var_28 *= (var_9 / 2706704614);
            var_29 -= (min(-1839727019, (((min(25, 4321193333741618921))))));
        }
        var_30 = ((-(min((arr_1 [i_0]), var_8))));
    }
    #pragma endscop
}
