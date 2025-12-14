/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235407
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((_Bool) var_16);
    var_20 = ((/* implicit */short) min((((/* implicit */int) var_0)), (max((((/* implicit */int) var_7)), (((((/* implicit */int) var_3)) + (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_0 [i_0] [i_1 - 1]) && (arr_1 [i_0] [i_0]))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((short) min((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 - 1]))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_22 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0)))))), ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))), ((+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4]))))))) ? (((/* implicit */int) ((short) min((var_11), (arr_4 [i_4 - 1] [i_4 - 1] [i_2]))))) : (((/* implicit */int) ((_Bool) max((arr_4 [i_0] [i_1 - 1] [i_3]), ((_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_1 - 1] [i_2])) / (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))));
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0] [i_0]);
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)0), ((short)2044)))) ? (((/* implicit */int) min((arr_11 [i_1 - 1] [i_1 - 1]), (var_17)))) : (((/* implicit */int) min((((/* implicit */short) var_11)), (arr_11 [i_1 - 1] [i_1 - 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5] [i_7] = ((/* implicit */short) ((var_2) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_5 - 1] [i_5] [i_5 - 1]))));
                            var_25 = ((/* implicit */short) min((var_25), (var_13)));
                            arr_28 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) ((short) var_6));
                            var_26 += ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1)));
                        }
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((_Bool) (_Bool)1)))));
                        var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) var_14)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0)))))));
                        var_29 += var_2;
                        var_30 -= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */short) (_Bool)1);
                        var_32 = ((/* implicit */short) arr_7 [i_0] [i_1 - 1] [i_0]);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_0] [i_1] [i_0] [i_9] |= ((/* implicit */_Bool) (short)-7302);
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_33 = ((/* implicit */short) ((_Bool) arr_32 [i_5]));
                            var_34 = ((/* implicit */short) ((var_15) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_5] [i_1] [i_1 - 1] [i_5 - 1])) : (((/* implicit */int) var_8))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((var_14) ? (((/* implicit */int) arr_31 [i_0] [i_1] [i_5] [i_0] [i_1])) : (((/* implicit */int) var_13)))))))));
                        }
                        var_36 = arr_3 [i_1 - 1] [i_1 - 1] [i_5 - 1];
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_37 ^= ((/* implicit */_Bool) ((short) arr_38 [i_0] [i_1] [i_11] [i_9]));
                            var_38 *= ((((/* implicit */int) arr_29 [i_1 - 1] [i_5 - 1])) >= (((/* implicit */int) arr_29 [i_1 - 1] [i_5 - 1])));
                            arr_42 [i_0] [i_1] [i_5] [i_5] [i_11] [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_24 [i_5] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_5])) : (((/* implicit */int) var_9))));
                            var_39 |= ((/* implicit */short) arr_36 [i_0] [i_9]);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_1] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_5 - 1])) : (((/* implicit */int) arr_33 [i_5] [i_5]))));
                            arr_45 [i_5] [i_1 - 1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) var_18))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_12]))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_41 = (short)(-32767 - 1);
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_5 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_13])))))));
                            var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                            var_44 = ((/* implicit */_Bool) arr_24 [i_5] [i_1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1]);
                        }
                    }
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_55 [i_0] [i_0] [i_14] [i_15] [i_14] [i_1 - 1] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_6 [i_14])))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_15 [i_0] [i_1] [i_1 - 1] [i_15] [i_14]))))));
                        arr_56 [i_15] = ((/* implicit */short) (+((((_Bool)0) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-32762)))) : (((/* implicit */int) arr_19 [i_0]))))));
                        var_45 = (_Bool)0;
                    }
                    var_46 ^= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_14])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_37 [i_0] [i_1] [i_14] [i_1] [i_0])))), ((+(((/* implicit */int) var_7)))))) * (((/* implicit */int) (!(arr_51 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    arr_57 [i_0] [i_1] [i_14] |= ((/* implicit */short) (_Bool)0);
                    /* LoopSeq 4 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_47 = ((/* implicit */short) arr_25 [i_0] [i_1] [i_0] [i_16] [i_16] [i_16]);
                        var_48 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_49 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        arr_62 [i_0] [i_0] [i_0] = ((_Bool) ((((/* implicit */_Bool) arr_48 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11))));
                        var_50 ^= ((short) arr_51 [i_1 - 1] [i_1] [i_17] [i_17] [i_17] [i_17]);
                        var_51 |= min(((short)32766), (((/* implicit */short) min((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (var_2)))));
                    }
                    for (short i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        var_52 = ((_Bool) (_Bool)1);
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1]))))) ? (((/* implicit */int) ((short) arr_54 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 - 1]))) : (((/* implicit */int) ((short) arr_54 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                        arr_65 [i_0] [i_1] [i_14] [i_18] [i_1] = ((/* implicit */_Bool) ((min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_31 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_18]))) ? (((/* implicit */int) min(((_Bool)1), (arr_7 [i_1 - 1] [i_1] [i_1 - 1])))) : (((/* implicit */int) (_Bool)0))));
                    }
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_70 [i_0] [i_1 - 1] [i_14] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1]))));
                        arr_71 [i_14] [i_1] [i_14] [i_14] = ((/* implicit */_Bool) (((_Bool)0) ? ((+(((/* implicit */int) arr_21 [i_19] [i_14] [i_1 - 1] [i_0])))) : (((/* implicit */int) var_13))));
                        var_54 = var_18;
                        var_55 = ((/* implicit */_Bool) ((arr_23 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_40 [i_0] [i_1 - 1] [i_14] [i_19] [i_1 - 1] [i_1 - 1])) : ((-(((/* implicit */int) arr_34 [i_0] [i_1 - 1] [i_14] [i_19]))))));
                    }
                }
                for (short i_20 = 1; i_20 < 20; i_20 += 4) 
                {
                    var_56 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_61 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_20 - 1])) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) var_12)))), (((/* implicit */int) (short)32759))));
                    var_57 ^= ((/* implicit */short) min((((/* implicit */int) min((arr_23 [i_1] [i_1 - 1] [i_20 + 1]), ((_Bool)1)))), ((+(((/* implicit */int) (_Bool)1))))));
                }
            }
        } 
    } 
    var_58 = ((/* implicit */_Bool) ((short) (short)(-32767 - 1)));
    var_59 = max((((/* implicit */short) var_2)), (var_0));
}
