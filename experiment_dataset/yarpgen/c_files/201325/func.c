/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201325
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_13 &= ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) | (((/* implicit */int) var_11)))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
    {
        var_15 = ((/* implicit */_Bool) (signed char)127);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) >= ((~(var_3)))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (_Bool)0))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_1))))))))));
            /* LoopNest 3 */
            for (signed char i_4 = 4; i_4 < 18; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 4; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) 0))))) ? (17269813975394349362ULL) : (((/* implicit */unsigned long long int) 368674291505432843LL)))))));
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_14 [i_2] [i_3])) / (((/* implicit */int) (_Bool)1)))) | (2147483647)));
                            var_21 = ((/* implicit */long long int) ((unsigned long long int) arr_7 [i_2]));
                            var_22 *= ((/* implicit */unsigned long long int) 4);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) var_3);
                var_24 = ((/* implicit */unsigned long long int) var_10);
                var_25 = ((/* implicit */int) var_2);
                var_26 ^= ((/* implicit */long long int) ((((/* implicit */int) (short)30810)) | (((/* implicit */int) (signed char)-66))));
            }
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 18; i_10 += 2) 
                {
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned long long int) arr_30 [i_7 - 1] [i_10] [i_9] [i_2 - 1]);
                            var_28 = ((/* implicit */signed char) arr_18 [i_2] [i_10] [i_9] [i_7] [16LL] [i_2] [i_2]);
                        }
                    } 
                } 
                var_29 = ((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_2] [i_2 - 1]))))) == (var_3));
            }
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_36 [i_2 - 1] [4LL] [i_2] [4LL] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_2] [i_2] [i_7] [i_2] [6U]))) == (var_4))))));
                var_31 = ((/* implicit */int) var_11);
            }
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) (+(arr_31 [i_2])));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) arr_9 [i_2]))));
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 18; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 3; i_15 < 18; i_15 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) var_8);
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_15 - 3] [i_15 + 2] [i_15])) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (var_3)))) : (arr_13 [i_13] [14ULL] [i_2 - 1])));
                            var_36 = ((/* implicit */short) arr_15 [i_2 - 1] [i_2] [(unsigned short)5] [i_14] [i_15]);
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */unsigned int) 0);
        }
        for (signed char i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned char) 0LL);
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)22]))) & (arr_33 [i_2 - 1] [i_16] [i_2 - 1] [i_16] [i_16])))) : (((1679142003184249237ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_2])))))))));
            var_40 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_4))))));
        }
        for (signed char i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
        {
            var_41 &= ((/* implicit */unsigned int) ((368674291505432843LL) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526)))))));
            var_42 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_48 [1U] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_17] [i_2]))) : (var_9))) | (((/* implicit */long long int) ((arr_29 [i_2] [i_2] [i_2]) << (((((/* implicit */int) arr_51 [i_2] [i_2])) - (15))))))));
            /* LoopNest 3 */
            for (int i_18 = 2; i_18 < 19; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 1; i_19 < 19; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_3)) == (arr_23 [i_17] [i_20]))) || (((/* implicit */_Bool) ((((/* implicit */long long int) 23)) & (var_4))))));
                            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)41173)) ? (7057301146181230625ULL) : (((/* implicit */unsigned long long int) -4)))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 2) 
                    {
                        var_45 = ((/* implicit */int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((arr_63 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_2])))))));
                        var_46 = ((/* implicit */unsigned int) min((var_46), (arr_4 [i_22])));
                        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_36 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [3U])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        var_48 = ((/* implicit */long long int) arr_39 [i_23] [i_21] [i_21] [17U]);
                    }
                    var_49 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_55 [(unsigned short)16] [(unsigned short)16] [(unsigned char)13] [i_2])) ? (var_4) : (var_9))));
                    var_50 = ((/* implicit */short) ((((-1) + (2147483647))) >> (0U)));
                    var_51 &= ((/* implicit */unsigned char) ((unsigned int) -7));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 4) 
        {
            var_52 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_24] [i_24] [i_2]))) ^ (var_9)));
            /* LoopSeq 3 */
            for (unsigned long long int i_25 = 1; i_25 < 18; i_25 += 2) /* same iter space */
            {
                var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))));
                var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_24] [i_24])))))));
                /* LoopNest 2 */
                for (long long int i_26 = 4; i_26 < 18; i_26 += 2) 
                {
                    for (unsigned long long int i_27 = 1; i_27 < 18; i_27 += 2) 
                    {
                        {
                            var_55 = ((/* implicit */unsigned int) var_7);
                            var_56 = ((/* implicit */long long int) ((short) var_10));
                            var_57 = ((/* implicit */_Bool) ((signed char) arr_59 [i_27] [i_27 + 1] [i_27] [i_26] [i_24]));
                            var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_27 + 2] [(unsigned short)12] [i_25 + 2] [i_24] [(unsigned short)12])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24366)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_59 [i_27] [i_26] [i_25 + 1] [i_24] [i_2 - 1]))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_28 = 1; i_28 < 18; i_28 += 2) /* same iter space */
            {
                var_59 = var_1;
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 20; i_29 += 4) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 20; i_30 += 2) 
                    {
                        {
                            var_60 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) << (((var_0) - (2302867585U))))) >> (2)));
                            var_61 = ((/* implicit */long long int) var_7);
                            var_62 = var_1;
                            var_63 = ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (((((/* implicit */_Bool) arr_32 [i_2] [i_24] [i_2] [i_2])) ? (arr_57 [(signed char)17] [(signed char)17] [i_2] [i_30]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                        }
                    } 
                } 
                var_64 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_66 [i_2 - 1] [i_24] [i_2] [i_2] [i_24]))));
            }
            for (short i_31 = 2; i_31 < 18; i_31 += 2) 
            {
                var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_23 [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_2 - 1] [i_24] [i_2] [i_24] [i_31])))))) ? (-7) : (((/* implicit */int) var_10))));
                var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) 4294967272U)) : (7057301146181230625ULL)));
            }
            var_67 = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((arr_81 [i_2] [i_2] [i_24] [i_2] [(_Bool)1]) - (6837642075218098559ULL)))))) < (((arr_31 [i_24]) >> (((arr_55 [i_2 - 1] [i_24] [i_2 - 1] [11LL]) - (1586765134)))))))) : (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((arr_81 [i_2] [i_2] [i_24] [i_2] [(_Bool)1]) - (6837642075218098559ULL))) - (18028223236466050386ULL)))))) < (((arr_31 [i_24]) >> (((arr_55 [i_2 - 1] [i_24] [i_2 - 1] [11LL]) - (1586765134))))))));
        }
        for (unsigned int i_32 = 0; i_32 < 20; i_32 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_33 = 0; i_33 < 20; i_33 += 2) /* same iter space */
            {
                var_68 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (4856350883319528732ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) var_1)))));
                var_69 *= ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_88 [9U] [i_2 - 1] [6LL]))) : (arr_63 [i_33])));
                var_70 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) -5)) : (8U)));
            }
            for (unsigned short i_34 = 0; i_34 < 20; i_34 += 2) /* same iter space */
            {
                var_71 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_49 [i_2 - 1])) : (6)))) ? (arr_40 [i_2] [i_2] [i_2] [i_34]) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_73 [i_2] [i_2] [i_2] [i_34])) - (112))))))));
                var_72 = ((/* implicit */long long int) var_0);
            }
            var_73 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (-9032387475675108515LL) : (((/* implicit */long long int) 1354586985U))));
            var_74 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1)) ^ (var_0)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (arr_33 [i_2] [i_2] [i_2] [(signed char)9] [i_32]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_11)))))));
            var_75 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_52 [i_2] [i_2]))))));
        }
        for (unsigned int i_35 = 0; i_35 < 20; i_35 += 2) 
        {
            var_76 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_25 [i_35] [i_35])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_30 [i_35] [i_2] [i_2] [i_2])))));
            var_77 = ((/* implicit */signed char) max((var_77), (((/* implicit */signed char) arr_29 [i_2 - 1] [i_35] [i_35]))));
        }
    }
    var_78 = ((/* implicit */unsigned int) min((var_78), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 0U)) ^ (18446744073709551613ULL))))));
    var_79 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-64)) ? (11389442927528320991ULL) : (((/* implicit */unsigned long long int) 1276413983U))));
    var_80 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0)))))))));
}
