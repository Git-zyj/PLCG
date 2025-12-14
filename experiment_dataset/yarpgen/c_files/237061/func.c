/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237061
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [(short)8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42992)) ? (2531309338473550230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [2LL])))));
                    var_18 = ((/* implicit */unsigned short) 6766819525335432454ULL);
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_3 [i_0 + 1]))));
                }
            } 
        } 
        arr_10 [i_0] = ((((/* implicit */int) (short)15334)) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) - (67))));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_3]))));
        /* LoopSeq 2 */
        for (signed char i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            arr_25 [i_4] [i_6] [i_5] [i_3] = ((/* implicit */_Bool) (unsigned short)17);
                            var_21 = ((/* implicit */_Bool) arr_20 [i_3] [i_4 - 2] [i_4] [i_6] [i_7]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8] [i_4] [i_9] [i_4 - 1] [i_4])) ? (arr_23 [i_3] [i_4] [i_8] [i_4 - 3] [i_9]) : (arr_23 [i_3] [i_4] [i_8] [i_4 - 3] [i_3])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_29 [i_3] [i_4] [i_4] [i_9] [i_9]))));
                        var_23 = ((int) ((((unsigned int) var_5)) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (0) : (((/* implicit */int) var_2)))))));
                    }
                } 
            } 
            arr_31 [i_3] [i_4] = ((/* implicit */signed char) (((+(arr_16 [i_3] [i_4 - 3] [i_4]))) / (((/* implicit */int) ((2824956565922970668LL) != (((/* implicit */long long int) 524287)))))));
        }
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_10]))));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384))) : (5275737484467802945ULL))) + (min((((((/* implicit */_Bool) arr_26 [i_3] [i_10])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_10] [i_10]))))), (((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */int) (_Bool)1))))))))))));
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    for (unsigned char i_13 = 2; i_13 < 12; i_13 += 3) 
                    {
                        {
                            arr_43 [i_3] [i_3] [i_11] [i_12] [i_13] = ((/* implicit */short) ((unsigned long long int) ((6766819525335432449ULL) >> (((-1242916326) + (1242916376))))));
                            var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_10) % (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_3] [i_12] [i_11] [i_10] [i_3]))) : (max((((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_10] [i_10] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) : (arr_36 [i_3] [i_3] [i_3] [i_3] [i_12] [i_13]))), (((/* implicit */unsigned long long int) arr_40 [i_3] [i_10] [i_11] [i_12] [i_13 - 2]))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) (unsigned short)65503);
            arr_44 [i_3] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_3] [i_10] [i_10] [i_3] [i_10])) | (8191)))) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned char) (+(var_13))))) : ((+(((/* implicit */int) arr_11 [i_3]))))));
        }
    }
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((var_12) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-5232357864293614531LL)))))))));
    /* LoopSeq 1 */
    for (long long int i_14 = 1; i_14 < 10; i_14 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_14 - 1] [i_14 + 1] [i_14]))) != (var_3)))) ^ (((((/* implicit */int) (signed char)-39)) / (((/* implicit */int) (unsigned char)128))))));
        /* LoopSeq 2 */
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((1091291853671059342LL) != (((/* implicit */long long int) var_0))))) % (((/* implicit */int) ((short) (signed char)-27)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) arr_49 [i_15])) : (var_4)))) ? (((((/* implicit */_Bool) 11679924548374119162ULL)) ? (2097151ULL) : (11679924548374119156ULL))) : (((/* implicit */unsigned long long int) ((1242632623U) << (((11679924548374119162ULL) - (11679924548374119142ULL)))))))) : (((/* implicit */unsigned long long int) ((623654597305765120LL) - (((/* implicit */long long int) 2566871503U))))))))));
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 2; i_17 < 7; i_17 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)31)))) == (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_50 [i_14 + 1] [i_17 + 4])) : (((/* implicit */int) arr_50 [i_14 - 1] [i_17 - 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        var_32 |= ((/* implicit */unsigned char) var_3);
                        var_33 = ((/* implicit */unsigned long long int) ((int) (unsigned char)0));
                        arr_60 [i_14] [i_15] [i_16] [i_17 - 1] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4208288971U)) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14089))) / (6766819525335432453ULL)))))) ? (((((/* implicit */_Bool) var_16)) ? (var_3) : (arr_21 [i_14 - 1] [i_14] [i_16] [i_18]))) : (((var_13) ^ (((/* implicit */unsigned long long int) arr_18 [i_14 - 1] [i_14 - 1] [i_14]))))));
                        arr_61 [i_14] [i_17 + 3] [i_14] [i_15] [i_14 + 1] = (((~(var_12))) | (((((/* implicit */_Bool) (unsigned short)1536)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)17)))));
                        var_34 = (+((-(((/* implicit */int) (unsigned short)61738)))));
                    }
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_17 + 2])) : (((/* implicit */int) arr_12 [i_17 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */int) arr_49 [i_15]))))) ? (11679924548374119166ULL) : (((/* implicit */unsigned long long int) min((9223372036854775807LL), (var_11))))))))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_14] [i_15] [i_16] [i_17 + 3])) ? ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_17 + 1] [i_17 + 1] [i_17]))) : (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (var_16)))) >> (((var_7) - (1677369799))))))));
                }
                arr_62 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) arr_55 [i_14] [i_14 - 1] [i_15] [i_16])))) : (((((/* implicit */int) arr_59 [i_14] [i_14] [i_14 - 1] [i_14])) & (var_0)))));
            }
            var_37 = ((/* implicit */signed char) var_16);
        }
        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                for (unsigned long long int i_21 = 2; i_21 < 8; i_21 += 4) 
                {
                    {
                        arr_71 [i_14] [i_19] [i_19] [i_14] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_21 [i_14 + 1] [i_14] [i_14 - 1] [i_14 - 1])) ? (arr_21 [i_14] [i_14] [i_20] [i_21 - 2]) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) arr_20 [i_14 + 1] [i_19] [i_14] [i_20] [i_21]))));
                        var_38 ^= ((/* implicit */_Bool) var_6);
                        var_39 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_20]))))) ? (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_2)))) : (-1949139216))) : ((+(((/* implicit */int) arr_39 [i_14] [i_14] [i_19] [i_20] [i_21 - 1]))))));
                        arr_72 [i_21] &= ((/* implicit */unsigned char) 13889731318741181877ULL);
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_11 [i_14 + 1])))) ^ (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-31353)) : (((/* implicit */int) arr_11 [i_14 + 1])))))))));
                    }
                } 
            } 
            var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((arr_15 [i_14] [i_14]) == (380668984959271736ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_9)))))));
            /* LoopNest 2 */
            for (short i_22 = 2; i_22 < 7; i_22 += 4) 
            {
                for (unsigned char i_23 = 2; i_23 < 9; i_23 += 1) 
                {
                    {
                        var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_33 [i_23 - 2])))));
                        /* LoopSeq 2 */
                        for (int i_24 = 3; i_24 < 10; i_24 += 2) 
                        {
                            arr_80 [i_14] [i_19] [i_19] |= ((/* implicit */signed char) var_15);
                            var_43 = ((/* implicit */unsigned short) arr_37 [i_14] [i_14] [i_24 + 1] [i_23] [i_24] [i_24 + 1]);
                            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) 1091291853671059342LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_23] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22983))) : (-6180915520545066650LL))))))) : ((~(((/* implicit */int) arr_69 [i_24 + 1] [i_22 + 4] [i_14 - 1])))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_25 = 0; i_25 < 11; i_25 += 2) 
                        {
                            var_45 |= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned char)243))))));
                            var_46 = ((/* implicit */int) var_6);
                            var_47 = ((/* implicit */long long int) 0U);
                            arr_83 [i_14] [i_23] = ((/* implicit */short) ((var_5) != (((/* implicit */unsigned long long int) 1242632623U))));
                        }
                        var_48 = ((/* implicit */long long int) max((var_48), (((long long int) (+(11679924548374119156ULL))))));
                        var_49 = ((/* implicit */unsigned short) var_5);
                    }
                } 
            } 
            var_50 -= ((/* implicit */unsigned long long int) ((((var_11) - (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_14]))))) ^ (((((/* implicit */_Bool) (+(-7605456862997851120LL)))) ? (((/* implicit */long long int) arr_56 [i_19] [i_14] [i_14])) : (((((/* implicit */_Bool) 49152U)) ? (((/* implicit */long long int) 2147483647)) : (71776119061217280LL)))))));
        }
        /* LoopNest 2 */
        for (signed char i_26 = 0; i_26 < 11; i_26 += 3) 
        {
            for (signed char i_27 = 0; i_27 < 11; i_27 += 3) 
            {
                {
                    var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9223372036854775807LL) >> (((var_13) - (9331983826959715369ULL)))))) ? (((/* implicit */int) var_9)) : (((-64) & (-1915671896)))))) ? (((/* implicit */unsigned long long int) arr_58 [i_14] [i_14] [i_14 - 1] [10U] [i_14 + 1] [i_14])) : (16808454460437352060ULL))))));
                    var_52 = ((/* implicit */int) var_8);
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 11; i_28 += 1) 
                    {
                        for (int i_29 = 0; i_29 < 11; i_29 += 1) 
                        {
                            {
                                var_53 = ((/* implicit */unsigned int) ((var_14) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_75 [i_14] [i_14] [i_27] [i_28] [i_27])))) ? (((int) 773190281U)) : (arr_13 [i_14 - 1] [i_14 - 1]))) - (773190238)))));
                                var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((6ULL) >> (((1728095792U) - (1728095730U)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_35 [i_14] [i_26] [i_26]))))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3052334672U)) <= ((~(arr_42 [i_14] [i_26] [i_27] [i_26]))))))))))));
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_78 [i_14] [0ULL])) ? (((/* implicit */unsigned long long int) arr_19 [(unsigned char)8] [i_14 - 1] [i_27])) : (max((((/* implicit */unsigned long long int) var_7)), (var_14))))))));
                }
            } 
        } 
    }
}
