/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221059
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
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_0)));
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) arr_4 [i_0] [i_2]);
                    var_15 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    var_16 &= (~(((/* implicit */int) arr_4 [i_2 - 2] [i_2 + 1])));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11376)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19387))) : (-5884868728244188669LL)));
                }
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    var_18 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (short)-19409)))));
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_6)), (((long long int) (_Bool)1))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(((int) arr_9 [i_0] [i_0] [i_0])))))));
                        var_21 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) (unsigned char)94)), ((unsigned short)11395))), (min(((unsigned short)9429), (((/* implicit */unsigned short) (unsigned char)224))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        var_22 = (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)11390)));
                        arr_19 [i_6] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) min(((short)-8759), (((/* implicit */short) (_Bool)1)))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)15))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                        arr_20 [i_1] [(short)3] [i_4] = ((int) ((_Bool) arr_16 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0]));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((((/* implicit */int) (unsigned char)17)) / (((/* implicit */int) (signed char)(-127 - 1))));
                        var_25 = ((/* implicit */short) -102002446);
                        var_26 |= ((/* implicit */_Bool) (~(var_0)));
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 12; i_9 += 1) 
                        {
                            {
                                arr_31 [(unsigned char)9] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) min(((unsigned short)54141), ((unsigned short)44859)));
                                var_27 = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                }
                for (long long int i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_21 [i_1] [i_10] [i_10 - 1] [i_10] [i_10 + 1])), ((short)27392)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            {
                                var_29 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (short)27413)))) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_12])))), (((/* implicit */int) (_Bool)1))));
                                var_30 = ((/* implicit */long long int) (+(4224822565U)));
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_8 [i_14] [i_1] [i_1]), (((/* implicit */short) (_Bool)1)))))))), (min((var_2), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])))))))));
                            var_32 = ((/* implicit */long long int) min((1279888432), ((~(((/* implicit */int) arr_44 [i_0] [i_0] [2LL] [0ULL]))))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1])) ? (arr_25 [i_0] [i_1] [i_13] [i_13] [i_14] [i_15]) : (max((var_8), (((/* implicit */long long int) arr_6 [i_15 + 1] [i_1]))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 2) 
                        {
                            var_34 = (~(((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (-6691438576334027849LL))))));
                            var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((504108779342732250LL), (((/* implicit */long long int) (unsigned char)114)))))));
                            var_36 = ((((/* implicit */_Bool) var_4)) ? ((-(((unsigned long long int) arr_21 [i_1] [i_1] [i_1] [i_14] [i_16])))) : (((/* implicit */unsigned long long int) min((1712367925U), (arr_43 [i_0] [i_1] [(_Bool)1] [i_14] [i_16] [i_13])))));
                        }
                        for (unsigned char i_17 = 1; i_17 < 11; i_17 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)27392)) > (((((/* implicit */_Bool) max((18221566363332804470ULL), (((/* implicit */unsigned long long int) (unsigned short)44859))))) ? (((/* implicit */int) (unsigned short)54130)) : (1300415612)))));
                            arr_53 [i_0] [i_14] [i_1] [i_1] [i_14] [i_17] [i_17 + 3] &= ((/* implicit */unsigned int) arr_37 [i_0] [i_1] [i_14] [i_14] [i_17] [i_14] [i_17]);
                        }
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) arr_1 [i_0]))));
                        var_39 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_47 [(short)12] [i_0] [i_0] [i_1] [i_13] [i_14] [i_14])), (((unsigned int) (short)-13683))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_49 [i_14] [i_0] [i_1] [i_0] [i_0])), (1211364577)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8816)) ? (((/* implicit */unsigned long long int) 9205789606995111571LL)) : (var_2)))) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (max((((/* implicit */unsigned long long int) arr_25 [i_0] [1] [i_13] [i_13] [i_14] [i_14])), (var_9)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        for (int i_19 = 4; i_19 < 12; i_19 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_45 [i_0] [9LL] [9LL] [i_0] [i_1])), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) + (662549854U))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) -359221384)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [i_1])))))))));
                                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [(unsigned char)6] [i_0] [i_18] [i_18])), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63949)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned char)254)))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) arr_45 [i_1] [i_18] [i_0] [i_0] [i_1]))))) ? (min((((/* implicit */int) arr_44 [i_0] [i_13] [i_18] [i_19])), (arr_54 [(unsigned char)10] [i_1] [i_13] [i_18]))) : (((/* implicit */int) arr_32 [i_18] [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 61182675U)) ? (min((((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_0] [i_13])), (arr_52 [i_13] [i_1] [i_1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_13] [i_0] [i_1] [i_0])))))))))));
                }
                for (unsigned short i_20 = 0; i_20 < 14; i_20 += 2) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned int) var_9);
                    var_44 |= ((/* implicit */short) (~((((_Bool)1) ? (((((/* implicit */int) (unsigned char)134)) * (((/* implicit */int) (_Bool)1)))) : ((~(var_6)))))));
                }
                for (unsigned short i_21 = 0; i_21 < 14; i_21 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 0; i_22 < 14; i_22 += 2) 
                    {
                        for (unsigned int i_23 = 0; i_23 < 14; i_23 += 3) 
                        {
                            {
                                var_45 = ((/* implicit */int) arr_18 [i_0] [i_1] [i_22] [i_0]);
                                var_46 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_22] [i_0])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [(unsigned char)2] [i_0])) : (arr_62 [i_0] [i_1]))) : (max((arr_62 [i_21] [i_0]), (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_24 = 0; i_24 < 14; i_24 += 1) 
                    {
                        arr_71 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_63 [i_21] [i_0]);
                        arr_72 [i_1] = ((/* implicit */unsigned int) var_9);
                        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_48 [(short)9] [i_1] [(short)9] [i_24] [i_24])) ? (((((/* implicit */_Bool) var_7)) ? (arr_39 [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0])))));
                    }
                }
                var_48 += ((/* implicit */unsigned char) arr_6 [(unsigned char)9] [i_0]);
                arr_73 [i_1] = ((unsigned char) (signed char)-10);
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_8)))) ? (7405855814716540794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
}
