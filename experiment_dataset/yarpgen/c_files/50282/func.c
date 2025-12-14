/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50282
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) (_Bool)1);
                        var_16 += ((/* implicit */short) (-(((/* implicit */int) max((arr_6 [i_2 - 1] [(short)4] [(short)4]), (arr_6 [i_2 - 1] [(_Bool)1] [i_3]))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 4; i_4 < 15; i_4 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) arr_1 [i_0]);
                            var_18 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_3] [i_4]))));
                            var_19 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) (short)-8804)) : (((/* implicit */int) (short)-23079)))) & (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [(short)14] [(short)14])) == (((/* implicit */int) max(((short)-9567), (((/* implicit */short) var_10))))))))));
                            var_20 = ((/* implicit */short) arr_2 [i_0]);
                        }
                        for (short i_5 = 4; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) ((((((/* implicit */int) (short)-12194)) + (2147483647))) << (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(short)9] [i_0]))));
                            var_22 = ((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_5] [i_5 - 1]))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_3 [i_0] [i_2] [i_2];
                            arr_15 [i_0] [i_1] = arr_10 [i_2] [i_3] [i_2] [i_1] [i_1] [i_0];
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((arr_16 [i_0] [i_1] [i_1] [i_1] [i_6]), ((short)23079))))))));
                        var_24 ^= ((/* implicit */short) ((((/* implicit */int) min((((short) (short)9240)), (((/* implicit */short) ((((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [(_Bool)1])) < (((/* implicit */int) arr_5 [(short)11] [i_2] [i_6])))))))) | (((/* implicit */int) arr_6 [i_0] [(short)12] [(_Bool)1]))));
                        var_25 += arr_18 [i_0] [(short)3] [i_0];
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = (_Bool)0;
                        arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-11086))));
                        var_27 = ((/* implicit */_Bool) (short)9240);
                    }
                    for (short i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        arr_26 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])), ((~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_8] [i_0] [i_2] [i_8] [i_8 - 1] [i_0])) < (((/* implicit */int) (short)(-32767 - 1))))))))));
                        var_28 = ((/* implicit */short) arr_18 [i_2] [i_2] [i_2]);
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_29 ^= (_Bool)1;
                            arr_31 [i_9 - 1] [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)32760)) - (((/* implicit */int) (short)32737))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 4; i_11 < 17; i_11 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) (short)-21004);
                                var_31 = var_8;
                            }
                        } 
                    } 
                }
                for (short i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */short) max((((/* implicit */int) (short)8804)), (((((/* implicit */int) arr_12 [i_14] [i_14] [i_1] [i_1] [i_14] [i_1])) | (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))));
                                var_33 *= ((/* implicit */short) arr_19 [i_14] [i_13] [i_1] [i_0]);
                                var_34 += ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(short)11] [i_12] [(_Bool)1] [(short)11] [(_Bool)1])) && (((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [i_12] [i_13] [i_13] [i_14]))))) ^ (((/* implicit */int) ((arr_5 [(short)8] [i_1] [i_1]) && (((/* implicit */_Bool) (short)-9240))))))) == (((/* implicit */int) arr_38 [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) min(((short)-8805), (((/* implicit */short) (_Bool)1))));
                    var_36 += arr_42 [i_0] [i_0] [i_12];
                    /* LoopSeq 3 */
                    for (short i_15 = 3; i_15 < 16; i_15 += 2) 
                    {
                        arr_47 [i_0] [(_Bool)1] [(short)7] [i_15] = ((/* implicit */short) ((_Bool) arr_12 [(short)0] [(_Bool)1] [i_1] [(_Bool)1] [i_12] [i_15]));
                        var_37 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_12])) >> (((arr_37 [i_0] [i_1] [i_12]) ? (((/* implicit */int) arr_43 [i_0] [i_1] [i_12] [(_Bool)1] [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_1])))))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_51 [i_0] [i_0] [(short)4] [(_Bool)1] [(_Bool)1] [(_Bool)1] |= min((min(((short)16228), ((short)22791))), (((/* implicit */short) arr_35 [i_0] [i_0] [i_0] [(_Bool)1] [(short)11] [(_Bool)1] [i_0])));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_5 [i_12] [(short)10] [i_12]))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((((((/* implicit */int) (short)15792)) > (((/* implicit */int) (short)31895)))), (((_Bool) var_14))))))))));
                        /* LoopSeq 3 */
                        for (short i_17 = 1; i_17 < 15; i_17 += 3) 
                        {
                            arr_54 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) ((_Bool) (_Bool)0))) | (((/* implicit */int) (_Bool)1)))), (((arr_43 [i_0] [i_0] [i_1] [i_1] [(_Bool)1] [i_16] [i_17]) ? (((((/* implicit */int) arr_34 [i_0] [i_0] [i_0])) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_35 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_24 [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_55 [i_0] [i_0] [i_0] [(short)17] [(short)17] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_48 [(short)0] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_43 [(_Bool)1] [i_1] [(short)11] [(short)11] [i_16] [i_16] [i_16]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0]))))) : (((/* implicit */int) max(((short)-4546), (((/* implicit */short) (_Bool)0))))))), (((/* implicit */int) min(((short)3143), (((/* implicit */short) (!(((/* implicit */_Bool) var_14))))))))));
                            arr_56 [(_Bool)1] [i_0] = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)20483)) ? (((/* implicit */int) max((arr_10 [i_0] [i_0] [(_Bool)1] [i_0] [i_16] [i_17]), ((_Bool)1)))) : (((/* implicit */int) var_0))))));
                            arr_57 [i_0] [(short)5] [i_0] [i_17] = ((/* implicit */_Bool) ((((arr_48 [(short)15] [i_0] [(short)6] [i_0]) ? (((((((/* implicit */int) (short)-27516)) + (2147483647))) << (((((((/* implicit */int) arr_41 [i_0] [(_Bool)1])) + (27618))) - (5))))) : (((/* implicit */int) min((arr_49 [i_0] [i_1] [i_16] [i_17]), (arr_53 [i_12] [(short)10] [i_0] [(short)9] [(short)9] [(short)9] [i_12])))))) << (((/* implicit */int) arr_2 [i_0]))));
                            var_39 += ((/* implicit */short) arr_1 [i_16]);
                        }
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            arr_61 [i_0] [i_1] [i_1] [(short)4] [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-3143))))) ? (((/* implicit */int) arr_50 [i_0] [i_0] [i_12] [i_0] [i_0])) : (((/* implicit */int) arr_53 [i_18] [(short)16] [i_0] [i_18] [i_18 - 1] [i_18] [i_18]))));
                            arr_62 [(short)12] [i_1] [(short)16] [i_18] [i_18] [(short)12] |= ((_Bool) arr_43 [i_16] [(_Bool)1] [(short)12] [i_18 - 1] [i_18] [i_12] [i_18]);
                            var_40 = arr_11 [(short)3] [i_0] [i_18];
                            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_32 [i_0] [i_1] [i_12] [(_Bool)1] [(short)14])) : (((/* implicit */int) (_Bool)0)))))))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_42 = ((/* implicit */short) ((_Bool) (_Bool)1));
                            var_43 = ((/* implicit */short) (~(((/* implicit */int) max((min((arr_4 [i_0] [i_0] [i_0]), ((short)-21683))), (((/* implicit */short) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)-13756))))))))));
                            var_44 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1755)) ? ((((~(((/* implicit */int) arr_64 [(_Bool)1] [i_1] [i_1] [(_Bool)0] [(short)0])))) + (((/* implicit */int) min((arr_60 [i_0] [i_19] [i_19] [i_16] [i_19] [i_12]), (var_10)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_46 [i_0] [i_12] [i_1] [i_0])) : (((/* implicit */int) arr_53 [i_1] [i_1] [(_Bool)1] [i_1] [(short)0] [i_1] [i_1]))))) ? ((~(((/* implicit */int) arr_58 [i_19])))) : (((/* implicit */int) ((((/* implicit */int) arr_50 [(short)8] [i_12] [i_12] [(short)8] [i_12])) < (((/* implicit */int) arr_49 [(short)6] [i_12] [(short)6] [i_19])))))))));
                        }
                    }
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        arr_68 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) (short)-21444)) : (((/* implicit */int) arr_46 [i_0] [i_0] [i_12] [i_20 + 1]))))) && ((!(((/* implicit */_Bool) var_8))))))) & (((/* implicit */int) arr_35 [i_0] [(_Bool)1] [i_1] [i_12] [i_20 + 1] [(short)15] [i_20]))));
                        var_45 = ((short) ((((/* implicit */_Bool) (short)4221)) ? (((arr_60 [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1]) ? (((/* implicit */int) (short)15813)) : (((/* implicit */int) arr_25 [i_0] [i_12])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_12] [i_12] [i_20])) ? (((/* implicit */int) arr_17 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_20] [i_20 + 1] [i_20]))))));
                        var_46 -= arr_58 [i_12];
                        var_47 = ((/* implicit */_Bool) var_8);
                        var_48 -= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-23327))));
                    }
                }
                for (short i_21 = 0; i_21 < 18; i_21 += 3) /* same iter space */
                {
                    arr_71 [i_0] = arr_7 [i_0] [i_0] [i_1] [i_21] [i_1];
                    /* LoopNest 2 */
                    for (short i_22 = 3; i_22 < 17; i_22 += 2) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                var_49 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_65 [i_0] [i_0] [(_Bool)1] [i_0] [(short)6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-3143)))), (((((/* implicit */_Bool) arr_9 [i_22] [i_22] [i_22 + 1] [i_22] [i_22])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_21] [i_21] [(_Bool)1] [i_23])) : (((/* implicit */int) arr_76 [i_23] [i_23] [i_23] [(_Bool)1] [i_23]))))))) ? (((/* implicit */int) ((arr_77 [i_22 - 3] [i_22] [i_21] [i_22]) || (arr_77 [i_22 - 1] [i_1] [i_22] [i_1])))) : ((((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_72 [i_0] [i_0] [i_0] [i_0])))) | (((/* implicit */int) (short)31087))))));
                                var_50 = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [(short)12] [i_1] [i_1] [i_1])) * (min((((((/* implicit */int) arr_45 [i_21] [i_21] [i_21] [i_0])) / (((/* implicit */int) (short)-5324)))), (((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) * (((/* implicit */int) (short)511))))))));
                                var_51 = ((/* implicit */_Bool) min((var_51), (var_4)));
                                var_52 -= ((/* implicit */_Bool) ((short) arr_11 [i_22 + 1] [(_Bool)1] [i_0]));
                                var_53 -= (_Bool)1;
                            }
                        } 
                    } 
                }
                arr_79 [i_0] [i_0] = ((/* implicit */short) var_10);
            }
        } 
    } 
    var_54 = ((/* implicit */short) var_13);
    var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_3)))))));
}
