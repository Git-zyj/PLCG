/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223858
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 2; i_2 < 6; i_2 += 4) 
            {
                var_12 = ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0 - 1])));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_5))));
                var_14 = ((((/* implicit */_Bool) -13)) ? (((/* implicit */int) (signed char)-66)) : (2));
            }
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 38027208)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_0]))))))));
            var_16 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1]))) + (18446744073709551609ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)75)) / (((int) var_3)))))));
        }
        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+((-(((/* implicit */int) (signed char)95)))))))));
            var_18 = (~(arr_13 [i_4]));
            var_19 ^= ((/* implicit */int) arr_8 [i_0 + 1] [i_4] [i_0 + 1]);
        }
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((13), (((/* implicit */int) (unsigned char)7))));
            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (arr_13 [i_0 + 1]) : (arr_13 [i_0 - 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)86), (arr_14 [i_0 + 1])))))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            var_22 ^= ((/* implicit */int) ((unsigned char) ((short) ((((/* implicit */int) (unsigned short)18444)) >> (((14828990563697488489ULL) - (14828990563697488461ULL)))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_11 [i_0 + 1] [i_6 + 1]) >> (((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_12 [i_6 - 1] [i_0]))))))) ^ ((~(max((((/* implicit */unsigned long long int) var_6)), (arr_8 [i_6] [i_0] [i_0])))))));
            var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_9 [i_0])) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (arr_2 [i_0 + 1])))));
        }
        for (short i_7 = 1; i_7 < 7; i_7 += 3) 
        {
            var_25 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_7 + 2])))));
            var_26 = ((/* implicit */unsigned short) ((-2236986133973257301LL) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)143)) + (((/* implicit */int) (unsigned char)194)))))));
            var_27 = ((/* implicit */long long int) ((signed char) max((-1440462643), (91396062))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_7 + 3]))));
                        var_29 = max((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_15 [i_8]))))), (var_5)))), (((int) ((((/* implicit */_Bool) (signed char)52)) ? (arr_24 [i_7 - 1] [i_8] [i_7 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8])))))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) max((((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_7 [i_7])) : (arr_2 [i_7 + 3]))) - (((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */int) (unsigned char)20)) : (arr_18 [i_0 + 1] [i_7] [i_7]))))), (((int) arr_2 [i_0 - 1])))))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (int i_10 = 2; i_10 < 6; i_10 += 4) 
        {
            var_31 = ((/* implicit */long long int) arr_19 [i_10]);
            var_32 = ((/* implicit */unsigned short) max((1201921356), (((/* implicit */int) (unsigned char)63))));
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) arr_21 [i_0 + 1] [i_0 + 1] [i_10] [i_10 + 1]))));
        }
        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0 - 1])) : (-651877090))), ((+(((/* implicit */int) arr_16 [i_0 + 1])))))))));
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)65)))) : (((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */long long int) 1155330921)) : (7618216383440396196LL)))));
            arr_31 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-66))));
            var_36 = ((/* implicit */long long int) ((((((/* implicit */long long int) arr_29 [i_0 - 1])) < (max((arr_10 [i_0 + 1]), (((/* implicit */long long int) var_9)))))) ? (((((((/* implicit */int) (unsigned char)183)) << (((((/* implicit */int) var_4)) - (123))))) >> (((/* implicit */int) ((unsigned short) (unsigned char)7))))) : (1155330906)));
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((short)32766), (((/* implicit */short) arr_1 [i_0]))))), (29ULL)))) ? (arr_28 [i_0 - 1] [i_11] [i_0]) : (((/* implicit */long long int) (-2147483647 - 1)))));
        }
    }
    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_13 = 2; i_13 < 21; i_13 += 1) /* same iter space */
        {
            var_38 |= ((/* implicit */short) max((((int) arr_36 [i_13 + 2] [i_13 + 3])), (var_3)));
            var_39 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4378631909367626751ULL)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_13])) || (((/* implicit */_Bool) (unsigned short)34184)))))))) ? (((arr_36 [i_12] [i_13 + 1]) + (((((/* implicit */_Bool) 365378895)) ? (((/* implicit */int) var_7)) : (var_3))))) : (((max((arr_36 [i_12] [i_13 - 1]), (var_3))) - (((/* implicit */int) var_1))))));
            var_40 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_13])))))) <= (((long long int) 14068112164341924878ULL))))), (((((/* implicit */_Bool) arr_32 [i_13 + 2] [i_12])) ? (((/* implicit */int) arr_33 [i_13 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_12] [i_13 + 3])) || (((/* implicit */_Bool) var_9)))))))));
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_15 = 3; i_15 < 22; i_15 += 3) 
                {
                    var_41 = max(((~(((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_39 [i_12] [i_13 - 1] [i_13 - 1])))))), ((~(((/* implicit */int) ((2193982530985904862LL) >= (((/* implicit */long long int) arr_35 [i_14]))))))));
                    var_42 -= ((long long int) arr_34 [i_14] [i_12]);
                    var_43 = ((/* implicit */unsigned long long int) arr_37 [i_14] [i_13]);
                }
                for (unsigned char i_16 = 1; i_16 < 23; i_16 += 4) 
                {
                    arr_46 [i_16] [i_13] [i_13] [i_13] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_44 [i_16] [i_13 - 1] [i_16 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-11)), (var_7))))) : ((~(var_8))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3149906587132586849LL)) ? (((/* implicit */int) max(((unsigned char)189), (((/* implicit */unsigned char) (signed char)-14))))) : (((/* implicit */int) ((unsigned short) (unsigned short)48416))))))));
                    var_44 = ((/* implicit */unsigned long long int) (short)-20296);
                }
                /* vectorizable */
                for (long long int i_17 = 1; i_17 < 23; i_17 += 4) 
                {
                    var_45 = ((((/* implicit */_Bool) ((long long int) (unsigned char)100))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (4095LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47764))));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned char) ((4169773552523780558ULL) >= (9939187141251943121ULL)));
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_13 - 2] [i_13 + 2] [i_17] [i_17 + 1])) ? (arr_43 [i_13 - 2] [i_14] [i_17] [i_17 + 1]) : (arr_43 [i_13 - 2] [i_13 + 2] [i_17] [i_17 + 1])));
                        var_48 = ((/* implicit */long long int) arr_50 [i_18] [i_17] [i_14] [i_17] [i_12]);
                    }
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 4) /* same iter space */
                    {
                        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (-(((/* implicit */int) (short)-20093)))))));
                        var_50 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18431))) - (-1520610794152576903LL)));
                    }
                }
                /* LoopSeq 1 */
                for (short i_20 = 1; i_20 < 23; i_20 += 3) 
                {
                    var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((((/* implicit */long long int) (-(max((arr_43 [i_13 + 2] [i_12] [i_12] [i_12]), (((/* implicit */int) (unsigned short)28840))))))) - (arr_45 [i_12] [i_13]))))));
                    arr_58 [i_20] [i_14] [i_12] [i_20] = ((/* implicit */int) var_8);
                }
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_21 = 3; i_21 < 23; i_21 += 4) 
            {
                var_52 = ((/* implicit */short) (unsigned short)64653);
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 3; i_22 < 20; i_22 += 3) 
                {
                    for (int i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        {
                            var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18434)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)18421))));
                            var_54 = ((/* implicit */int) ((unsigned long long int) arr_41 [i_12] [i_22 - 3]));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_24 = 1; i_24 < 23; i_24 += 4) 
            {
                arr_72 [i_12] [i_12] [i_12] [i_24 - 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)25098)) && (((/* implicit */_Bool) 2147483647))));
                var_55 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned char)54)))) ? (((/* implicit */int) arr_33 [i_13 - 2])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)134)) && (((/* implicit */_Bool) (unsigned short)10162)))))));
            }
        }
        /* vectorizable */
        for (int i_25 = 2; i_25 < 21; i_25 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_26 = 1; i_26 < 23; i_26 += 4) 
            {
                var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) arr_62 [i_12] [i_25 - 1] [i_26]))));
                var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) arr_48 [i_12] [i_12] [i_12] [i_26]))));
            }
            for (int i_27 = 0; i_27 < 24; i_27 += 4) 
            {
                var_58 = ((/* implicit */short) arr_76 [i_25 - 1] [i_25 + 2] [i_25 + 1]);
                var_59 = ((/* implicit */signed char) (((~(-7618216383440396188LL))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)125)))) - (10)))));
                var_60 = ((/* implicit */signed char) var_2);
            }
            var_61 ^= (unsigned short)65531;
        }
        var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8)) || (((/* implicit */_Bool) (unsigned short)47091))));
        var_63 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned short)47083)) : (-17)));
        var_64 = ((/* implicit */int) ((short) var_5));
    }
    for (unsigned short i_28 = 0; i_28 < 24; i_28 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_29 = 4; i_29 < 23; i_29 += 4) 
        {
            for (signed char i_30 = 0; i_30 < 24; i_30 += 1) 
            {
                for (unsigned short i_31 = 0; i_31 < 24; i_31 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_32 = 2; i_32 < 21; i_32 += 4) /* same iter space */
                        {
                            var_65 = ((/* implicit */int) arr_56 [i_29 - 2] [i_29 - 1] [i_29 - 1] [i_31] [i_29 - 1] [i_30]);
                            var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_78 [i_32 - 1] [i_32 - 2] [i_32 + 1] [i_32 - 2])) && (((/* implicit */_Bool) max((2296592867766238662ULL), (((/* implicit */unsigned long long int) 7618216383440396196LL)))))))) : (((/* implicit */int) var_7))));
                        }
                        for (signed char i_33 = 2; i_33 < 21; i_33 += 4) /* same iter space */
                        {
                            var_67 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_51 [i_28] [i_29] [i_30] [i_31] [i_33 - 2] [i_29 - 1] [i_30])) ? (arr_35 [i_29 - 3]) : (arr_35 [i_29 - 2]))), (((/* implicit */int) ((short) (short)-1)))));
                            var_68 = max((max((-943954694), (var_9))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)160)) ? (arr_59 [i_29 + 1]) : (((/* implicit */int) arr_52 [i_28] [i_29 - 2] [i_30] [i_29 - 2] [i_33 + 3]))))) ? (((((/* implicit */int) (unsigned short)48544)) - (((/* implicit */int) var_7)))) : (arr_75 [i_28] [i_29 - 1] [i_28] [i_33 + 2]))));
                            arr_93 [i_28] [i_33] &= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_41 [i_30] [i_30])) : (((/* implicit */int) arr_56 [i_28] [i_28] [i_28] [i_28] [i_28] [i_33]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_32 [i_33 - 1] [i_29])))) : (arr_48 [i_33 - 1] [i_33] [i_33] [i_29]))));
                        }
                        var_69 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_61 [i_28])), (arr_81 [i_31] [i_28])))), (((unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) (((+(-981341896533048211LL))) / (((/* implicit */long long int) arr_55 [i_31] [i_31] [i_29 - 4] [i_29 - 2] [i_29 - 4])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_34 = 0; i_34 < 24; i_34 += 3) 
        {
            var_70 = ((/* implicit */unsigned char) min((var_70), (((/* implicit */unsigned char) ((((/* implicit */long long int) (~(arr_92 [i_34] [i_34] [i_28] [i_28] [i_28] [i_28])))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13256329215835104120ULL)) ? (((/* implicit */unsigned long long int) arr_66 [i_34] [i_28])) : (3993877918608089836ULL)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) max(((short)0), (((/* implicit */short) var_10)))))))))))));
            /* LoopNest 2 */
            for (unsigned char i_35 = 0; i_35 < 24; i_35 += 1) 
            {
                for (short i_36 = 1; i_36 < 20; i_36 += 1) 
                {
                    {
                        var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) (signed char)-92))));
                        arr_100 [i_36] [i_35] [i_35] [i_28] [i_28] [i_28] = ((/* implicit */signed char) max((((unsigned long long int) ((signed char) arr_88 [i_28] [i_34] [i_35] [i_36 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_40 [i_36 + 1] [i_35] [i_34] [i_28]))) ? (max((((/* implicit */long long int) var_9)), (981341896533048221LL))) : (((/* implicit */long long int) ((int) (-9223372036854775807LL - 1LL)))))))));
                    }
                } 
            } 
            var_72 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_57 [i_28])) ? (arr_96 [i_28] [i_28]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_28])))))));
            var_73 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-1768874510), (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) ((int) (unsigned short)1023))) ? (((/* implicit */int) arr_85 [i_28] [i_28] [i_34])) : (((((/* implicit */_Bool) arr_92 [i_28] [i_28] [i_28] [i_28] [i_34] [i_34])) ? (((/* implicit */int) (unsigned short)21803)) : (arr_84 [i_28] [i_28] [i_28]))))) : (((/* implicit */int) var_1))));
            var_74 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) ^ (3993877918608089840ULL))) & (((/* implicit */unsigned long long int) arr_55 [i_28] [i_28] [i_28] [i_34] [i_34]))));
        }
        for (int i_37 = 0; i_37 < 24; i_37 += 4) 
        {
            var_75 = ((/* implicit */unsigned char) min((var_75), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_54 [i_28] [i_28] [i_28] [i_37] [i_37]), (arr_54 [i_28] [i_28] [i_28] [i_28] [i_37])))) ? (max((-746163260), (((/* implicit */int) arr_76 [i_37] [i_28] [i_28])))) : (((((/* implicit */int) arr_33 [i_28])) | (((/* implicit */int) arr_85 [i_28] [i_37] [i_28])))))))));
            var_76 = ((/* implicit */int) ((((long long int) ((-1768874510) | (arr_42 [i_28] [i_28] [i_28] [i_28] [i_28])))) * (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned char)227))))))))));
        }
    }
    for (unsigned short i_38 = 0; i_38 < 24; i_38 += 4) /* same iter space */
    {
        var_77 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (4378631909367626732ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64512)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51662)) ? (((/* implicit */int) (unsigned short)3103)) : (((/* implicit */int) (unsigned short)13567))))) : ((-(7ULL)))));
        arr_105 [i_38] = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_49 [i_38] [i_38] [i_38] [i_38] [i_38] [i_38])) ? (arr_65 [i_38] [i_38] [i_38] [i_38] [i_38]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((signed char) var_8))))), (((/* implicit */long long int) ((var_8) < (((/* implicit */unsigned long long int) ((arr_104 [i_38]) + (((/* implicit */int) arr_33 [i_38]))))))))));
        var_78 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (-1574491962756577391LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))));
    }
    var_79 = ((/* implicit */int) ((long long int) var_8));
}
