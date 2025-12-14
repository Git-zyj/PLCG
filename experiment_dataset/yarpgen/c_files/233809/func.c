/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233809
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
    var_14 *= ((/* implicit */short) ((unsigned long long int) (~(max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)0)))))));
    var_15 |= ((/* implicit */signed char) ((int) ((((long long int) (_Bool)1)) ^ (((long long int) var_3)))));
    var_16 = max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (unsigned short)55652))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_0 [i_0]));
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
    {
        var_18 = (((-(1997148330U))) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */short) arr_0 [i_1 + 1])))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_1] [i_1]))) ? ((-(((/* implicit */int) min(((short)-14729), (((/* implicit */short) (signed char)-72))))))) : (((/* implicit */int) ((signed char) arr_3 [i_1])))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14729)) ? (arr_9 [i_2] [i_2]) : (((/* implicit */int) (signed char)-55))));
            var_20 &= ((/* implicit */unsigned int) ((long long int) (-9223372036854775807LL - 1LL)));
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) arr_15 [i_2] [i_2]);
            arr_16 [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) ((long long int) arr_13 [i_4 - 2] [i_4 + 2]));
            var_22 = ((/* implicit */signed char) arr_9 [i_2] [i_4]);
        }
        for (unsigned char i_5 = 2; i_5 < 23; i_5 += 4) /* same iter space */
        {
            arr_19 [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) ((min((9223372036854775807LL), (((/* implicit */long long int) arr_15 [i_5] [i_5])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) (short)-14750)) : (((/* implicit */int) var_8)))))))) ? (min((5593850611382479158LL), (((/* implicit */long long int) 1044480)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (arr_8 [i_2])))) ? (1073741792) : (((/* implicit */int) ((unsigned char) -7))))))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_6 [i_5])) - (min((arr_8 [i_2]), (((/* implicit */int) (unsigned short)23)))))), (max((((/* implicit */int) ((((/* implicit */int) arr_7 [i_5])) == (arr_10 [i_5])))), (arr_9 [i_5] [i_5 - 1]))))))));
        }
        for (unsigned char i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((int) arr_20 [i_6 + 2] [i_6 + 2] [i_2]))) & ((((!(((/* implicit */_Bool) arr_15 [i_2] [i_2])))) ? (min((-1635944925008018620LL), (382157204613924325LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_2] [i_6] [(_Bool)1])) - (((/* implicit */int) (short)14749))))) ? ((~(arr_9 [i_2] [i_2]))) : (arr_9 [i_6 - 1] [i_6 - 2])))))));
            /* LoopSeq 4 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    var_26 *= ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [5LL]))))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 24; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) var_13);
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (signed char)49)), (9223372036854775807LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9 - 3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_31 [i_8 + 2] [i_9 - 3] [i_8 + 2])))) : (var_7)));
                    }
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) arr_35 [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_30 ^= ((/* implicit */signed char) 201949938951887644ULL);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6 - 2] [i_6 + 2])) ? (-3123513016748898918LL) : (-5593850611382479152LL)))) ? (((/* implicit */int) (short)25590)) : (((/* implicit */int) ((signed char) arr_34 [i_6] [20] [i_6] [i_6 + 2])))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_40 [i_2] [i_6] [18ULL] [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)55)) ? (-1386877783) : (arr_24 [i_2] [i_7] [i_10] [i_12])))) ? (((/* implicit */int) arr_15 [i_2] [i_2])) : (-400231390)));
                        arr_41 [(signed char)23] [14] [14] [i_2] [(signed char)6] [i_2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_6 + 1] [i_6 + 2] [(unsigned short)11] [i_6 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2147483647)))) : (min((var_7), (5593850611382479158LL)))));
                    }
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_44 [i_2] [4U] [i_10] [8] [8] [8] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) + (999562744U)))) ? (1231348263364299662LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))));
                        var_32 += ((/* implicit */short) var_4);
                        var_33 = ((/* implicit */unsigned short) min((((1635944925008018610LL) % (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2]))))), (var_7)));
                    }
                }
                for (int i_14 = 1; i_14 < 24; i_14 += 3) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) min((arr_15 [i_2] [i_2]), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) < (614227309))))))) : (-473731584)));
                    var_35 = ((/* implicit */short) 445060867);
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)-114)) > ((-2147483647 - 1))))))));
                    var_37 = ((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) == (((long long int) arr_27 [i_6 - 1] [i_2] [i_14 + 1] [i_14 - 1] [i_14 + 1])));
                }
                /* vectorizable */
                for (signed char i_15 = 2; i_15 < 22; i_15 += 3) 
                {
                    var_38 = ((/* implicit */unsigned long long int) var_12);
                    var_39 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_2] [(unsigned short)10] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-78)))) <= (((/* implicit */int) arr_38 [i_2] [i_6] [i_7] [i_15] [i_7]))));
                }
                var_40 = ((/* implicit */long long int) var_2);
                var_41 |= ((/* implicit */unsigned char) (+(((arr_23 [i_2] [i_6 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2] [i_6 - 2] [i_6 + 1] [i_6] [i_7])))))));
            }
            for (int i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) 9000866359107153408LL)) ? (-1231348263364299639LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24274)))));
                            var_43 = 2147483634;
                            var_44 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (~(var_12))))) ? (((/* implicit */long long int) min((((/* implicit */int) min((arr_25 [i_2] [22LL] [i_18] [i_17]), (arr_15 [i_18] [i_18])))), ((+(((/* implicit */int) arr_49 [i_18] [i_6] [24] [24] [i_18]))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_18]) : (1266353152)))), ((+(var_3)))))));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1209900939U)) | (-1635944925008018620LL)))) ? (((((/* implicit */_Bool) arr_29 [17] [i_6] [i_6] [i_6] [i_2] [i_6 - 2] [17])) ? (((/* implicit */int) arr_29 [i_2] [i_6] [i_6 - 1] [i_6 + 2] [i_2] [i_6 - 2] [i_16])) : (((/* implicit */int) arr_21 [i_6 + 1])))) : (((/* implicit */int) var_1))));
                            var_46 = ((/* implicit */short) max(((+(((/* implicit */int) arr_15 [i_2] [i_6 - 2])))), (max((((/* implicit */int) arr_21 [i_6 + 2])), (((int) -1073741792))))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_25 [i_6] [i_6 - 2] [i_2] [i_6 + 1])) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_25 [i_6 + 2] [i_6 - 2] [i_2] [i_6 + 1])))), (((/* implicit */int) arr_25 [11] [i_6 + 1] [i_2] [i_6 - 1]))));
            }
            for (unsigned int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
            {
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_19] [i_6] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_19] [i_19] [i_2])) ? (((/* implicit */int) arr_15 [i_2] [i_6 - 2])) : (((/* implicit */int) arr_49 [i_2] [i_6 + 1] [i_2] [i_2] [i_2])))) : (((int) 119988275))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    var_49 = ((/* implicit */unsigned long long int) ((unsigned char) arr_34 [i_6] [i_6] [i_6 + 2] [i_6]));
                    arr_62 [i_6] &= ((/* implicit */long long int) (~(((/* implicit */int) arr_49 [i_6] [i_6 - 1] [i_6 - 1] [i_20] [i_6 + 1]))));
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_23 [i_2] [(signed char)12]) : (((/* implicit */unsigned long long int) arr_24 [(short)16] [(_Bool)1] [(short)16] [(short)16]))))) ? (((381678663U) | (4294967286U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    /* LoopSeq 2 */
                    for (signed char i_21 = 2; i_21 < 23; i_21 += 1) 
                    {
                        var_51 = ((/* implicit */short) (-(9307051965401540180ULL)));
                        var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_21 + 1] [i_6] [i_6] [i_20] [i_2])) ? (arr_37 [i_21 + 2] [13] [i_19] [i_21 + 2] [i_2]) : (9223372036854775807LL)));
                    }
                    for (int i_22 = 3; i_22 < 22; i_22 += 3) 
                    {
                        var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) ((long long int) arr_37 [i_2] [0] [(signed char)12] [i_20] [i_6])))));
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_34 [i_6 - 2] [i_6] [i_6] [i_20])) * (var_4)));
                        arr_70 [i_2] [i_19] [18ULL] = ((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) -1073741793))));
                    }
                }
            }
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_24 = 0; i_24 < 25; i_24 += 3) 
                {
                    var_55 = ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_2] [(signed char)16] [2LL])) - ((+(((/* implicit */int) arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        var_56 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8222))) * (((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515))) : (16193571665624017510ULL)))));
                        var_57 &= ((/* implicit */long long int) arr_53 [i_23] [i_6 - 2]);
                        var_58 = ((/* implicit */unsigned short) (signed char)60);
                    }
                    for (signed char i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        var_59 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)9056)) : (((/* implicit */int) (signed char)64)))));
                        var_60 = ((/* implicit */long long int) ((((/* implicit */int) (short)21167)) > (1)));
                    }
                    var_61 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                }
                for (int i_27 = 0; i_27 < 25; i_27 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_28 = 0; i_28 < 25; i_28 += 4) 
                    {
                        arr_88 [i_2] [i_2] [i_2] = ((/* implicit */int) arr_42 [i_2] [i_6] [(short)10] [(short)11] [21LL]);
                        var_62 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_49 [i_2] [i_6 + 1] [i_6 + 1] [i_27] [i_28])))), (((int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)66)))))));
                        var_63 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((1231348263364299643LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))))) != (((int) var_4))));
                        var_64 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) arr_21 [i_28]))), (max((((/* implicit */long long int) var_8)), (6651149918335785443LL)))))) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (arr_57 [i_6 - 2] [i_2] [i_2] [i_6 + 2])));
                    }
                    for (long long int i_29 = 4; i_29 < 21; i_29 += 1) 
                    {
                        var_65 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (1073741824)))) ? (((int) -1216031424)) : ((+(var_12)))))) ? (((((/* implicit */_Bool) arr_58 [i_29 + 3] [i_29 - 1])) ? (((((/* implicit */_Bool) arr_30 [(signed char)14] [i_6] [20ULL] [20ULL] [i_29])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (68719476735ULL))) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) arr_54 [i_2] [i_2] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1635944925008018622LL) != (arr_37 [i_2] [i_6 + 1] [i_23] [i_27] [i_2])))))));
                        var_66 = ((/* implicit */int) (-(arr_61 [i_6] [i_23])));
                        var_67 = ((((/* implicit */int) arr_66 [1] [(unsigned char)7])) / (arr_81 [i_2] [i_6 - 1] [i_2] [i_27] [(unsigned char)2]));
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_68 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_76 [i_2] [i_6 - 1] [i_2] [i_6 - 2] [i_30] [i_23] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2] [i_27])) ? (((/* implicit */int) var_6)) : ((-2147483647 - 1))))))) ? ((+(9037814495029969110ULL))) : (((/* implicit */unsigned long long int) min((max((arr_37 [i_2] [i_2] [i_2] [i_27] [i_2]), (((/* implicit */long long int) arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */long long int) ((unsigned int) (short)32761))))))));
                        var_69 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) arr_26 [i_23] [i_6] [i_23]))))), (var_3)));
                        var_70 = ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_10 [i_2])), (arr_80 [i_6 - 2] [i_2] [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_73 [i_2] [i_6 + 1] [i_23])) ? (arr_10 [i_2]) : (-1979238722))))));
                        var_71 |= ((/* implicit */int) arr_56 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 2]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_31 = 0; i_31 < 25; i_31 += 3) 
                    {
                        var_72 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_2] [i_2] [i_23] [i_2]))) : (((((/* implicit */_Bool) arr_94 [i_6] [i_6] [i_6 + 2] [i_6] [i_6 + 1])) ? (max((((/* implicit */unsigned int) -1)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))));
                        var_73 = ((/* implicit */int) max((var_73), ((~(1913171918)))));
                        var_74 = ((/* implicit */_Bool) ((int) ((int) ((int) -1395873417))));
                    }
                    var_75 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2])) != (((/* implicit */int) arr_36 [i_2] [i_2] [i_6] [i_2] [i_27] [i_6] [i_2]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_32 = 1; i_32 < 23; i_32 += 3) 
                {
                    for (signed char i_33 = 2; i_33 < 24; i_33 += 4) 
                    {
                        {
                            var_76 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_21 [i_2]))), (-1979238751)));
                            var_77 = ((/* implicit */signed char) ((unsigned int) ((long long int) ((2113929216U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_2] [i_2] [i_2])))))));
                        }
                    } 
                } 
                arr_104 [i_2] [i_6 + 2] [i_2] [i_23] = ((/* implicit */unsigned short) ((int) ((unsigned short) ((((/* implicit */_Bool) 6759482858399074111ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_2]))) : (arr_13 [i_23] [i_2])))));
            }
        }
        var_78 = ((((/* implicit */_Bool) min((arr_10 [i_2]), (0)))) ? (((/* implicit */int) ((unsigned short) arr_10 [i_2]))) : (min((arr_10 [i_2]), (268435456))));
    }
    for (short i_34 = 2; i_34 < 22; i_34 += 3) 
    {
        var_79 = 1199598052416080968LL;
        /* LoopNest 2 */
        for (unsigned long long int i_35 = 0; i_35 < 23; i_35 += 1) 
        {
            for (unsigned long long int i_36 = 0; i_36 < 23; i_36 += 2) 
            {
                {
                    var_80 = ((/* implicit */unsigned short) var_10);
                    var_81 = (i_34 % 2 == 0) ? (((/* implicit */int) ((short) ((((arr_33 [i_34] [i_34] [i_36]) - (((/* implicit */int) var_8)))) + (min((arr_91 [i_36]), (var_12))))))) : (((/* implicit */int) ((short) ((((arr_33 [i_34] [i_34] [i_36]) - (((/* implicit */int) var_8)))) - (min((arr_91 [i_36]), (var_12)))))));
                }
            } 
        } 
    }
}
