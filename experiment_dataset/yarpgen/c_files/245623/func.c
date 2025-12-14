/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245623
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -8439651717880462382LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))) : (256U)));
        var_14 = ((/* implicit */_Bool) var_13);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_7))));
            var_16 ^= ((/* implicit */signed char) max((((/* implicit */long long int) max((4294967058U), (var_5)))), (max(((((_Bool)0) ? (288230376151711743LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (_Bool)1))))));
        }
        var_17 *= ((/* implicit */unsigned int) (signed char)-120);
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned int) 4294967058U)))));
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 256U))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13)));
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) (signed char)-7)), (var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-72)) * (((/* implicit */int) (signed char)-72))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))) : (((/* implicit */long long int) ((arr_12 [i_0] [i_2] [i_2]) * (3265244722U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_13 [i_4] [i_2] [i_0] [i_0]))))) ? (min((arr_11 [i_0] [i_4]), (((/* implicit */unsigned int) (signed char)61)))) : (((288U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))))))))));
                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_5)))) || (((/* implicit */_Bool) max((((long long int) arr_9 [i_0] [i_0] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) 511LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (4294967058U)))))))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_17 [i_5] [(signed char)10] [i_5] [i_5] [i_2 + 2]), (((/* implicit */signed char) arr_6 [i_4] [i_4])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_6] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) 2750013969597962166LL))) : ((~(((/* implicit */int) var_7))))));
                        arr_21 [i_0] [i_2] [i_4] [i_5] [i_6] [i_4] [i_6] |= ((/* implicit */long long int) arr_14 [i_0] [i_0]);
                        var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [(_Bool)1] [i_0]))) == (((long long int) var_0))));
                    }
                    for (long long int i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        var_26 += ((/* implicit */signed char) ((((/* implicit */int) ((short) (-(((/* implicit */int) (signed char)1)))))) + ((-((-(((/* implicit */int) var_9))))))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!((!(((((/* implicit */int) var_3)) != (((/* implicit */int) (_Bool)1))))))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    arr_29 [i_0] [(signed char)4] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && ((!(((/* implicit */_Bool) var_13)))))))) & (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) + (1023U))) + (((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (220U)))))));
                    arr_30 [i_2] [i_8] [i_4] [i_8] = var_0;
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (signed char)28))))) ^ ((+(-1206160687874135790LL)))));
                        var_28 += ((max((((/* implicit */long long int) ((_Bool) (signed char)71))), (-5679210540081163574LL))) & (((/* implicit */long long int) ((arr_10 [i_2 - 2] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_29 = arr_23 [i_9] [i_9 - 1] [i_9] [i_9 + 2] [i_9] [i_9] [(short)8];
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) var_6);
                        arr_36 [i_0] [i_2] [i_8] [i_10] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (signed char)-12))), (((((((/* implicit */long long int) 1534046114U)) - (arr_5 [i_8] [i_2] [i_0]))) - (((((/* implicit */_Bool) 4294967054U)) ? (-6159241252959470761LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))));
                        var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((4294967295U), (((/* implicit */unsigned int) (signed char)-120)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-105)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_8]))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (233U))))) : ((+(max((((/* implicit */unsigned int) var_11)), (arr_4 [i_8])))))));
                    }
                    var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_27 [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_0]))) ? (((/* implicit */int) min((arr_27 [i_2] [14LL] [i_2 + 1] [i_2] [i_2] [i_4]), (((/* implicit */signed char) arr_31 [i_0] [i_2 + 2] [i_2 + 2] [i_2] [i_0]))))) : (((/* implicit */int) min(((signed char)-8), (((/* implicit */signed char) arr_31 [i_0] [i_0] [i_2 + 1] [i_2] [i_2])))))));
                    arr_37 [i_0] [i_2 - 1] [i_4] [i_8] [i_8] [(short)13] = ((/* implicit */signed char) arr_34 [7LL] [7LL] [i_4] [i_8] [7LL] [i_2] [i_4]);
                }
                var_33 = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)32741))))));
            }
            arr_38 [i_0] [i_2] [i_0] = ((/* implicit */signed char) max(((+(-17LL))), (((/* implicit */long long int) (_Bool)1))));
            arr_39 [i_0] [i_0] = (!(((/* implicit */_Bool) var_4)));
        }
        for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        {
                            arr_49 [i_14] [i_11] |= ((/* implicit */signed char) ((((var_12) / (((/* implicit */long long int) (-(1073479680U)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967075U)) ? (((/* implicit */int) arr_45 [i_11] [i_11] [i_11] [i_0])) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1780369200U)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))))));
                            var_34 = ((((long long int) max((((/* implicit */long long int) arr_47 [i_0] [i_11] [i_12] [i_13] [i_14])), (-1898145413157759901LL)))) | (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))));
                            arr_50 [(short)7] [i_0] [i_13] [i_13] [i_11] [i_11] [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_14] [i_11] [i_11])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))))) ? ((+(((/* implicit */int) arr_31 [i_12] [i_12] [i_12] [i_12] [i_12])))) : (((/* implicit */int) min((var_0), (((/* implicit */signed char) (_Bool)0)))))))) * (2147483647LL));
                            var_35 += ((/* implicit */signed char) min((4294967285U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3278679494U)))) ? ((+(((((/* implicit */int) arr_18 [i_0] [i_11] [i_12] [i_0] [i_0])) / (((/* implicit */int) var_0)))))) : ((~(((/* implicit */int) arr_18 [i_0] [i_11] [i_0] [i_12] [i_12]))))));
                var_36 ^= ((/* implicit */signed char) (_Bool)1);
            }
            for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                arr_55 [i_0] [i_0] [(signed char)14] |= ((/* implicit */long long int) (_Bool)0);
                var_37 = ((/* implicit */unsigned int) ((long long int) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-120)))));
            }
            arr_56 [i_11] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_3)) & (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_11] [i_11])) == (((/* implicit */int) arr_20 [i_11] [i_11] [(signed char)9] [i_0] [i_0]))))))));
            /* LoopSeq 4 */
            for (long long int i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                arr_61 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(arr_7 [i_0] [i_11] [i_0]))) ? (((((/* implicit */_Bool) ((var_9) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_43 [i_16])))) : (((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (signed char i_17 = 2; i_17 < 15; i_17 += 1) 
                {
                    for (long long int i_18 = 2; i_18 < 12; i_18 += 2) 
                    {
                        {
                            arr_67 [i_0] [(short)7] [i_16] [i_17] = ((((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])), ((+(((/* implicit */int) arr_31 [i_17] [i_11] [i_16] [i_17] [i_18]))))))) * (((min((((/* implicit */unsigned int) var_7)), (3221487617U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3278679494U)))))));
                            var_38 += min((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_19 = 2; i_19 < 14; i_19 += 2) 
                {
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_0] [i_11] [i_19 + 1] [i_0] [i_16]), (arr_17 [i_0] [i_11] [i_19 + 1] [i_19 + 1] [i_19]))))) % (var_10)));
                    arr_71 [i_0] [i_19] [i_16] [i_11] = ((/* implicit */signed char) min((6239547685131039323LL), (((/* implicit */long long int) (short)32767))));
                }
            }
            for (signed char i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                var_40 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-6))))));
                var_41 &= ((/* implicit */signed char) (short)31939);
            }
            for (short i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_78 [i_0] [i_11] [i_21] [i_22] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_21]))))) != (((((/* implicit */_Bool) arr_63 [i_22] [i_21] [i_21] [i_0])) ? (-1736080749250967330LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))));
                    var_42 = ((/* implicit */long long int) (((-(min((arr_11 [i_21] [8U]), (((/* implicit */unsigned int) var_0)))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0])))));
                    arr_79 [i_0] [i_11] [i_21] [i_22] [i_22] [i_11] = ((/* implicit */signed char) min(((+(((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_12))))), (((/* implicit */long long int) min((arr_41 [i_11] [i_22]), ((signed char)-30))))));
                }
                /* LoopNest 2 */
                for (signed char i_23 = 4; i_23 < 14; i_23 += 1) 
                {
                    for (unsigned int i_24 = 1; i_24 < 15; i_24 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */_Bool) (+(arr_4 [i_0])));
                            arr_86 [i_0] [i_11] [i_21] [i_23] [5LL] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1044554076U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 227U)))) : (var_4)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_25 = 0; i_25 < 16; i_25 += 1) 
            {
                arr_89 [i_0] [i_25] [i_0] [i_0] = arr_33 [i_0] [i_0] [i_25] [i_0] [i_25];
                arr_90 [i_0] [i_11] [i_25] [i_11] = ((/* implicit */signed char) (+((+(1073479666U)))));
            }
        }
        for (signed char i_26 = 1; i_26 < 13; i_26 += 1) 
        {
            var_44 = ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (long long int i_27 = 4; i_27 < 15; i_27 += 1) 
            {
                for (short i_28 = 0; i_28 < 16; i_28 += 2) 
                {
                    {
                        var_45 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 232U)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((var_5) >> (((((/* implicit */int) arr_60 [i_0] [i_0] [i_27] [i_0])) + (15))))) : (arr_26 [i_0] [i_28] [i_0] [i_26 - 1] [i_28])))));
                        var_46 *= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_93 [i_26 - 1] [i_28])) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)6)), (arr_63 [i_28] [i_0] [i_0] [i_0]))))))), ((+((+(((/* implicit */int) arr_15 [i_28]))))))));
                        arr_98 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((min((arr_62 [6LL] [i_28] [i_0]), (((/* implicit */long long int) arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_28] [i_28] [i_27] [i_26] [i_0])) ? (((/* implicit */int) arr_44 [i_0] [i_27])) : (((/* implicit */int) (signed char)(-127 - 1)))))))) % (((/* implicit */long long int) (((~(4294967286U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)(-127 - 1))))))))));
                    }
                } 
            } 
            arr_99 [i_26] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-123))))) ? (((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_94 [i_0] [i_0] [i_26])))))) : (((((/* implicit */int) (signed char)103)) >> (((max((((/* implicit */unsigned int) (_Bool)1)), (4294967045U))) - (4294967020U)))))));
        }
    }
    var_47 += ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_13))), (((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_9))))))));
}
