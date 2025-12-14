/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_17 = ((((~(4094387659009437290 - 14352356414700114326))) - (((~3832877749) & (4094387659009437290 ^ 24446)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] [3] [1] [9] [i_0] = ((!(~-24427)));
                            var_18 = (((~4094387659009437292) * -24427));
                            arr_16 [i_0] [15] [i_0] [i_2] [i_3] [i_0] [15] = (((~(arr_5 [1] [3] [i_1]))));
                            var_19 = 396551033;
                        }
                        arr_17 [i_3] [i_2] [i_2] [i_0 - 1] |= (arr_8 [i_2]);
                        var_20 = (min(var_20, 1406447706));
                    }
                    arr_18 [i_0] [i_1] [i_1] = (~14352356414700114298);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_21 = (~(arr_14 [i_0]));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_24 [i_1] [i_0] [1] [i_6] = (arr_6 [i_0] [i_1] [i_2]);
                            arr_25 [i_0] = (~2888519602);
                            var_22 = ((~(((((arr_11 [i_0] [i_0] [i_0]) + 2147483647)) << (126 - 126)))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_23 ^= (~1927820020652502995);
                            arr_30 [i_0 - 1] [i_0] [i_0] [i_0] = 1;
                        }
                        var_24 = (min(var_24, (((~(arr_0 [i_0 - 1]))))));
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_25 &= -24430;
                        var_26 = (max(var_26, (arr_33 [i_0] [4] [i_2] [4])));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_0] [15] = 1406447706;
                        var_27 |= (~38411);

                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            var_28 ^= 24443;
                            var_29 = 4094387659009437292;
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_30 ^= (arr_7 [i_11] [i_2] [i_1] [11]);
                        arr_46 [15] [i_0] [i_2] [i_0] = ((~(arr_29 [i_0] [i_1] [i_0] [i_11] [i_0] [i_0])));
                        arr_47 [i_0] [i_0] [i_2] [i_11] [i_0] = (arr_3 [i_0 - 1]);

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_31 = (min(var_31, ((((arr_3 [i_0]) || (arr_44 [i_0 + 1] [i_11] [i_11] [i_0]))))));
                            var_32 *= (((arr_3 [i_0 - 1]) != 53857));
                        }
                    }
                }
            }
        }
    }
    var_33 = (((var_8 + 9223372036854775807) << ((((var_16 - (var_14 == var_8))) - 1235119014))));
    var_34 = var_1;
    var_35 = 2008844193;
    #pragma endscop
}
