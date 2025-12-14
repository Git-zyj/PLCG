/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229962
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (unsigned short)0;
                var_12 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) var_6)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned char) var_0);
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4 - 2] [(unsigned char)6] = ((/* implicit */short) arr_12 [i_0] [i_0] [i_1] [11] [i_3] [i_3] [i_0]);
                                arr_16 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_4 - 2] [i_4 + 1] [(signed char)6] [i_4 - 2]))));
                                var_14 = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                    arr_17 [(unsigned short)13] [i_1] [i_1] = var_3;
                    var_15 = (unsigned short)20299;
                }
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)3), ((unsigned char)255)))) > (((/* implicit */int) var_8))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 4; i_6 < 11; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */int) var_6)) >> (((1725403081) - (1725403063))))) << ((((~(((/* implicit */int) var_1)))) + (72))))) : ((-(arr_5 [(signed char)5] [(signed char)5] [(signed char)5] [i_6]))))))));
                        arr_22 [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */short) arr_12 [i_6 - 1] [i_6 - 4] [(signed char)5] [i_6 - 1] [i_6] [i_6 + 2] [i_5])), (max(((short)-10143), ((short)32767))))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 13; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */short) (unsigned short)0);
                        /* LoopSeq 4 */
                        for (int i_8 = 2; i_8 < 13; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_5])))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_0] [i_1] [i_5])) <= (((/* implicit */int) max((arr_10 [i_5] [i_1]), ((short)17075)))))) ? (((((/* implicit */int) (unsigned short)37820)) | (((/* implicit */int) (signed char)12)))) : (((((/* implicit */_Bool) (short)17371)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (signed char)14)))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) (signed char)6);
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (unsigned short)8164))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (signed char)12))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_9)))) % (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-18)))))))));
                            var_25 = ((/* implicit */int) ((unsigned char) (short)0));
                            arr_33 [i_0] [i_0] [i_5] [i_5] [i_0] = var_11;
                        }
                        for (unsigned char i_11 = 2; i_11 < 11; i_11 += 3) 
                        {
                            arr_37 [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (short)8393)) : (((/* implicit */int) (unsigned short)0)))))));
                            var_26 = ((/* implicit */int) (unsigned char)38);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-14479)) : (((/* implicit */int) arr_3 [i_11 + 3] [i_11 + 3] [i_11 - 2]))))) ? (var_5) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_26 [i_1] [i_5] [(unsigned char)4])))))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_11 - 2] [i_5] [i_7 + 1])) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) arr_25 [i_7 - 1] [i_11 - 1] [i_5] [(signed char)10])))))));
                            arr_38 [i_0] [(unsigned char)8] [i_5] [(signed char)13] [i_11] [i_11] [i_11] = ((/* implicit */short) arr_25 [i_0] [i_5] [i_7] [i_11]);
                        }
                        var_29 *= ((/* implicit */unsigned char) (signed char)15);
                    }
                    arr_39 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_26 [i_5] [i_1] [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_30 -= ((/* implicit */unsigned short) (unsigned char)87);
                        arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((max((((/* implicit */unsigned short) (short)24316)), (arr_2 [i_5]))), (var_3))), (((/* implicit */unsigned short) var_4))));
                        var_31 = (unsigned char)107;
                        var_32 = ((/* implicit */short) var_2);
                        var_33 += max(((unsigned short)28543), (((/* implicit */unsigned short) (unsigned char)91)));
                    }
                    for (short i_13 = 2; i_13 < 13; i_13 += 1) 
                    {
                        var_34 = ((/* implicit */short) max(((unsigned short)27493), (((/* implicit */unsigned short) (signed char)-12))));
                        var_35 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_13] [i_13 + 1] [i_13 + 1] [i_13] [(unsigned short)6] [i_13] [i_13])) << (((((/* implicit */int) arr_31 [i_13] [12] [i_5] [i_5] [i_1] [i_0] [i_0])) - (8672)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 3; i_14 < 12; i_14 += 1) /* same iter space */
                        {
                            arr_47 [i_0] [(unsigned short)10] [(unsigned short)10] [i_14] [i_0] = 10889594;
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1588524172)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)24))));
                            var_37 = ((/* implicit */signed char) (~(((/* implicit */int) arr_46 [(unsigned char)2] [i_1] [i_1] [i_14] [(unsigned short)11] [i_14] [i_13]))));
                        }
                        for (unsigned short i_15 = 3; i_15 < 12; i_15 += 1) /* same iter space */
                        {
                            arr_50 [i_15] [i_15] [(short)7] [(short)7] [i_5] [i_1] [i_0] = (unsigned short)39288;
                            var_38 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)2072)) ^ (((/* implicit */int) var_1))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 1) 
                        {
                            arr_54 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) var_7);
                            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (~(max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)26261)))), (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (signed char)0)))))))))));
                            var_40 = ((((/* implicit */_Bool) 1992521028)) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (347147527) : (((/* implicit */int) (unsigned char)0)))) : (var_2));
                            arr_55 [i_0] [(unsigned short)6] [i_0] [i_1] [i_0] [i_0] [i_16] = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) (signed char)14))))))));
                            arr_56 [i_0] [i_1] = ((/* implicit */unsigned short) (+((-(927826132)))));
                        }
                        var_41 = ((/* implicit */unsigned short) ((unsigned char) (+(((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [(unsigned char)2] [i_13])) ? (((/* implicit */int) var_4)) : (arr_6 [i_13]))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39295)) || (((/* implicit */_Bool) (short)1))));
                        var_43 = (unsigned char)250;
                        arr_60 [i_0] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-8))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_5] [i_5] [i_17])) ? (((/* implicit */int) (short)-30291)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_5] [i_17] [i_17] [i_17])))) : (((/* implicit */int) max((arr_27 [i_0] [i_1] [i_1] [i_5] [i_5] [i_5] [i_17]), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))));
                        arr_61 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)40785)) << (((((/* implicit */int) (unsigned short)12288)) - (12276)))));
                    }
                    arr_62 [i_0] [i_1] [i_1] [i_5] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)134))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_35 [i_0] [i_1] [i_5] [i_5])))))))) : ((-(((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [(unsigned short)4] [i_0] [i_0] [i_0])))));
                }
            }
        } 
    } 
    var_44 &= ((/* implicit */unsigned short) var_9);
    var_45 = ((/* implicit */unsigned char) min((var_45), (var_11)));
    var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) var_2)))));
}
