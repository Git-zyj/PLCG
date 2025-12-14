/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219745
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
    var_10 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) (unsigned char)186);
                arr_6 [i_0] = ((((((/* implicit */int) (short)-25076)) - (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 1] [i_0 - 2])))) & (arr_2 [i_1]));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0] [i_0])), (1069822889))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_2] [i_3] [i_2] [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-292)) - (((/* implicit */int) (unsigned char)221)))))) >= (min((((/* implicit */int) arr_9 [i_2])), (arr_17 [i_2] [i_2] [i_2] [i_2])))));
                            arr_23 [i_2] [i_4] [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5] [i_5] [i_2])) | (((/* implicit */int) (unsigned char)221))))) ? (var_7) : (((int) (short)-32766)))) < ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))))));
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((unsigned char) ((arr_17 [i_6 - 1] [i_6 + 1] [i_6 - 2] [i_6 + 1]) ^ (arr_17 [i_6 + 4] [i_6 + 3] [i_6 + 3] [i_6])))))));
                            var_12 ^= ((/* implicit */unsigned char) (~(((var_7) + (arr_18 [i_6 + 2])))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */int) max((var_13), (max((((((((/* implicit */int) arr_25 [i_2] [i_3] [i_4] [i_4] [i_2] [i_4])) > (var_8))) ? ((~(((/* implicit */int) var_4)))) : ((+(((/* implicit */int) arr_13 [i_2] [i_3] [i_3])))))), (((/* implicit */int) min((arr_24 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] [i_7] [i_7]), (((short) (short)-31903)))))))));
                            arr_28 [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) (((-(((((arr_27 [i_2] [i_2] [i_5] [i_2]) + (2147483647))) << (((((/* implicit */int) var_2)) - (31604))))))) % (((((/* implicit */int) var_9)) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))));
                            arr_29 [i_4] [i_4] [i_4] [i_5] [i_7 + 1] = ((/* implicit */short) var_1);
                        }
                        var_14 = ((/* implicit */unsigned char) max(((~(min((var_8), (((/* implicit */int) arr_15 [i_2] [i_2] [i_2])))))), (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        arr_30 [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */int) (short)302)) ^ (((int) arr_25 [i_2] [i_3] [i_3] [i_4] [i_4] [i_5])))), (((/* implicit */int) ((unsigned char) arr_24 [i_2] [i_3] [i_3] [i_3] [i_2] [i_4] [i_5])))));
                    }
                    var_15 += ((/* implicit */short) arr_8 [i_2]);
                }
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned char i_9 = 3; i_9 < 12; i_9 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_10 = 1; i_10 < 13; i_10 += 3) 
                            {
                                arr_38 [i_2] [i_2] [i_9] [i_8 - 2] [i_10 + 2] [i_10 + 1] = ((/* implicit */int) (unsigned char)194);
                                arr_39 [i_2] [i_3] [i_10] [i_10] [i_3] &= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_8 - 1] [i_9 - 2] [i_10 + 1]))))), (min((((/* implicit */int) min(((unsigned char)249), ((unsigned char)21)))), (var_0)))));
                                var_16 = ((/* implicit */int) ((short) max((((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)26942)))), ((~(((/* implicit */int) arr_14 [i_2] [i_2])))))));
                            }
                            for (short i_11 = 1; i_11 < 13; i_11 += 3) 
                            {
                                arr_42 [i_2] [i_2] [i_2] [i_2] [i_3] &= ((/* implicit */int) min((min((arr_9 [i_11 + 2]), (arr_9 [i_11 + 1]))), (min(((short)-292), (arr_9 [i_11 + 1])))));
                                var_17 = ((/* implicit */short) max((((arr_34 [i_8 - 1] [i_2]) % (((/* implicit */int) (unsigned char)178)))), (((/* implicit */int) ((short) (unsigned char)58)))));
                                var_18 = ((/* implicit */int) max((var_18), (min((((/* implicit */int) ((unsigned char) arr_15 [i_8 + 1] [i_9 - 2] [i_11 + 2]))), (((((arr_10 [i_9 + 2] [i_2] [i_2]) & (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) ^ (((/* implicit */int) arr_24 [i_2] [i_3] [i_8 - 1] [i_2] [i_8 - 1] [i_9 + 1] [i_11]))))))));
                            }
                            var_19 ^= ((((/* implicit */_Bool) var_9)) ? (-950220809) : (arr_10 [i_9] [i_2] [i_2]));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_9 [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_12 = 2; i_12 < 15; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_15 = 1; i_15 < 14; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            {
                                var_21 = (((((~((~(((/* implicit */int) (short)-8815)))))) + (2147483647))) << ((((((~(((/* implicit */int) (short)20)))) + (31))) - (10))));
                                var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_50 [i_15 + 1] [i_12 - 2] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12]), (((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */int) ((arr_50 [i_15 - 1] [i_12 + 1] [i_12] [i_12] [i_12] [i_12]) > (arr_50 [i_15 + 1] [i_12 - 1] [i_12] [i_12] [i_12] [i_12])))) : (((/* implicit */int) ((((/* implicit */int) arr_43 [i_12] [i_12])) == (arr_50 [i_15 - 1] [i_12 - 1] [i_12] [i_12] [i_12] [i_12]))))));
                            }
                        } 
                    } 
                    arr_54 [i_12] [i_12] &= ((/* implicit */short) (+((-((~(var_5)))))));
                }
                for (short i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_45 [i_12] [i_13] [i_17]))));
                    arr_57 [i_13] = arr_47 [i_12] [i_12 + 1] [i_12 - 2] [i_12 - 2];
                    var_24 = ((/* implicit */int) ((((/* implicit */int) ((arr_53 [i_12 + 1] [i_17] [i_12 - 1] [i_12 + 1] [i_12 - 1]) <= (min((1707875630), (arr_50 [i_12 - 2] [i_12 - 2] [i_13] [i_13] [i_12 - 2] [i_12 - 2])))))) < (max(((~(((/* implicit */int) (short)7362)))), (((((/* implicit */_Bool) -1374172859)) ? (((/* implicit */int) arr_46 [i_12] [i_12 - 1])) : (((/* implicit */int) arr_51 [i_12 + 1]))))))));
                }
                for (int i_18 = 2; i_18 < 14; i_18 += 1) 
                {
                    var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_51 [i_18 - 1])) : (2147483627))), (((((((/* implicit */_Bool) -1180098329)) ? (var_0) : (var_5))) - (((((/* implicit */int) (unsigned char)8)) ^ (((/* implicit */int) (unsigned char)240))))))));
                    var_26 = ((/* implicit */int) max((var_26), (min((2147483647), (((((/* implicit */_Bool) (unsigned char)90)) ? (2147483647) : (((/* implicit */int) (unsigned char)193))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_19 = 1; i_19 < 15; i_19 += 4) 
                    {
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((unsigned char) arr_59 [i_18] [i_18])))));
                        var_28 = ((((/* implicit */_Bool) min((max((-1248681896), (((/* implicit */int) var_4)))), (var_6)))) ? (((/* implicit */int) (short)28593)) : ((+(arr_47 [i_12] [i_13] [i_12] [i_19 + 1]))));
                        /* LoopSeq 3 */
                        for (short i_20 = 0; i_20 < 16; i_20 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_59 [i_19 + 1] [i_13])))) | ((-(((/* implicit */int) arr_59 [i_12] [i_12])))))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_19] [i_19] [i_18])) ? (((/* implicit */int) arr_63 [i_12 - 1] [i_12 + 1] [i_20])) : (((/* implicit */int) arr_43 [i_12 - 1] [i_12 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_46 [i_19 + 1] [i_18 - 1])) >= ((-(((/* implicit */int) (short)-18392))))))) : (min((((/* implicit */int) arr_52 [i_19] [i_13] [i_13] [i_12 + 1])), (((int) arr_44 [i_12 - 2] [i_20]))))));
                        }
                        for (short i_21 = 0; i_21 < 16; i_21 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) max((var_31), ((+(((((/* implicit */_Bool) (unsigned char)59)) ? (-1248681896) : (arr_58 [i_12 + 1] [i_18 + 1] [i_18 + 2] [i_19 - 1])))))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (-((-(arr_50 [i_12] [i_18 - 1] [i_19 - 1] [i_19 - 1] [i_12] [i_19 - 1]))))))));
                        }
                        for (int i_22 = 0; i_22 < 16; i_22 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_4), (arr_46 [i_12 - 2] [i_13])))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)8)), (arr_46 [i_19 + 1] [i_22])))) : (((/* implicit */int) min((arr_65 [i_12 - 2] [i_13] [i_22]), (arr_46 [i_12 - 2] [i_18 + 1]))))));
                            var_34 = ((/* implicit */short) (-((-(((/* implicit */int) (short)32754))))));
                            arr_68 [i_12 - 2] [i_12 - 2] [i_18] [i_12 - 2] [i_22] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_64 [i_12 - 1] [i_19] [i_19 - 1] [i_18 + 1] [i_12 - 1])) > (arr_66 [i_19 + 1] [i_18 + 2] [i_12 - 2] [i_18 + 2] [i_19]))))));
                            arr_69 [i_12] [i_22] [i_12] [i_22] [i_22] = ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)184))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)184)) > (arr_47 [i_19 - 1] [i_18] [i_18 + 2] [i_12 + 1])))) : (min((((/* implicit */int) max((((/* implicit */short) arr_52 [i_12] [i_12] [i_22] [i_22])), ((short)-25648)))), (var_0))));
                        }
                    }
                    for (short i_23 = 0; i_23 < 16; i_23 += 4) 
                    {
                        var_35 = ((/* implicit */short) max((var_35), (var_4)));
                        var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) arr_46 [i_18] [i_13])) ? ((+(((/* implicit */int) ((unsigned char) 2147483647))))) : ((-(arr_56 [i_12 - 2] [i_12 - 1] [i_12 - 2])))))));
                        var_37 = var_8;
                        var_38 = ((/* implicit */unsigned char) (((-(18))) / (var_5)));
                    }
                    for (int i_24 = 1; i_24 < 13; i_24 += 1) 
                    {
                        var_39 = ((/* implicit */int) max((var_39), (max(((((-(var_5))) & (var_6))), (max((((/* implicit */int) min((((/* implicit */short) arr_59 [i_12] [i_13])), (arr_71 [i_24 - 1] [i_24 - 1] [i_18 + 1] [i_13] [i_12 - 1] [i_12])))), (arr_50 [i_24] [i_12] [i_18] [i_13] [i_12] [i_12])))))));
                        arr_77 [i_13] [i_18] [i_13] [i_13] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) arr_48 [i_13] [i_18] [i_13])))))))));
                        arr_78 [i_24] [i_18 - 2] [i_13] [i_12] = (short)32749;
                    }
                    for (unsigned char i_25 = 2; i_25 < 13; i_25 += 3) 
                    {
                        arr_82 [i_25] [i_13] [i_13] [i_13] = ((((/* implicit */_Bool) arr_60 [i_18 - 1] [i_18 - 2] [i_18 + 2] [i_18 - 2])) ? (((((/* implicit */_Bool) arr_67 [i_25] [i_25] [i_25] [i_25] [i_18 - 1])) ? (((/* implicit */int) var_2)) : (arr_60 [i_25] [i_18 + 2] [i_18 + 2] [i_18 + 2]))) : (((((/* implicit */_Bool) arr_62 [i_25] [i_18 - 1] [i_18 - 1] [i_25 + 3] [i_18 - 1])) ? (((/* implicit */int) arr_67 [i_25] [i_25] [i_18] [i_25] [i_18 + 2])) : (((/* implicit */int) arr_62 [i_25] [i_18 - 2] [i_25 - 2] [i_18 - 2] [i_18 - 2])))));
                        var_40 = ((((/* implicit */_Bool) (-(1983845079)))) ? (((int) arr_73 [i_12 + 1] [i_25 + 2] [i_25 + 2] [i_25 + 2] [i_25 + 2] [i_18 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1715178201))))));
                        arr_83 [i_12 - 2] [i_25 + 1] [i_13] [i_25] &= ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_43 [i_25 - 2] [i_18 + 1])))), (-1983845079)));
                    }
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 16; i_26 += 2) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 16; i_27 += 3) 
                        {
                            {
                                arr_89 [i_27] [i_27] [i_18 + 1] [i_27] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)64))));
                                var_41 *= ((/* implicit */short) min((min(((-(((/* implicit */int) (unsigned char)208)))), (min((-1983845079), (((/* implicit */int) arr_65 [i_12] [i_13] [i_12])))))), (max((arr_86 [i_12 - 2]), (arr_86 [i_12 - 2])))));
                                arr_90 [i_12] [i_13] [i_18 - 2] [i_26] [i_27] = ((/* implicit */short) (+(((arr_73 [i_18] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 2] [i_18]) ^ (((/* implicit */int) arr_81 [i_18 + 1] [i_18 + 1] [i_18 + 1]))))));
                                var_42 = ((/* implicit */unsigned char) max(((-(var_7))), (max(((~(2147483647))), (var_0)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (int i_28 = 2; i_28 < 15; i_28 += 1) 
                {
                    for (int i_29 = 0; i_29 < 16; i_29 += 3) 
                    {
                        {
                            var_43 = (-(max((((((/* implicit */_Bool) arr_73 [i_12] [i_12] [i_28] [i_28] [i_12] [i_28])) ? (1715178180) : (((/* implicit */int) arr_88 [i_12] [i_28] [i_13] [i_12])))), ((-(((/* implicit */int) (unsigned char)184)))))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-17094)) ? (max(((+(((/* implicit */int) (unsigned char)238)))), ((+(((/* implicit */int) (unsigned char)90)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -920927550)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (short)-185)) : (((int) arr_94 [i_28] [i_28]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-17094)), (var_0)));
}
