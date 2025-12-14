/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 -= -750138983;
        arr_4 [3] [i_0] = (arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [9] = (min(-72, (((((42924 ? 18 : 0))) ? (min((arr_0 [i_2]), (arr_3 [i_0]))) : 4294967295))));
                    var_14 = (max((min((arr_9 [i_0] [0]), var_5)), (((((min((arr_0 [i_1]), 18446744073709551615))) ? ((234 / (arr_11 [i_2] [0] [i_0]))) : 288230376151711743)))));
                    arr_13 [i_0] = ((max(65532, (arr_8 [i_0] [i_1] [i_0] [3]))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 &= (arr_0 [i_2]);
                        arr_16 [i_2] &= (min((((min(15045, (arr_5 [i_3] [i_2] [i_0]))))), var_6));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_20 [i_0] [i_0] [5] [i_0] [i_0] [i_0] = ((var_9 / (((min((arr_5 [i_2] [1] [i_4]), (arr_5 [i_0] [i_1] [7])))))));
                            arr_21 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] |= ((~(((min(var_11, 748105934370083398)) << (var_10 - 5070660964521752847)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 7;i_5 += 1)
                        {
                            var_16 = (max(var_16, (((4398046511103 ? var_7 : ((-(-32767 - 1))))))));
                            var_17 = (max(var_17, (arr_18 [4] [i_1] [4] [i_2] [4] [i_5])));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_18 = -7;
                            var_19 &= var_1;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_20 *= ((~(min(12, var_9))));
                            arr_30 [i_0] [0] [i_0] [3] [0] = ((((7 != 9223372036854775807) * (249 == 15))));
                            var_21 = ((((max(((var_8 ? var_6 : -64)), ((min((arr_28 [i_7] [8] [i_0]), (arr_28 [i_0] [i_1] [i_2]))))))) ? (((arr_24 [5] [9] [9] [i_3] [i_7]) ? ((min((arr_27 [6] [i_1] [i_7]), 1993652692))) : (min((arr_8 [i_0] [i_1] [i_0] [i_3]), var_5)))) : (arr_9 [i_1] [i_2])));
                            arr_31 [i_0] [i_1] [6] [i_2] [i_3] [i_7] &= (arr_25 [i_7] [8] [0] [i_7]);
                        }
                        arr_32 [0] [i_2] [i_2] [i_2] [i_1] [i_0] = (min((min(var_5, (max((arr_15 [i_3] [i_2] [i_0] [i_0]), var_0)))), (((var_2 * ((6231497418400178472 ? 1387 : (arr_27 [i_3] [i_2] [i_0]))))))));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_22 -= (min(((-(4294967295 || 161))), var_11));
            arr_35 [3] [0] = arr_15 [3] [4] [7] [9];
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_23 += ((!((min((arr_28 [i_0] [i_0] [0]), (((arr_36 [8] [8] [i_0]) ? var_10 : var_6)))))));
            var_24 *= ((((4294967295 ? (arr_33 [i_0] [i_9]) : (arr_33 [i_9] [i_0]))) != 65527));
        }
    }
    var_25 = (-52 / 1);
    var_26 = ((((max(11343, 49656))) < ((((min((-32767 - 1), 2375265362069371339))) ? var_9 : ((max(70, 1023392991)))))));
    #pragma endscop
}
