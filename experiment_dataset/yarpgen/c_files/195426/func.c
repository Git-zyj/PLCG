/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195426
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
    var_19 &= var_2;
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_13)) : (min(((~(((/* implicit */int) (unsigned char)90)))), (((/* implicit */int) (signed char)(-127 - 1)))))));
    var_21 = ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)-116)) | (((/* implicit */int) max((((/* implicit */unsigned char) var_17)), ((unsigned char)65))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_22 = var_8;
            /* LoopSeq 1 */
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (signed char)115)))))) ? (((((_Bool) (unsigned short)0)) ? (((12525777833141931519ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (5920966240567620097ULL))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)19))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (-6668503506671311913LL))))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-64)), ((unsigned char)194)))))))));
                            var_25 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)8))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)63))))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    var_26 *= ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_2] [i_2] [(short)10] [i_5 - 1]))));
                    var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)38080))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_5 + 1] [i_2] [i_5] [i_1 + 1] [i_0 - 1] [i_2 - 1])))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_20 [i_0] [i_1] [(_Bool)0] = ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) arr_12 [i_6 - 1] [i_6] [(unsigned char)3] [i_2 - 3] [i_1 + 1] [i_0] [(short)11])), (-7840202306248360333LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)46))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((arr_1 [6]) >= (((/* implicit */int) var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0 + 2] [i_6] [9ULL] [(unsigned char)8] [9ULL] [i_0])) * (((/* implicit */int) var_18))))) ? ((+(-1908402957))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14572849387528357463ULL))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 14572849387528357470ULL)))) || (((/* implicit */_Bool) var_10))))))))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_30 = ((long long int) (unsigned char)241);
                    var_31 += ((/* implicit */long long int) max((((int) ((((/* implicit */_Bool) 14572849387528357489ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_21 [5LL] [i_1] [i_1] [i_1]))))), (((/* implicit */int) var_6))));
                }
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8] [i_0 + 2] [i_1] [i_0 + 2]))))) : (((/* implicit */int) (signed char)-62))));
                /* LoopSeq 4 */
                for (unsigned char i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) var_1));
                    arr_29 [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_15) ? ((+(((/* implicit */int) (signed char)-91)))) : ((~(0)))));
                }
                for (signed char i_10 = 1; i_10 < 11; i_10 += 4) 
                {
                    var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)248))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned char)4] [(unsigned char)4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)10913)) != (((/* implicit */int) (signed char)-35)))))))));
                    var_34 += ((/* implicit */unsigned char) ((short) var_2));
                    var_35 &= ((/* implicit */unsigned char) (+(((/* implicit */int) var_17))));
                }
                for (short i_11 = 3; i_11 < 9; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_12 = 1; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        arr_39 [i_0] [i_8] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) 13807249517641991652ULL));
                        var_36 *= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)91)))))));
                    }
                    for (signed char i_13 = 1; i_13 < 11; i_13 += 2) /* same iter space */
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                        var_37 += ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-64)) < (((/* implicit */int) var_8)))))));
                    }
                    var_38 += ((/* implicit */long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (_Bool)1))));
                    var_39 *= ((/* implicit */short) arr_42 [(signed char)2] [6ULL]);
                }
                for (signed char i_14 = 1; i_14 < 11; i_14 += 1) 
                {
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(unsigned char)6] [(unsigned char)6])) ? ((+(((/* implicit */int) (signed char)61)))) : (((/* implicit */int) (signed char)61)))))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)63)))) - (((/* implicit */int) arr_37 [i_0] [i_0] [i_0])))))));
                }
                arr_48 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-4698)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64850))))) : (((/* implicit */int) (unsigned short)686))));
                arr_49 [i_0] [i_0] = ((/* implicit */_Bool) ((((_Bool) var_14)) ? ((~(((/* implicit */int) (unsigned char)105)))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) (signed char)-63))))));
            }
        }
        for (signed char i_15 = 1; i_15 < 11; i_15 += 1) 
        {
            var_43 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(8524743388702660252ULL)))))) ? ((-(-5237354601955062360LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (long long int i_16 = 1; i_16 < 11; i_16 += 1) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)37), (((/* implicit */unsigned char) arr_30 [i_0] [i_15] [i_15 + 1] [i_15] [i_16] [(unsigned char)2])))))) : (arr_41 [i_0 - 1] [i_15 - 1] [i_16 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (14572218334365452534ULL) : (14572849387528357463ULL)))) ? (((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (var_4))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)20583))))))))));
                var_45 *= ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)(-127 - 1))), (arr_24 [(_Bool)1] [i_16 - 1] [(_Bool)1])))) ? (min((((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0] [i_15] [i_16] [i_16])))), (((/* implicit */int) arr_7 [i_0] [(unsigned short)3] [i_16 + 1] [(unsigned short)3])))) : ((((+(((/* implicit */int) (unsigned short)54622)))) / ((((_Bool)1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_25 [(signed char)2] [i_15] [(signed char)2] [(signed char)2])))))));
            }
            /* vectorizable */
            for (long long int i_17 = 1; i_17 < 11; i_17 += 1) /* same iter space */
            {
                var_46 &= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)31))));
                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_13))) >> ((+(((/* implicit */int) (_Bool)1))))));
            }
            var_48 = (+(min((((/* implicit */unsigned long long int) (signed char)63)), (10344836043451273011ULL))));
            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_3)), (var_12)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) : (3049124199410814398ULL)))))) ? ((-(arr_54 [i_15] [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84)))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_18 = 2; i_18 < 9; i_18 += 4) 
        {
            arr_63 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1216647502)) ? (arr_41 [i_0 + 2] [i_18 + 1] [i_18 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19186)))));
            /* LoopSeq 2 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_20 = 2; i_20 < 10; i_20 += 2) 
                {
                    for (unsigned long long int i_21 = 2; i_21 < 8; i_21 += 2) 
                    {
                        {
                            arr_72 [i_0 + 1] [i_0] [(signed char)11] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_20 - 2]))));
                            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_19] [i_21 + 3] [i_20 + 2] [i_18 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)19186)) && (((/* implicit */_Bool) (unsigned char)7))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_69 [i_0] [(unsigned char)10] [i_0] [i_21])) : (-1216647502))))))));
                            var_51 = ((/* implicit */unsigned char) 63ULL);
                        }
                    } 
                } 
                var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_0 + 2] [i_18 - 2] [(unsigned char)1] [i_19 - 1] [i_19])) ? (arr_31 [i_0 + 2] [i_18 - 2] [i_18] [i_19 - 1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
                /* LoopNest 2 */
                for (signed char i_22 = 3; i_22 < 8; i_22 += 1) 
                {
                    for (signed char i_23 = 1; i_23 < 10; i_23 += 3) 
                    {
                        {
                            var_53 = ((/* implicit */unsigned long long int) (-(1216647502)));
                            var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) (+(2047))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_24 = 1; i_24 < 11; i_24 += 2) 
                {
                    for (unsigned char i_25 = 4; i_25 < 10; i_25 += 2) 
                    {
                        {
                            var_55 = arr_23 [i_0];
                            arr_83 [i_0] [i_18] [i_19] [i_24 + 1] [i_0] [(signed char)1] = ((/* implicit */signed char) ((arr_17 [i_0] [i_0] [1LL] [i_25 + 1]) ? (((/* implicit */unsigned long long int) arr_47 [i_0 + 2] [i_18 - 2] [i_19 - 1] [i_19] [i_24])) : (((((/* implicit */_Bool) var_12)) ? (3873894686181194157ULL) : (16532624597328972292ULL)))));
                            arr_84 [i_0] [(unsigned char)11] [i_0 + 1] [1] [i_0] [i_24] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_23 [i_0]))));
                            var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) (unsigned char)49))));
                        }
                    } 
                } 
                var_57 += ((/* implicit */int) (unsigned char)0);
            }
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) /* same iter space */
            {
                var_58 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (17218141932504473768ULL)));
                var_59 = ((/* implicit */signed char) (+(4417316189975605060ULL)));
                arr_88 [i_26 - 1] [i_18] [i_18] [i_0] = ((/* implicit */_Bool) ((((836277112909119829ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_69 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_26 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1]))));
            }
        }
        arr_89 [i_0] [(unsigned char)11] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_36 [i_0] [i_0 + 2])) && (((/* implicit */_Bool) arr_36 [i_0] [i_0 - 1])))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535)))))))));
        var_60 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_80 [(unsigned char)3] [i_0 - 1] [(unsigned char)3] [i_0] [i_0]))) && (((/* implicit */_Bool) (unsigned char)240))));
        var_61 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-26))))) : ((~(-385939687062999835LL))))))));
    }
    var_62 = ((/* implicit */signed char) ((494615351388554802ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215)))));
}
