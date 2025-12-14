/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202913
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17652822948133456603ULL)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (short)-165))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(((unsigned int) (_Bool)1)))))));
                        var_17 = ((/* implicit */_Bool) var_0);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 4128589263U))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)251)))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4] [i_4 + 1] [i_0])) + (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 8; i_6 += 2) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_15 [i_0]))) << (((((/* implicit */int) ((unsigned char) -2603892918233855786LL))) - (212))))))));
                    var_21 = ((/* implicit */_Bool) var_7);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) % (-2603892918233855786LL)));
                    var_23 += ((/* implicit */_Bool) var_7);
                }
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_24 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) var_1)))));
                    arr_26 [i_0] [(unsigned char)9] [i_5] [7U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)212))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [0ULL] [i_8] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) : (arr_2 [i_0] [i_0])));
                    arr_27 [i_8] [i_8] [i_8] [i_8] [i_0] [i_5] = var_6;
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2603892918233855786LL)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (short)32764))));
                    var_27 |= ((/* implicit */short) -2603892918233855786LL);
                    arr_31 [(unsigned char)6] [i_9] [i_9] &= ((/* implicit */signed char) arr_15 [i_6]);
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_6))));
                }
                for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    var_29 = 4128589263U;
                    arr_36 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)0))) ? (((((((/* implicit */int) var_12)) & (((/* implicit */int) var_4)))) % (((/* implicit */int) arr_6 [i_5] [i_6 + 2] [i_6 - 2] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6 + 2] [i_6 + 2] [i_6 - 2])))))));
                }
                var_30 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_3 [i_0] [i_0])))))) ? (((/* implicit */int) arr_5 [i_6])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) ((unsigned char) arr_28 [i_5] [i_5] [i_5]))))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_35 [(signed char)9] [i_0] [i_6 + 2] [i_6] [6])) ? (((/* implicit */int) arr_35 [i_6] [i_6] [i_6 + 2] [i_6] [i_6])) : (((/* implicit */int) arr_35 [i_6 - 2] [i_6] [i_6 + 2] [i_6] [i_6 + 2])))) : ((((~(((/* implicit */int) (unsigned short)15)))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17403)) && (((/* implicit */_Bool) -2008413555)))))))));
                /* LoopSeq 4 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 1; i_12 < 8; i_12 += 2) 
                    {
                        var_32 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                        arr_42 [i_5] [i_5] = ((/* implicit */signed char) var_7);
                        var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_14 [i_11 - 1] [i_6 - 2] [i_6 + 2])))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_5] [i_5] [(_Bool)1])) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (arr_30 [i_0] [(_Bool)1] [i_6 - 1] [i_5])))) ? (((long long int) 885299079897375503ULL)) : (((((/* implicit */_Bool) var_14)) ? (((long long int) arr_30 [i_0] [i_5] [i_6] [i_5])) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)33372)))))))));
                        arr_46 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6722683750956321663ULL)))))) % (var_3)));
                    }
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-9223372036854775807LL - 1LL))))))));
                        arr_50 [i_5] [i_5] [i_6] [i_5] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4254475586U)) ? (((-7895756653938372786LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)70))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_5])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_40 [i_5]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_14] [i_0])))))));
                        var_36 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */int) (short)-30447)) % (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) var_6)) - (-88592323534008753LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */int) (short)23168)) : (((/* implicit */int) (unsigned short)65535)))))));
                    }
                    var_37 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((arr_25 [i_5] [i_6] [i_6]), (((/* implicit */unsigned int) arr_39 [i_5] [i_5] [i_5] [i_11] [i_0] [i_11 - 1]))))), (arr_32 [i_6 + 1] [i_11 - 1] [i_6] [i_6 + 1]))), (((/* implicit */unsigned long long int) (~(var_5))))));
                    /* LoopSeq 4 */
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                    {
                        var_38 *= ((/* implicit */long long int) arr_0 [i_0]);
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) var_2);
                    }
                    for (long long int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
                    {
                        var_39 ^= ((/* implicit */signed char) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_6] [0ULL] [i_6] [i_11 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-70))))));
                        var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (signed char)59)) - (47)))));
                        arr_58 [i_5] [i_5] [i_5] [i_11 - 1] [i_11] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(7895756653938372786LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_11] [i_11 - 1])) ? (((/* implicit */int) arr_38 [i_5] [i_11 - 1] [i_6 + 1] [i_11])) : (((/* implicit */int) (unsigned short)60967))))) : (arr_2 [3ULL] [i_5])));
                    }
                    for (int i_17 = 3; i_17 < 9; i_17 += 3) 
                    {
                        var_41 = ((/* implicit */long long int) ((unsigned int) (unsigned short)58137));
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 104718468)) ? (((((/* implicit */_Bool) (-(var_8)))) ? (arr_25 [i_17 - 3] [i_11] [i_6 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) (signed char)-71)), (1805684669U))))))));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        arr_63 [i_18] [i_5] = ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_38 [i_5] [i_5] [i_11 - 1] [i_5])));
                        var_43 += ((/* implicit */_Bool) ((unsigned int) var_7));
                        var_44 = ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_61 [i_0] [i_5] [i_5] [i_0] [i_0] [1U])))));
                    }
                    var_45 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)132))));
                }
                for (unsigned int i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) var_14))));
                        var_47 = ((unsigned int) (+((-(var_5)))));
                    }
                    var_48 = ((((/* implicit */_Bool) min((((unsigned long long int) (signed char)-16)), (((/* implicit */unsigned long long int) arr_52 [i_0] [i_5] [i_6 - 2] [i_19] [i_0] [i_6 - 2]))))) ? (arr_68 [i_19] [i_19] [i_6] [i_5] [i_19] [i_0]) : (2005595417));
                    arr_69 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned int i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    arr_72 [i_5] [i_5] [i_6] [i_21] [0U] = ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) >> (((1125899905794048LL) - (1125899905794018LL)))))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (arr_25 [i_5] [i_6] [i_21])))) + (((/* implicit */int) arr_53 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                    arr_73 [i_0] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned int) ((long long int) (signed char)70));
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32743))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_22] [i_5] [i_22] [i_21] [i_5] [i_21]))) : (((((/* implicit */_Bool) ((signed char) arr_0 [4ULL]))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) / ((-9223372036854775807LL - 1LL)))))))));
                        var_50 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)0)), (1325384853U)));
                        var_51 = ((/* implicit */int) ((long long int) (signed char)-16));
                        var_52 = ((/* implicit */unsigned short) arr_74 [i_0] [i_5] [i_5] [i_21] [i_5]);
                        var_53 -= ((/* implicit */unsigned char) arr_24 [(unsigned short)2] [i_5] [i_6] [i_21] [1U]);
                    }
                    for (unsigned int i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        var_54 = ((/* implicit */long long int) max((var_54), (((/* implicit */long long int) var_7))));
                        var_55 = ((/* implicit */unsigned char) var_3);
                        var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & ((~(var_11)))))) ? (((((/* implicit */_Bool) arr_74 [i_0] [i_5] [3ULL] [(signed char)2] [i_23])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_6 + 1] [i_0])) : (((((/* implicit */_Bool) (unsigned char)173)) ? (487721151) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_13))));
                    }
                }
                for (int i_24 = 3; i_24 < 7; i_24 += 2) 
                {
                    arr_81 [i_0] [i_5] = ((/* implicit */unsigned char) arr_37 [5ULL] [i_5] [i_5] [i_0]);
                    var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) arr_0 [i_0]))));
                    arr_82 [i_0] [i_0] |= ((/* implicit */_Bool) ((signed char) (_Bool)1));
                    var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) arr_52 [i_0] [i_0] [i_24] [i_24] [i_0] [i_6])))))));
                    var_59 *= ((((/* implicit */int) ((unsigned char) (unsigned char)60))) > (((/* implicit */int) ((signed char) var_6))));
                }
                var_60 = ((/* implicit */int) ((long long int) (unsigned char)173));
            }
            var_61 -= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_28 [i_0] [i_5] [i_5]))));
        }
        var_62 = ((/* implicit */unsigned long long int) max((var_62), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)196)))));
        arr_83 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_52 [(_Bool)1] [i_0] [i_0] [(unsigned char)2] [i_0] [i_0])) - (((/* implicit */int) (unsigned short)504)))));
    }
    for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 2) /* same iter space */
    {
        var_63 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))));
        /* LoopSeq 1 */
        for (unsigned int i_26 = 0; i_26 < 10; i_26 += 2) 
        {
            var_64 += ((/* implicit */unsigned long long int) var_8);
            /* LoopSeq 1 */
            for (unsigned int i_27 = 1; i_27 < 6; i_27 += 3) 
            {
                var_65 *= ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : (3207675148U)))));
                var_66 += ((/* implicit */int) arr_67 [i_25] [i_26] [i_26] [i_27]);
                arr_91 [2U] [i_26] [i_27] = ((/* implicit */signed char) ((6572336356506892688LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121)))));
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 4) 
                {
                    for (signed char i_29 = 0; i_29 < 10; i_29 += 3) 
                    {
                        {
                            arr_96 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned char) min((min((9223372036854775805LL), (((/* implicit */long long int) (unsigned char)173)))), (((((/* implicit */_Bool) (signed char)34)) ? (var_9) : (min((4431877276677777473LL), (-4897047168860451584LL)))))));
                            var_67 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)27))));
                            var_68 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (_Bool)0))));
                            arr_97 [i_25] [i_26] [2U] [i_26] [9ULL] [i_26] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)7168)) ? (1080863910568919040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_69 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_33 [i_29] [i_28] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (((((/* implicit */_Bool) var_14)) ? (6939880701641248724ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))));
                        }
                    } 
                } 
            }
        }
        var_70 -= ((/* implicit */unsigned int) min((1102712177134572114LL), (((/* implicit */long long int) (unsigned char)82))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_30 = 0; i_30 < 10; i_30 += 2) 
        {
            var_71 = var_12;
            var_72 = ((/* implicit */unsigned char) ((unsigned int) (signed char)-1));
            var_73 = ((/* implicit */int) ((unsigned long long int) (unsigned char)76));
        }
        /* LoopSeq 1 */
        for (unsigned int i_31 = 4; i_31 < 8; i_31 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_32 = 1; i_32 < 7; i_32 += 3) 
            {
                for (int i_33 = 0; i_33 < 10; i_33 += 4) 
                {
                    {
                        var_74 = ((unsigned int) var_7);
                        var_75 = ((/* implicit */unsigned char) var_1);
                        var_76 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)33)) || (((/* implicit */_Bool) 1947946571195975433ULL)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_25] [3U] [i_32]))) + (var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (5466600853822412000LL))))))));
                    }
                } 
            } 
            var_77 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1))));
        }
    }
}
