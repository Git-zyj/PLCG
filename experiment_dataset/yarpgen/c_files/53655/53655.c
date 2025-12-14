/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_15 = ((max((~var_5), (((27 << (var_1 - 4193262814457690338)))))) % var_6);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = ((((((min((arr_7 [i_0] [i_1]), var_11))) ? 6533081604772827711 : 1))) ? -var_2 : (((((arr_6 [i_0]) + (arr_1 [i_4]))))));
                                var_17 -= ((((max((arr_12 [i_2 - 1] [i_0 + 2]), (arr_5 [i_0] [i_2])))) ? ((-7 ? -28 : 2101221064559094574)) : (((((var_4 ? (arr_1 [3]) : var_2)))))));
                                var_18 = (arr_10 [i_4] [5]);
                            }
                        }
                    }
                    var_19 |= ((((((!(arr_8 [i_2 + 3] [i_0 - 1] [i_0] [i_0]))))) - (((-16 <= var_2) ? var_12 : var_8))));
                    var_20 = (min(var_20, ((max((arr_1 [i_0]), ((((arr_10 [i_0] [11]) != (arr_9 [i_0])))))))));
                    var_21 += (((var_8 + 2147483647) << (((arr_3 [i_0 - 1] [i_2 + 4]) >> (((arr_12 [i_0 - 2] [i_0 - 1]) - 30792))))));
                }
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_22 = ((((~(((arr_4 [i_0]) | (arr_0 [i_5] [i_5]))))) * ((((arr_12 [i_5] [i_1]) ? (((!(arr_14 [i_5])))) : ((min(var_13, (arr_3 [i_1] [i_0])))))))));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = ((65535 ? ((var_13 ? var_13 : 11860495565838747620)) : ((108 ? var_10 : (arr_7 [i_5 + 1] [i_0 + 2])))));
                        var_24 = (arr_18 [i_0] [13] [13] [i_5 + 3] [1] [i_5]);
                        var_25 = ((-38 == ((~((var_11 ? (arr_9 [i_5]) : (arr_19 [i_6] [i_0] [i_5] [3] [11] [i_0])))))));
                        var_26 = (arr_14 [i_0]);
                    }
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        var_27 = ((min(-248, ((max((arr_2 [i_0]), var_13))))));
                        var_28 = (arr_12 [i_0] [i_0]);

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_29 = (((arr_15 [i_0] [i_1] [i_0] [1]) ? (((var_9 ? (((var_12 & (arr_20 [i_8] [i_7] [i_5] [10])))) : (max(var_6, var_11))))) : (16345523009150457056 >> 37)));
                            var_30 += (((((arr_6 [i_7 - 1]) ? 1 : (arr_6 [i_7 - 1]))) / (arr_19 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_31 = (max(((-110 ? 8 : 1)), (((!(arr_2 [i_0 - 2]))))));
            }
        }
    }
    var_32 = ((!((max(5792712282320606168, 2101221064559094582)))));
    #pragma endscop
}
