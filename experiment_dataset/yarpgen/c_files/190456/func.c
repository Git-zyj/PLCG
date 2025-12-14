/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190456
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((short) min((arr_0 [i_0]), (arr_0 [i_0]))));
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((11852398520525237348ULL) != (((/* implicit */unsigned long long int) arr_0 [i_0]))))), (max((3654537872820093071ULL), (((/* implicit */unsigned long long int) (signed char)112))))));
        var_16 = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) 321173715U)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_5)))))), ((~(min((arr_1 [(short)7] [(short)7]), (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
        {
            arr_9 [i_1] [i_1] = ((/* implicit */int) arr_3 [1U]);
            /* LoopSeq 3 */
            for (int i_3 = 2; i_3 < 19; i_3 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_8 [i_2]))));
                var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(3474773525U)))) ? (((((/* implicit */_Bool) 4571331318798614588ULL)) ? (13875412754910937040ULL) : (((/* implicit */unsigned long long int) -3616297392536286436LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_3 + 2])) : (((/* implicit */int) var_6)))))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_19 = (-(arr_13 [i_1] [i_1] [i_1] [i_3 - 2]));
                            var_20 = ((/* implicit */signed char) ((unsigned long long int) ((int) (short)2044)));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [(short)12] [(short)12])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))) ? (((unsigned int) (signed char)-38)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4571331318798614576ULL))))))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31259)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)-112))))) : ((~(4181519765U)))));
            }
            for (int i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    arr_21 [i_6 - 2] [i_1] [i_6 + 1] [i_6 + 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7 - 2] [i_6])))))) ? (arr_12 [i_6 + 3] [i_7 + 2] [i_6 + 3] [i_7 - 2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [i_1] [(unsigned short)6])) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_15 [i_2] [i_2] [i_2] [(short)4]))))))));
                    arr_22 [i_1] [1U] [i_7 + 1] [i_7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_6])) - (((/* implicit */int) arr_7 [i_2] [i_6] [i_2]))))) ? (((/* implicit */int) arr_10 [i_2] [i_6 + 3])) : (((/* implicit */int) ((short) -265271256947961908LL)))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_17 [i_1]))) ? (arr_19 [i_6 + 1] [i_7 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_6] [i_2] [i_2] [i_1])) ? (var_11) : (arr_0 [i_1]))))));
                    var_25 += ((/* implicit */int) ((signed char) 9223372036854775807ULL));
                }
                for (int i_8 = 2; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) (~(((arr_19 [i_1] [6]) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                    var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_19 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_1] [i_1])))));
                    var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_1]) : (arr_0 [i_6 + 1])));
                }
                var_29 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_6)) ^ (arr_1 [i_1] [i_2])))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~(arr_0 [i_1]))))));
                arr_25 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_2] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) : (((((/* implicit */_Bool) (signed char)127)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6])))))));
                var_31 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30072))) : (arr_11 [i_1] [i_2] [9LL]))))));
            }
            for (int i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_9 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_9 - 1] [i_9 - 1] [0LL])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))))) : (((/* implicit */unsigned long long int) arr_12 [i_9 - 2] [i_9 + 1] [i_9] [19U] [i_9 + 3])))))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [7] [i_9 + 3] [i_9 - 1] [i_9 + 2])) ? (arr_8 [i_9]) : (((/* implicit */long long int) arr_27 [i_2] [i_2] [i_2] [(_Bool)1]))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_9 + 2] [i_9 - 2])))));
                arr_30 [i_1] [i_2] [i_9 + 3] = ((/* implicit */_Bool) ((unsigned char) 4571331318798614575ULL));
                arr_31 [i_1] [i_2] [i_9 + 3] = ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_2] [i_1]))));
            }
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_28 [(_Bool)1] [(_Bool)1]))))))));
        }
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL)))));
            arr_36 [i_1] = ((/* implicit */unsigned int) 13875412754910937029ULL);
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                var_36 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? (arr_40 [i_1] [i_10] [i_1] [i_1]) : (15296065632662200306ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    var_37 = ((/* implicit */unsigned short) (-(((arr_28 [i_1] [i_1]) ? (arr_38 [(_Bool)0]) : (((/* implicit */unsigned long long int) arr_41 [i_1]))))));
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (3150678441047351306ULL) : (4571331318798614586ULL)));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (signed char)-72))));
                }
            }
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                var_40 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_13] [i_13] [i_13] [i_13] [i_13 + 1])) ? (var_14) : (((/* implicit */unsigned long long int) arr_12 [i_13 + 1] [i_13 + 1] [(unsigned short)20] [i_13 + 1] [i_13 + 1]))));
                var_41 = ((/* implicit */unsigned int) (_Bool)0);
            }
        }
        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3150678441047351303ULL)) ? (((/* implicit */int) arr_48 [i_1] [i_14])) : (((/* implicit */int) arr_48 [i_1] [(signed char)18]))));
            /* LoopSeq 3 */
            for (signed char i_15 = 2; i_15 < 21; i_15 += 2) 
            {
                var_43 = ((/* implicit */_Bool) (signed char)71);
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    var_44 = ((/* implicit */int) ((unsigned short) arr_20 [i_14] [i_15 - 2] [i_15 - 2] [i_15] [i_14]));
                    var_45 = ((/* implicit */signed char) (~(arr_15 [i_15 - 1] [i_14] [i_15] [i_16])));
                    var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [11U] [i_14] [i_14]))))) ? (((((/* implicit */_Bool) arr_29 [(_Bool)1] [i_14] [i_15 + 1] [i_16])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_23 [i_16] [i_15 - 2] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)99)))))));
                    arr_53 [i_1] [i_1] [i_14] [(signed char)8] [i_16] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(arr_41 [i_14])))) * ((+(arr_5 [i_1])))));
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_15 - 1] [0] [(_Bool)1])) ? (((/* implicit */int) arr_44 [i_15 - 1] [i_16] [i_15])) : (((/* implicit */int) arr_23 [i_15 + 1] [i_1] [i_15 + 1]))));
                }
            }
            for (int i_17 = 2; i_17 < 20; i_17 += 2) /* same iter space */
            {
                arr_57 [i_1] [i_1] [i_17 + 1] |= ((/* implicit */unsigned long long int) (+(arr_50 [i_17 + 1] [i_14] [i_17])));
                var_48 = ((/* implicit */int) var_14);
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    for (int i_19 = 1; i_19 < 21; i_19 += 2) 
                    {
                        {
                            arr_64 [i_1] [i_14] [i_18] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_19] [i_19] [i_19 + 1] [i_19 + 1] [i_19 - 1])) ? (((/* implicit */unsigned int) arr_61 [i_19] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 - 1])) : (1217657968U)));
                            var_49 = ((((/* implicit */_Bool) (signed char)-63)) ? (-316343314) : (((/* implicit */int) (unsigned short)46914)));
                            arr_65 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_17 - 2])) * (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((113447531U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((((_Bool)0) ? (6722940862896182006ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59711)))))));
                            var_50 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_1])) ? ((-(-817155207))) : (((((/* implicit */_Bool) arr_61 [i_14] [i_18] [13LL] [i_14] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                var_51 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-6564929365788720329LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_46 [i_17 + 1])) : (((((/* implicit */_Bool) arr_19 [i_17 - 2] [i_17 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_14] [i_14] [14])))));
                var_52 = ((/* implicit */unsigned short) var_0);
            }
            for (int i_20 = 2; i_20 < 20; i_20 += 2) /* same iter space */
            {
                var_53 = arr_32 [i_1] [i_1] [i_20 - 1];
                var_54 -= ((/* implicit */unsigned long long int) arr_11 [i_14] [i_14] [i_14]);
            }
        }
        for (unsigned short i_21 = 0; i_21 < 22; i_21 += 2) /* same iter space */
        {
            arr_70 [17] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_63 [i_21] [i_1] [i_21])))) ? (((var_4) - (((/* implicit */int) arr_34 [i_1] [i_1] [i_1])))) : (((/* implicit */int) (_Bool)1))));
            arr_71 [i_1] [i_1] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_1] [i_21] [i_21])) ? (var_2) : (((/* implicit */int) (short)14350))));
            var_55 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1225874428)) % (((((/* implicit */_Bool) arr_45 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27010))) : (18446744073709551615ULL)))));
            var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5852)) ? (arr_58 [i_1] [i_1] [i_1] [20LL]) : (((/* implicit */unsigned long long int) arr_43 [i_21] [i_21] [i_21] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_1] [i_1] [8]))) : (15296065632662200324ULL)));
        }
        var_57 = ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1])) ? (arr_61 [12] [i_1] [i_1] [i_1] [i_1]) : (((int) var_1)));
        arr_72 [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
    }
    for (int i_22 = 1; i_22 < 21; i_22 += 2) 
    {
        var_58 = ((/* implicit */int) ((((/* implicit */_Bool) (~((+(arr_63 [i_22 + 1] [(_Bool)1] [i_22 + 1])))))) ? ((+(-8549687254490900245LL))) : (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) arr_8 [i_22])) : (18446744073709551592ULL)))) ? (((/* implicit */long long int) arr_16 [i_22] [i_22] [i_22] [i_22 + 1])) : (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)42797))))))));
        var_59 = ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) arr_20 [i_22 - 1] [i_22 + 1] [i_22 + 1] [i_22 - 1] [i_22 + 1])))));
        var_60 = ((/* implicit */unsigned int) (-(var_14)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 22; i_23 += 2) 
        {
            var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) (~(((long long int) (_Bool)0)))))));
            var_62 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_22 - 1] [12]))) & (arr_4 [i_22 + 1] [i_22 + 1])));
            var_63 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1607406718)) ? (((arr_28 [i_22 + 1] [i_22 + 1]) ? (arr_63 [i_22] [i_22 + 1] [i_23]) : (((/* implicit */int) arr_44 [i_22 - 1] [i_23] [i_22 + 1])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_22] [i_23]))) != (arr_26 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1]))))));
            var_64 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (short i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                for (unsigned char i_25 = 0; i_25 < 22; i_25 += 4) 
                {
                    {
                        var_65 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_22 - 1])) ? (((long long int) var_12)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1068000289U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_67 [i_23] [i_24] [i_25])))))));
                        var_66 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_22])) ? (arr_54 [i_22 - 1] [i_25] [i_24]) : (((/* implicit */int) arr_78 [13] [13] [i_25])))))));
                    }
                } 
            } 
        }
        arr_81 [i_22] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_63 [i_22] [i_22 - 1] [i_22 + 1])))) ? (arr_24 [i_22 + 1] [16] [i_22] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)7), (((/* implicit */unsigned short) var_5))))))))));
    }
    var_67 = ((((/* implicit */_Bool) 2147483647)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))));
}
