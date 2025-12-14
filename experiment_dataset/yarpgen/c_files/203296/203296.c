/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((min(((((arr_2 [i_1]) ? (-32767 - 1) : 1))), (arr_2 [i_1])))) & (min((arr_3 [i_0] [i_0] [i_0]), (max(var_14, (arr_1 [i_0] [i_1])))))));
                arr_5 [i_1] [i_1] [i_1] = (min(-1, 16036099078345069887));
                var_18 = ((-((max((arr_3 [i_1] [i_1] [i_0]), (arr_3 [i_0] [i_0] [i_1]))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = 1;
                        var_20 = (max(var_20, (((!(((var_12 << (((arr_7 [18]) - 7504199676513358063))))))))));
                        var_21 |= (((((var_7 ? (arr_6 [4] [i_1] [4]) : var_13))) ? -1 : ((var_3 ? 1 : (arr_6 [8] [i_2] [i_3])))));
                        var_22 = (max(var_22, (((((!(arr_1 [i_0] [i_1]))) ? ((min((arr_1 [i_2] [i_3]), (arr_1 [i_2] [i_0])))) : (arr_1 [i_0] [i_3]))))));
                    }
                    var_23 -= max(var_4, ((((((arr_3 [i_2] [i_0] [i_0]) + var_3))) ? ((0 ? (arr_0 [i_0] [i_2]) : 9223372036854775807)) : (arr_2 [8]))));
                    var_24 = ((((!(arr_1 [i_0] [i_0])))));
                    var_25 = ((-80 != ((888736305733071475 ? -29415 : 1))));
                    var_26 = (min(((6002278642638984105 ? -var_7 : 1)), (!var_4)));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_27 = (max(var_27, (((var_6 ? ((-(var_14 & var_13))) : ((var_16 | (max(56, 12444465431070567534)))))))));
                                var_28 = (((((var_2 || ((((arr_16 [i_5] [i_1] [i_5] [i_5]) ? 3583553819351405163 : 7359262095847384746)))))) * ((-(((arr_9 [i_1]) + (arr_9 [i_1])))))));
                                var_29 = ((min(((max(32767, 255)), 12))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_23 [i_1] [i_4] = (max((-32767 - 1), 7603681035255580629));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_30 = ((((var_13 ? (arr_8 [i_0] [i_1] [6] [i_8]) : (-32767 - 1))) & ((~(var_7 ^ var_3)))));
                            arr_26 [i_1] [i_7] [i_1] [i_1] [i_1] = (max(var_15, ((((min(9223372036854775807, 32749))) * (((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (arr_20 [i_0] [i_4] [i_7] [i_8]) : var_14))))));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_31 *= 9223372036854775807;
                            var_32 ^= (-var_4 & ((1 ? -24062 : (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_33 = (-80 ^ (((min(78, 254)))));
                        }
                        var_34 |= ((-((-(~-17056)))));
                    }
                    var_35 = (max(var_35, var_9));
                    arr_31 [i_0] [i_1] [i_1] = -67;
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_36 = ((1 ? (((arr_32 [i_0] [i_1] [i_0]) - (arr_0 [i_0] [i_0]))) : ((((max(var_2, var_2)) % var_12)))));
                            arr_38 [5] [i_10] [i_1] = (1 != var_2);
                        }
                    }
                }
            }
        }
    }
    var_37 = var_9;
    #pragma endscop
}
