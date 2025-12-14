/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28397
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
    var_15 = ((/* implicit */unsigned char) 5180098863571016926ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (+(-6588013558421565181LL)));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (arr_1 [i_0 + 1] [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2])) | (((/* implicit */int) var_12))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned long long int) var_0))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)4)) ? (-202121463) : (((/* implicit */int) var_3)))), (((((/* implicit */int) var_9)) | (((/* implicit */int) (signed char)15))))))) > (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((var_10), (((/* implicit */long long int) var_11))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_7)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-64))))) : (((((/* implicit */_Bool) var_13)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_2))))));
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16621)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4])))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))));
        var_23 ^= ((/* implicit */unsigned long long int) 268435455);
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)42895))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4]))) + (var_1)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                arr_20 [i_4] [23U] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (unsigned short)16384)) & (((/* implicit */int) var_11))))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2519074881229984061LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_5]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)246))))) : ((~(var_1))))))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_26 = ((/* implicit */unsigned long long int) arr_11 [(unsigned short)13] [(unsigned short)13]);
                    var_27 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_6)))) + (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)1)))))));
                }
            }
            var_29 = ((/* implicit */unsigned int) var_11);
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_19 [(short)17]))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) arr_16 [(unsigned char)21] [1] [i_8]);
                        var_32 = ((/* implicit */short) -6202623856746438242LL);
                    }
                } 
            } 
        }
    }
    for (short i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
    {
        var_33 &= ((/* implicit */unsigned char) ((var_1) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) arr_11 [i_10] [i_10])) : (arr_15 [i_10] [i_10])))) ? ((-(5987935298036484358LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
        arr_29 [i_10] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned short)65520)), (min((((/* implicit */unsigned int) (unsigned char)6)), (4063232U))))) >> (((arr_11 [i_10] [i_10]) - (3871317257U)))));
        var_34 = ((/* implicit */unsigned int) var_14);
    }
    for (short i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_12 = 3; i_12 < 22; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 2; i_13 < 24; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    for (unsigned char i_15 = 2; i_15 < 24; i_15 += 3) 
                    {
                        {
                            arr_46 [i_11] [i_11] [i_12] [i_11] [i_11] [(unsigned char)24] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43428)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (67553994410557440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11] [i_11] [i_11] [19])))));
                            var_35 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (min((((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (18379190079298994160ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_42 [i_11] [i_12] [i_13 - 1] [i_12] [i_15])))))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned char) min(((signed char)9), (((/* implicit */signed char) min(((_Bool)1), ((_Bool)1))))));
            }
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1506478007)), (36028797018963968LL)))) ? (((((((/* implicit */_Bool) 205205564)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) min((var_8), (var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [i_12 - 1] [i_12 - 1] [i_12] [13U] [i_12])) || (((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */long long int) 359837021U))))))))));
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_17 = 1; i_17 < 24; i_17 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_18 = 2; i_18 < 21; i_18 += 4) 
                {
                    arr_55 [(_Bool)1] [i_16] [(short)9] [(unsigned char)1] [11U] = ((/* implicit */_Bool) ((var_6) ? (274877382656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                    var_38 = ((/* implicit */long long int) (short)2679);
                    var_39 &= (unsigned char)147;
                }
                var_40 = ((/* implicit */int) 0ULL);
                arr_56 [(short)11] [8] = ((/* implicit */unsigned int) var_9);
                /* LoopSeq 2 */
                for (unsigned short i_19 = 3; i_19 < 23; i_19 += 3) 
                {
                    var_41 = ((/* implicit */int) var_7);
                    var_42 = ((/* implicit */signed char) (short)-32767);
                }
                for (unsigned short i_20 = 2; i_20 < 23; i_20 += 4) 
                {
                    arr_62 [i_11] [i_16] [i_16] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)25279)) + (((((/* implicit */_Bool) var_5)) ? (205205558) : (((/* implicit */int) (signed char)-45))))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        var_43 += ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_22 [i_11])) - (((/* implicit */int) (short)15341))))));
                        var_44 = ((/* implicit */short) (_Bool)1);
                        var_45 = ((/* implicit */short) 1490141638285659904LL);
                    }
                    var_46 = ((/* implicit */short) (((+(3012431887U))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7)))));
                }
                arr_66 [i_11] [i_16] [i_16] [i_17] = ((/* implicit */short) var_6);
            }
            /* LoopSeq 1 */
            for (long long int i_22 = 2; i_22 < 22; i_22 += 4) 
            {
                var_47 = ((/* implicit */unsigned char) arr_16 [i_11] [i_22 - 1] [i_22]);
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 25; i_23 += 3) 
                {
                    for (unsigned char i_24 = 4; i_24 < 23; i_24 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned int) var_9);
                            var_49 = ((/* implicit */_Bool) ((arr_67 [i_22 + 3] [i_24 - 3]) ? (((/* implicit */int) arr_67 [i_22 + 2] [i_24 + 1])) : (((/* implicit */int) (signed char)107))));
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)32))));
                            var_51 = ((/* implicit */short) ((((/* implicit */int) var_13)) >> (((/* implicit */int) ((((/* implicit */int) arr_50 [i_22] [i_16] [i_22])) != (((/* implicit */int) var_0)))))));
                            var_52 &= ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
                var_53 ^= ((/* implicit */signed char) var_13);
                var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */int) (short)1126)) * (((/* implicit */int) arr_27 [i_22])))) : (((/* implicit */int) var_5))));
            }
            /* LoopSeq 1 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_55 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-33)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)1126)) <= (2147483647))))) : (var_1)));
                var_56 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_18 [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_9)) : (-964823418)))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_26 = 1; i_26 < 23; i_26 += 3) /* same iter space */
            {
                arr_82 [i_26] [i_16] [i_11] = ((/* implicit */unsigned char) (((((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_68 [i_11] [i_26])))) + (2147483647))) >> (((((/* implicit */int) arr_45 [i_11] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) - (7186)))));
                var_57 = ((/* implicit */unsigned short) var_1);
                var_58 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_26 - 1] [i_26 - 1]))) + (var_7)));
            }
            for (unsigned int i_27 = 1; i_27 < 23; i_27 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_28 = 1; i_28 < 24; i_28 += 3) 
                {
                    var_59 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32736)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (short)482)))))));
                    arr_89 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_88 [i_28] [i_28 - 1] [i_28 + 1] [i_27 + 1]))) * (67108832ULL)));
                }
                /* LoopSeq 1 */
                for (unsigned short i_29 = 0; i_29 < 25; i_29 += 4) 
                {
                    var_60 += ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                    var_61 = ((/* implicit */unsigned int) (unsigned short)65515);
                    var_62 = ((/* implicit */unsigned int) ((var_10) & (((/* implicit */long long int) arr_40 [i_16] [i_27]))));
                }
                arr_92 [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))));
                var_63 = ((/* implicit */unsigned long long int) min((var_63), (((/* implicit */unsigned long long int) arr_71 [i_16] [i_16] [i_16] [i_16]))));
            }
        }
        var_64 = ((/* implicit */_Bool) (short)-32268);
        /* LoopSeq 2 */
        for (unsigned char i_30 = 0; i_30 < 25; i_30 += 4) 
        {
            arr_96 [i_11] [i_30] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446743798832168969ULL)) && (((-7090020529608283826LL) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) / (var_14)));
            arr_97 [i_11] [i_30] &= ((/* implicit */unsigned short) (-((~(min((((/* implicit */unsigned long long int) var_13)), (18446743798832168964ULL)))))));
            arr_98 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) -530200624);
        }
        for (int i_31 = 0; i_31 < 25; i_31 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_32 = 0; i_32 < 25; i_32 += 3) 
            {
                for (long long int i_33 = 0; i_33 < 25; i_33 += 4) 
                {
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        {
                            arr_109 [i_34] [(unsigned char)1] [(_Bool)1] [i_31] [(_Bool)1] = 205205568;
                            var_65 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)6)) ? (3587146545U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_66 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5996289732911520708LL)) && (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (-678082563))))))));
                            arr_110 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) var_5);
                            var_67 ^= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_13)))) >= (min((((((/* implicit */_Bool) arr_34 [i_11])) ? (((/* implicit */int) arr_104 [i_34] [i_32] [i_31] [i_11])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (short)-3589)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_35 = 3; i_35 < 22; i_35 += 3) 
            {
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    {
                        var_68 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 205205568))))), ((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)255))))))));
                        var_69 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 274877382646ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_37 = 0; i_37 < 25; i_37 += 3) 
                        {
                            var_70 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [(unsigned char)8] [(unsigned char)8] [i_35] [(unsigned char)8] [i_37])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_65 [i_35 - 3] [i_35 + 3] [i_35 + 1] [i_35 + 3]))));
                            var_71 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_35 [i_11] [i_37] [(unsigned short)10])) : (((/* implicit */int) var_12))))) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_114 [i_11] [i_31] [i_31] [i_35 + 1] [23LL] [i_37]))));
                            var_72 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
                            arr_119 [i_11] [i_31] [i_37] [i_36] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 274877382663ULL)) ? (((/* implicit */int) arr_31 [i_11])) : (((/* implicit */int) (short)-32750))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_35 - 1] [i_35 + 2] [i_35 + 1])));
                        }
                        for (unsigned char i_38 = 1; i_38 < 23; i_38 += 3) 
                        {
                            var_73 = ((/* implicit */unsigned int) (_Bool)0);
                            var_74 = ((/* implicit */unsigned int) var_4);
                        }
                        /* vectorizable */
                        for (signed char i_39 = 1; i_39 < 23; i_39 += 4) 
                        {
                            var_75 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)199)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (7256097897472223698ULL)));
                            var_76 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_77 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_11] [i_31] [i_36])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (8397844870856922823ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            arr_127 [i_11] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -1918811357)))) ? (arr_75 [i_35 - 1] [i_35 - 1] [i_35 - 1] [i_39 - 1] [(signed char)22]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -205205595)) ? (var_2) : (((/* implicit */int) (unsigned char)254)))))));
                        }
                        var_78 = ((/* implicit */int) arr_51 [i_11] [22ULL]);
                    }
                } 
            } 
            arr_128 [i_31] = ((/* implicit */unsigned long long int) var_8);
            var_79 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) (short)27856)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_16 [i_11] [i_11] [(unsigned char)19]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (max((((/* implicit */unsigned long long int) var_13)), (16574555395389262395ULL)))))));
        }
    }
}
