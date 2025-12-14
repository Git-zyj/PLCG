/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29900
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_14 ^= ((/* implicit */signed char) (-((~(((/* implicit */int) arr_10 [i_2 - 1]))))));
                        var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -398010280)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_12)))) > (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_2]))))))), ((((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) : (6352322091643332508ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_8)))))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            arr_17 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [(short)0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_4 + 1] [i_2 + 2] [i_2] [(short)4])) ? (((arr_6 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))) : (arr_13 [i_1 - 1] [i_1 + 2])));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) (short)25326)))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-25326)) ? (((/* implicit */int) (short)25319)) : (((/* implicit */int) var_4))));
                        }
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_11))) != (((/* implicit */int) (short)-25336))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) (!(((((/* implicit */int) ((short) arr_6 [i_1 - 1] [i_1 + 2] [i_2] [(unsigned char)7]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_6])))))))));
                        var_20 ^= ((/* implicit */unsigned char) min((452792114), (((/* implicit */int) arr_18 [i_0]))));
                        var_21 *= min((((/* implicit */unsigned long long int) (unsigned char)156)), (12685556713861784549ULL));
                        var_22 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_2 + 1])))), (((((/* implicit */_Bool) arr_16 [8] [i_2 + 2] [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_2 + 2]))))));
                        var_23 *= ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)144)))) % (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_1 + 2] [i_2 + 1])), (var_6))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_1 + 3] [i_2 + 2] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_1 + 2]))));
                        arr_25 [i_7] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)25351)) >= (((/* implicit */int) var_13))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-25331)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_20 [i_0] [i_2 - 1] [i_2] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) -1539482341)))))));
                    }
                    arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) 2147483647))))) ? (((/* implicit */int) ((unsigned char) arr_14 [i_1] [i_1] [i_1] [i_1 + 3] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_16 [(unsigned char)4] [i_1 - 1] [(unsigned char)4] [(unsigned char)21] [i_1 + 2])) : (((/* implicit */int) var_5))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    {
                        arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                        var_25 *= arr_30 [i_0] [i_8 - 1] [i_9];
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((signed char) var_11)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    for (int i_13 = 2; i_13 < 21; i_13 += 4) 
                    {
                        {
                            arr_43 [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-2)) && (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_11] [i_11] [i_13])) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((int) var_4)) : (((((/* implicit */int) arr_15 [(short)1] [20] [i_0])) - (((/* implicit */int) var_6)))))) : ((((-(((/* implicit */int) (unsigned char)98)))) | (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_13])) : (((/* implicit */int) var_6))))))));
                            arr_44 [i_12] [i_12] = ((/* implicit */unsigned long long int) (unsigned char)0);
                            var_27 ^= ((/* implicit */int) arr_38 [i_8 + 1] [i_8] [i_8 + 1]);
                            var_28 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)22)) % (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_13]))))) : (min((var_11), (((/* implicit */unsigned long long int) var_5)))))) >> (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_5))))) ? (min((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((unsigned long long int) var_4))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 3) 
                    {
                        var_29 ^= ((/* implicit */short) arr_20 [i_8] [i_11] [i_11] [i_15 - 1]);
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (short)-1))))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_39 [i_8 + 2]) : (((/* implicit */unsigned long long int) 452792121))));
                    }
                    /* vectorizable */
                    for (short i_16 = 3; i_16 < 21; i_16 += 2) 
                    {
                        var_32 ^= ((/* implicit */unsigned long long int) ((int) arr_3 [i_8 + 1] [i_16 - 2]));
                        var_33 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (short)-1837)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 2; i_17 < 20; i_17 += 1) 
                    {
                        arr_55 [i_0] [i_14] [13] [i_14] [(short)17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_8 + 1] [i_17 + 2] [i_17 + 2])) ? (((arr_53 [i_0] [i_0] [i_11] [i_14] [i_17 - 2]) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) var_2))));
                        arr_56 [i_0] [i_14] = ((/* implicit */short) ((((/* implicit */int) var_2)) + (arr_50 [i_11] [i_17 - 2] [i_11] [i_11] [i_17] [i_11] [i_14])));
                    }
                    var_34 = ((/* implicit */_Bool) min((min((((unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) * (var_11))))), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) var_7))))))));
                    var_35 = (unsigned char)234;
                }
                for (unsigned char i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    var_36 *= ((/* implicit */unsigned long long int) min((var_12), (arr_1 [i_0] [i_0])));
                    arr_59 [i_0] [i_8] [i_11] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (short)-1075)))));
                    var_37 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))) == (((/* implicit */int) max((arr_52 [i_0]), (((/* implicit */short) var_8)))))))) == ((~(((/* implicit */int) var_8))))));
                    var_38 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_8 + 2] [i_8] [i_11] [i_11] [i_11] [i_18])) * (((/* implicit */int) ((short) var_13)))))), (((min((var_10), (((/* implicit */unsigned long long int) (unsigned char)64)))) - (((/* implicit */unsigned long long int) ((1048575) >> (((/* implicit */int) (_Bool)1)))))))));
                }
                var_39 = ((/* implicit */int) (short)29715);
                var_40 *= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) arr_33 [(unsigned char)13] [i_0] [i_0] [i_0])))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 1; i_19 < 20; i_19 += 3) 
        {
            var_41 = ((/* implicit */unsigned char) (short)770);
            var_42 = var_1;
            var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (((+(((/* implicit */int) arr_45 [i_0] [i_19 - 1] [i_19] [i_19])))) > (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (short)32761))))))))));
        }
        for (int i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            var_45 ^= ((/* implicit */int) var_1);
            /* LoopNest 2 */
            for (unsigned char i_21 = 0; i_21 < 22; i_21 += 4) 
            {
                for (short i_22 = 0; i_22 < 22; i_22 += 3) 
                {
                    {
                        arr_71 [i_0] [i_21] [i_21] [i_22] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_18 [i_0])) > (((/* implicit */int) arr_18 [i_0])))));
                        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_47 [i_0] [i_20] [i_21] [i_22] [i_21])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-32766)))))))));
                        var_47 = ((/* implicit */short) var_6);
                    }
                } 
            } 
            var_48 ^= var_7;
        }
    }
    /* LoopNest 3 */
    for (short i_23 = 2; i_23 < 12; i_23 += 1) 
    {
        for (short i_24 = 1; i_24 < 13; i_24 += 4) 
        {
            for (unsigned char i_25 = 2; i_25 < 11; i_25 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 14; i_26 += 3) 
                    {
                        for (short i_27 = 1; i_27 < 10; i_27 += 4) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned char) arr_61 [i_27 + 1]);
                                var_50 *= ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                    var_51 *= ((((/* implicit */int) arr_79 [0ULL] [(short)8])) < (((/* implicit */int) (short)-13)));
                }
            } 
        } 
    } 
    var_52 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (unsigned char i_28 = 0; i_28 < 17; i_28 += 3) 
    {
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 17; i_29 += 3) 
        {
            for (unsigned char i_30 = 4; i_30 < 15; i_30 += 1) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        var_53 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_4)) % (((/* implicit */int) arr_18 [i_28])))) + (2147483647))) >> ((((-(((/* implicit */int) var_2)))) + (91)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_87 [(unsigned char)3]))))))))) : (var_10)));
                        /* LoopSeq 3 */
                        for (short i_32 = 0; i_32 < 17; i_32 += 1) 
                        {
                            arr_102 [i_28] [i_29] [i_28] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) % (((/* implicit */int) min(((short)25319), (((/* implicit */short) (signed char)55))))))) / (((/* implicit */int) ((max((var_10), (((/* implicit */unsigned long long int) arr_95 [2ULL])))) != (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)251)), (-1751631256)))))))));
                            var_54 = ((/* implicit */_Bool) (((-(((((/* implicit */int) var_3)) / (((/* implicit */int) var_12)))))) + (((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (215288189)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) (+((+(((/* implicit */int) arr_41 [i_28] [i_28] [i_28] [i_31] [i_32])))))))));
                        }
                        for (short i_33 = 0; i_33 < 17; i_33 += 3) 
                        {
                            var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) (-(((/* implicit */int) ((signed char) (-(((/* implicit */int) var_9)))))))))));
                            var_57 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_32 [(_Bool)1] [i_30]) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)-5957)) ? (arr_39 [i_31]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (+(0)))))))));
                            var_58 = ((/* implicit */int) ((unsigned char) (short)-1));
                        }
                        for (signed char i_34 = 0; i_34 < 17; i_34 += 3) 
                        {
                            var_59 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) min(((short)-18032), (((/* implicit */short) var_6))))) + (2147483647))) >> (((((((/* implicit */_Bool) (short)-29707)) ? (arr_33 [i_28] [i_28] [i_30 - 2] [16]) : (((/* implicit */int) var_7)))) + (4566346)))))) * (var_11)));
                            var_60 *= ((/* implicit */unsigned long long int) var_1);
                        }
                        var_61 ^= ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) (+(((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -956275311)) ? (((/* implicit */int) (short)29715)) : (((/* implicit */int) (short)25353)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)13623)) : (((/* implicit */int) (unsigned char)135))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_35 = 0; i_35 < 17; i_35 += 3) 
        {
            for (short i_36 = 0; i_36 < 17; i_36 += 1) 
            {
                {
                    var_62 ^= ((/* implicit */short) arr_48 [i_28] [i_35]);
                    /* LoopSeq 1 */
                    for (unsigned char i_37 = 0; i_37 < 17; i_37 += 3) 
                    {
                        arr_117 [i_35] [i_28] [i_35] [i_35] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (13093916765822653150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_28])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)25327))))) : (max((10582246234260152536ULL), (((/* implicit */unsigned long long int) (unsigned char)221))))))));
                        var_63 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)228)) <= (((/* implicit */int) (short)-5811))));
                        var_64 ^= ((/* implicit */signed char) min((((((((/* implicit */int) var_12)) % (((/* implicit */int) var_13)))) >> ((((-(10582246234260152536ULL))) - (7864497839449399076ULL))))), (((/* implicit */int) ((short) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_13))))))));
                    }
                }
            } 
        } 
        arr_118 [i_28] = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)18032)) && (var_13)))))));
    }
}
