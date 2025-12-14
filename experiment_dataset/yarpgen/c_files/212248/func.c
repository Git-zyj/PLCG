/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212248
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_2 [i_2 + 1]))))), (arr_1 [i_3 + 3]))))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) min((((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7))), (max((((/* implicit */unsigned long long int) var_2)), (7419483383265002375ULL)))));
                        arr_13 [i_0] = ((/* implicit */unsigned char) min((11027260690444549240ULL), (((/* implicit */unsigned long long int) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_2] [(_Bool)1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))) ? (var_0) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                        var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                        var_13 = ((/* implicit */_Bool) (-(11027260690444549240ULL)));
                    }
                    var_14 += ((/* implicit */unsigned short) 11027260690444549241ULL);
                }
            } 
        } 
        arr_18 [i_0] = (~((~(((((/* implicit */unsigned long long int) 163743955)) + (11027260690444549241ULL))))));
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_15 = ((((/* implicit */_Bool) (~(arr_19 [i_6])))) || (((/* implicit */_Bool) var_2)));
            var_16 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_4))))))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (2053950280U)))) ? (max((7419483383265002364ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-14879)))))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 3463115081U)) : (((((/* implicit */_Bool) (unsigned short)28981)) ? (((/* implicit */unsigned long long int) arr_23 [i_5] [i_6])) : (var_7)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((11027260690444549273ULL), (((/* implicit */unsigned long long int) (short)14884))))) ? ((+(((/* implicit */int) (unsigned short)28978)))) : (((((/* implicit */_Bool) arr_20 [i_7] [i_9])) ? (((/* implicit */int) arr_20 [i_5] [i_9])) : (((/* implicit */int) arr_20 [i_5] [i_7]))))));
                            var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) var_6)), (arr_19 [i_5])));
                            var_21 ^= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_3))))));
                            arr_30 [i_5] [i_6] [i_5] [i_6] [i_6] [i_6] [i_9] = ((/* implicit */_Bool) max((min((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_9))))), (((((/* implicit */_Bool) (short)14872)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) var_5))))));
                        }
                    } 
                } 
            }
        }
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14879))))))))));
    }
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_11 = 3; i_11 < 21; i_11 += 3) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_9)), (11027260690444549239ULL)));
                    arr_39 [i_11] [i_11] [i_11] = ((((/* implicit */int) (!(((_Bool) var_6))))) >= (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_33 [i_11 - 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) >> ((((~(422212465065984ULL))) - (18446321861244485628ULL))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) != (((var_0) * (7419483383265002343ULL))))))));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((signed char) min((var_0), (((/* implicit */unsigned long long int) var_8))))))));
                            }
                        } 
                    } 
                    arr_46 [i_11] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_6)), ((~(((((/* implicit */_Bool) 1370547738849266479ULL)) ? (11027260690444549213ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14865)))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((7419483383265002343ULL) == (var_7))))) * (1370547738849266479ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14885)))));
                                var_27 -= ((/* implicit */int) max((1073479680LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7419483383265002343ULL)) ? (((/* implicit */int) (unsigned short)36532)) : (((/* implicit */int) arr_25 [i_10] [i_10]))))) >= (max((((/* implicit */unsigned int) var_5)), (arr_19 [i_10]))))))));
                                var_28 = ((/* implicit */unsigned int) arr_29 [i_10] [i_10]);
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (max((11027260690444549240ULL), (var_0)))));
                                arr_51 [i_11] [i_15] [i_12 - 1] [i_11 + 3] [i_11] = ((/* implicit */unsigned int) ((min((1370547738849266480ULL), (((/* implicit */unsigned long long int) 1905326683U)))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_50 [(unsigned char)2] [i_16] [i_12 - 1] [i_15])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (11027260690444549265ULL))))));
        /* LoopNest 2 */
        for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
        {
            for (unsigned char i_18 = 1; i_18 < 23; i_18 += 4) 
            {
                {
                    arr_58 [(_Bool)1] [i_17] [i_17] [(signed char)6] = ((/* implicit */unsigned int) var_6);
                    arr_59 [i_10] [i_17] [i_17] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (min((var_2), (((/* implicit */unsigned char) var_3))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((68717379584LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))))) * (((/* implicit */int) ((short) 11027260690444549249ULL))))))));
                    arr_60 [i_10] [i_17] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)30521)), (7419483383265002375ULL)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_19 = 2; i_19 < 9; i_19 += 4) 
    {
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (int i_21 = 2; i_21 < 9; i_21 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) arr_2 [i_19])) ? (((/* implicit */int) var_9)) : (-1989952647))))), (((/* implicit */int) var_6))));
                    arr_68 [i_21] [i_19 - 1] [i_19 - 1] = ((/* implicit */unsigned char) var_6);
                    var_32 ^= ((/* implicit */_Bool) ((unsigned long long int) ((var_7) + (((/* implicit */unsigned long long int) ((unsigned int) var_4))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_22 = 0; i_22 < 10; i_22 += 3) 
                    {
                        arr_71 [i_19 - 1] [(_Bool)1] [i_20] [i_22] [i_19 - 1] = ((/* implicit */unsigned char) ((((1073479680LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) - (arr_3 [i_19 - 2] [i_21 - 1] [i_21 - 1])));
                        var_33 = ((/* implicit */short) ((arr_62 [i_19 - 2]) ? (((/* implicit */int) arr_38 [i_19] [i_19] [i_19] [i_19 - 1])) : (((/* implicit */int) var_1))));
                        var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_21] [i_21 + 1] [i_21] [i_22]))) & (3463115065U));
                    }
                    for (unsigned char i_23 = 2; i_23 < 9; i_23 += 3) 
                    {
                        var_35 = ((/* implicit */short) min((max((13558980921211957756ULL), (((/* implicit */unsigned long long int) -650393043000159848LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (((((/* implicit */unsigned long long int) arr_43 [i_19] [i_20] [4] [i_23] [i_19] [i_21])) | (var_7)))))));
                        arr_74 [i_23] [i_23] [i_19] [i_23] [i_19] = ((/* implicit */_Bool) ((unsigned char) ((var_6) ? (var_7) : (var_7))));
                    }
                    for (unsigned int i_24 = 3; i_24 < 9; i_24 += 2) 
                    {
                        var_36 = ((/* implicit */int) max((((/* implicit */unsigned int) ((710294036U) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (min((arr_8 [i_24 - 1] [i_21] [i_24] [i_24]), (arr_8 [i_24 - 1] [i_21] [(_Bool)1] [i_24])))));
                        arr_77 [i_24] [i_20] [i_21] [i_24] [i_24] = ((/* implicit */unsigned long long int) arr_28 [i_19] [i_19] [6U] [(unsigned char)4] [i_19]);
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_19])) && (((/* implicit */_Bool) 6578264831647858287ULL))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_8 [(unsigned char)8] [i_19] [i_19] [i_19])))))))));
                    }
                    for (unsigned int i_25 = 1; i_25 < 9; i_25 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3739525896U)))) ? ((+(((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) ((((1370547738849266491ULL) / (((/* implicit */unsigned long long int) 427900502)))) < (((/* implicit */unsigned long long int) 650393043000159849LL)))))));
                        arr_80 [i_25] [i_25] [i_21] [(short)2] [i_20] [i_19] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) (_Bool)1))))) > (((((/* implicit */_Bool) -650393043000159862LL)) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) (short)12751))))));
                    }
                }
            } 
        } 
    } 
}
