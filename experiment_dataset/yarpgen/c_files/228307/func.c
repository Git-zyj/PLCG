/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228307
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_0] [1ULL] [i_1] = -1073741824;
            var_11 = arr_4 [i_0] [i_1] [(short)10];
        }
        for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */long long int) ((min((min((0U), (4294967292U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_2] [i_2] [i_0]))))))) / (max((min((28U), (var_10))), (min((arr_0 [i_2]), (((/* implicit */unsigned int) (unsigned short)22956))))))));
            arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) min(((+(var_2))), (((/* implicit */unsigned long long int) 545888051781416923LL)))))));
            var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((4294967294U) >> (11U)))) | (arr_7 [i_0] [i_2 - 2] [i_2 - 2])));
            var_13 = ((/* implicit */int) (((((+(4294967294U))) == (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) / (arr_0 [i_2 - 1]))))) ? (((((/* implicit */unsigned long long int) max((19U), (((/* implicit */unsigned int) arr_8 [(short)10] [i_2 - 1]))))) * (max((var_2), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2 - 2]))))))));
        }
        var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2452388863044707175LL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16524)))))) ? (((/* implicit */unsigned long long int) (~(-2452388863044707182LL)))) : (min((var_4), (((/* implicit */unsigned long long int) (unsigned short)49011))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        arr_13 [13LL] [13LL] |= ((/* implicit */long long int) var_8);
        /* LoopSeq 2 */
        for (short i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            arr_18 [i_3] [i_4] = ((unsigned short) arr_11 [i_4 - 3]);
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_4]))))), ((unsigned char)65))))));
                    var_16 = ((/* implicit */short) var_8);
                }
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (long long int i_8 = 4; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_4] [i_7] [i_5] [i_7] [i_4 + 1]) < (arr_29 [i_4] [i_4 + 1] [i_5] [i_7] [i_4 - 3])))))));
                            arr_30 [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) 1051545496))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)0)))) : (((/* implicit */int) (unsigned char)89))))));
                        }
                    } 
                } 
                arr_31 [i_5] [i_4 - 1] [i_3] [i_3] |= max((((((/* implicit */_Bool) 536869888)) ? (arr_20 [i_3] [i_4 + 1] [i_5]) : (((/* implicit */unsigned long long int) 1048189935)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 536869890)), (min((((/* implicit */unsigned int) arr_24 [i_3] [20ULL] [i_5])), (var_3)))))));
            }
            for (short i_9 = 1; i_9 < 20; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_10 = 3; i_10 < 18; i_10 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -1080920739)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10))) : (max((((/* implicit */unsigned int) arr_14 [i_4])), (4294967276U)))))) : (((var_4) - (((/* implicit */unsigned long long int) -848486904))))));
                    var_19 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-27957)))) >> (((((int) var_8)) + (1528644968)))));
                }
                /* vectorizable */
                for (short i_11 = 4; i_11 < 20; i_11 += 2) 
                {
                    var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_3] [i_3]))) : (var_6)))));
                    arr_39 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned short)20] = ((/* implicit */unsigned int) arr_24 [i_4] [i_4 - 3] [i_11 - 3]);
                }
                /* LoopSeq 4 */
                for (int i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    var_21 = ((/* implicit */short) min((9U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_21 [i_4 - 3] [i_4])))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) | (1ULL)));
                    var_23 ^= ((/* implicit */unsigned int) var_6);
                }
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_24 -= ((/* implicit */int) arr_3 [i_3]);
                    arr_44 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_26 [i_3] [i_3]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_3] [i_4] [i_9] [i_13])) || (((/* implicit */_Bool) (unsigned char)255))))))))) : (((((/* implicit */_Bool) min(((unsigned short)8), (((/* implicit */unsigned short) arr_11 [(unsigned char)15]))))) ? (((/* implicit */long long int) min((4294967285U), (((/* implicit */unsigned int) arr_2 [i_4] [i_9] [i_13]))))) : (((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (arr_41 [i_3] [i_4] [i_9] [i_13]) : (-8662897156653648654LL)))))));
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)11)) == (((/* implicit */int) arr_34 [i_4] [i_9 + 1]))))), (((((/* implicit */_Bool) (-(10U)))) ? (min((7381366951448975888ULL), (((/* implicit */unsigned long long int) arr_32 [i_3] [i_3])))) : (((/* implicit */unsigned long long int) (+(arr_1 [4LL] [i_13]))))))));
                    arr_45 [i_3] [i_3] [i_4] [i_9 - 1] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_4 [10LL] [10LL] [i_4 + 1])) < (((/* implicit */int) var_7))))) <= (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), ((short)2))))));
                }
                for (unsigned int i_14 = 3; i_14 < 19; i_14 += 4) 
                {
                    arr_49 [19LL] [i_4] [i_4] [i_9] [i_14] = ((/* implicit */int) ((min((((/* implicit */unsigned int) var_8)), (arr_27 [i_14 + 1] [i_14]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((4294967287U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
                    var_26 = ((/* implicit */unsigned char) ((var_10) | (((arr_27 [i_3] [i_14 - 1]) ^ (((/* implicit */unsigned int) arr_29 [i_4] [i_4 - 1] [i_9 + 1] [5] [i_4]))))));
                    var_27 = ((/* implicit */int) var_9);
                    var_28 = ((/* implicit */unsigned long long int) (short)-17);
                }
                for (unsigned int i_15 = 1; i_15 < 17; i_15 += 2) 
                {
                    var_29 = ((/* implicit */long long int) var_3);
                    arr_53 [i_9 - 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) arr_23 [i_3] [i_4 - 1] [i_9] [i_15])) / (arr_1 [i_15] [18])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_4] [i_15 + 2]))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)40)), (8351969057363246505LL)))), (min((arr_20 [i_15] [i_4 - 2] [i_3]), (((/* implicit */unsigned long long int) (unsigned char)0))))))));
                }
                var_30 = ((/* implicit */unsigned long long int) ((4194303U) >= (((/* implicit */unsigned int) arr_43 [i_3] [i_4 - 2] [i_4 + 1] [i_9 + 1] [i_4 + 1]))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                arr_58 [i_4] [i_16] [i_4] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_4] [i_4])) & (arr_33 [i_3])))) < (min((1152640029630136320LL), (((/* implicit */long long int) var_5)))))))));
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) & (((((/* implicit */_Bool) min((4157064260476880676LL), (((/* implicit */long long int) (unsigned short)65533))))) ? (7593997206278665065LL) : (((/* implicit */long long int) max((-2147483645), (arr_29 [i_4] [i_4 - 2] [4LL] [i_4 - 3] [i_3]))))))));
                arr_59 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [16LL] [i_4] [i_4] [i_4]))) % (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_21 [i_3] [i_3])))))) : (((((/* implicit */_Bool) 1152921504606715904LL)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                var_32 = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [13ULL] [i_4] [i_16] [i_16]))) : (18446744073709551615ULL));
                arr_60 [i_3] [i_3] [i_3] [i_3] |= min((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) -842386932)), (-5267100324248992167LL)))), ((~(var_4))))), (((/* implicit */unsigned long long int) (-(((var_8) / (((/* implicit */int) var_1))))))));
            }
            for (unsigned short i_17 = 2; i_17 < 19; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 20; i_19 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) var_0);
                            var_34 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (arr_41 [i_4 - 1] [i_4 - 2] [i_4 - 3] [i_4 - 2])))) >= (max((((/* implicit */unsigned long long int) 11U)), (arr_15 [i_17] [i_17] [i_17])))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned int) (+(-8631995167717249557LL)));
            }
        }
        /* vectorizable */
        for (unsigned char i_20 = 1; i_20 < 20; i_20 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_21 = 3; i_21 < 17; i_21 += 1) 
            {
                for (int i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    for (unsigned int i_23 = 2; i_23 < 20; i_23 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_7 [6LL] [6LL] [6LL])))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) (short)-10)) ? (((/* implicit */long long int) arr_38 [(short)10] [(unsigned short)13] [i_22] [i_22])) : (-2452388863044707199LL))))))));
                            var_37 = ((unsigned int) 4294967283U);
                            arr_80 [i_20 + 1] [i_20 + 1] [i_21 + 2] [i_22] [i_23 + 1] |= ((/* implicit */int) ((unsigned int) arr_27 [i_21 + 1] [i_20 + 1]));
                        }
                    } 
                } 
            } 
            arr_81 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
        }
        var_38 = ((/* implicit */long long int) ((9941762433786038799ULL) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) var_5))))), (((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */long long int) 16776704)) : (var_9))))))));
    }
    var_39 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (short)-26289)), (max((424999432805113912LL), (7660787402867675577LL))))), (((/* implicit */long long int) (unsigned short)10511))));
}
