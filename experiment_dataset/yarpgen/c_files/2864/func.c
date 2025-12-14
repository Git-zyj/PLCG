/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2864
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [11ULL])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (-3792904654490107396LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46)))))) : (((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) << (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -8388608)))) * ((-(var_11)))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [3ULL]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)46105)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) != (495017768412570163ULL)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)46085)) == (((/* implicit */int) (unsigned char)5))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [3LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [(unsigned char)8] [i_1] [i_2 - 3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [9LL]))) : (5830562410307304829LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 17951726305296981456ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((9223372036854775785LL) == (-9223372036854775777LL)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) arr_1 [i_4] [i_3]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 20227007427227049ULL)))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2] [i_0 - 1])) << (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1])) != (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1])))))));
                                var_19 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56741))))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)251)))))) / ((((-(var_14))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((/* implicit */signed char) var_9);
                                var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)8191)), ((unsigned short)6633)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (((arr_15 [i_5] [i_5]) + (arr_15 [i_5] [i_5])))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))));
        arr_17 [i_5] = ((/* implicit */int) ((_Bool) (unsigned short)2420));
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)72)))) != ((~(((/* implicit */int) arr_16 [i_6] [i_6]))))))) >= (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((((/* implicit */_Bool) (short)-5139)) ? (((/* implicit */int) (short)13617)) : (((/* implicit */int) arr_16 [i_6] [i_6])))))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2147483644)))) + (min((-15LL), (-9223372036854775777LL))))) <= (-9223372036854775785LL))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63124))))) ? (((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (arr_15 [i_6] [i_6]) : (8966390196821970455ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (var_11)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        arr_23 [i_7] = ((/* implicit */short) ((unsigned long long int) ((9223372036854775765LL) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_22 [i_7] [i_7])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            arr_26 [i_7] = ((/* implicit */short) (-(((11229927765367429248ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
            var_25 = ((/* implicit */unsigned short) 495017768412570159ULL);
        }
        for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            arr_31 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (unsigned short)65535);
            var_26 &= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_1)) ? (495017768412570160ULL) : (((/* implicit */unsigned long long int) arr_27 [i_7])))) >= (((/* implicit */unsigned long long int) (~(-9223372036854775783LL)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)140))))) : (((long long int) ((-9223372036854775764LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)109))))))));
        }
        arr_32 [i_7] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((-9223372036854775776LL), (((/* implicit */long long int) (unsigned short)255))))) ? (7864579334994338990ULL) : (337134142995698023ULL))) << (7LL)));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (15400062117762286634ULL)))) << (((((/* implicit */int) ((short) arr_25 [i_7]))) + (32149)))))) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) arr_28 [i_7] [i_7]))));
    }
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 10; i_10 += 3) 
    {
        var_29 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) - (arr_27 [i_10 - 1])));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (-9223372036854775779LL) : (-9223372036854775782LL)));
                        arr_42 [i_13] [i_11] [i_12] [i_13 - 1] = ((/* implicit */unsigned short) arr_37 [i_13]);
                    }
                    arr_43 [i_10] [i_11] [i_12] [i_10 + 1] = ((((/* implicit */_Bool) arr_19 [i_10 - 1])) || (((/* implicit */_Bool) (~(((/* implicit */int) var_0))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        arr_47 [i_12] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_10] [i_11]))) ? (((/* implicit */int) ((signed char) (unsigned short)0))) : (((/* implicit */int) arr_22 [i_14] [i_11]))));
                        arr_48 [i_14] [i_11] [i_12] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_21 [i_10])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_10] [i_10]))))));
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            arr_51 [i_10] [8LL] [i_12] [i_14] [i_15] [8LL] = arr_11 [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1];
                            arr_52 [i_10] [i_10 - 1] [i_10 + 1] = ((/* implicit */short) (unsigned short)65535);
                            arr_53 [i_12] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_10] [i_10 + 1] [i_10 - 1] [i_10] [i_10 + 1] [i_12] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533))) : (((((/* implicit */_Bool) 9223372036854775785LL)) ? (arr_12 [i_10] [i_11] [6ULL] [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (signed char)13))))) >= (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_54 [i_14] [i_14])))));
                            var_32 *= ((/* implicit */short) ((((10481560485026328736ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))))) ? (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_10 + 1] [i_10]))) : (arr_33 [i_10] [i_11]))) : (((((-19823284073377497LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_41 [i_10] [i_11])) - (6541)))))));
                            var_33 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)1020))));
                            var_34 *= ((/* implicit */short) ((((((/* implicit */_Bool) -4LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_12] [i_16]))) : (var_8))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_10 - 1] [i_11] [i_12])))))));
                            arr_57 [i_10 - 1] [i_16] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_36 [i_10 + 1] [i_10] [i_10 + 1]))));
                        }
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            var_35 |= ((/* implicit */unsigned short) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_11] [i_10 - 1])))));
                            arr_60 [i_10] [i_10 + 1] [(_Bool)1] [i_10] [(_Bool)1] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (_Bool)0))) << ((((-(1093359999557677792ULL))) - (17353384074151873805ULL)))));
                        }
                        var_36 = (unsigned char)36;
                        arr_61 [i_10 - 1] [i_11] [i_14] = var_5;
                    }
                    arr_62 [i_10] [i_11] [i_12] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_10 + 1] [i_10 - 1])) - (((/* implicit */int) arr_18 [i_10 + 1] [i_10 + 1]))));
                }
            } 
        } 
        arr_63 [i_10] [i_10] = ((/* implicit */unsigned int) var_11);
        var_37 |= ((/* implicit */unsigned int) ((short) arr_39 [i_10 - 1]));
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1265548287U)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) ((14928789457747223186ULL) != (((/* implicit */unsigned long long int) arr_13 [i_10 + 1] [i_10] [i_10 - 1] [i_10] [i_10] [i_10 + 1] [i_10]))))))))));
    }
    var_39 = ((short) (+((-(((/* implicit */int) (signed char)-67))))));
}
