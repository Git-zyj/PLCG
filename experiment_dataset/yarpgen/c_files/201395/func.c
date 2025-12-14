/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201395
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))), (((var_0) ? (((/* implicit */unsigned long long int) var_8)) : (var_4))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23789))))) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((arr_0 [i_0]) ? (((/* implicit */int) (short)8184)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_12 = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0]));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_3] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)23787)) : (arr_6 [i_2] [i_4] [i_2])))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_9 [i_1]))))), (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4])) || (((/* implicit */_Bool) arr_10 [i_5] [i_4] [i_2] [i_1]))))))))));
                            arr_18 [i_2] [i_2] [i_4] [i_5] |= ((/* implicit */_Bool) (short)-23759);
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (short)32767))))))));
                        }
                    } 
                } 
            } 
            arr_19 [i_1] = ((/* implicit */unsigned long long int) (((~((~(arr_8 [i_1] [i_1] [i_2] [i_2]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-895)))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                var_14 ^= ((/* implicit */short) ((((var_2) ^ (((/* implicit */unsigned long long int) -6154316212442868016LL)))) * (((unsigned long long int) arr_7 [i_1] [i_2] [i_1]))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (_Bool)1))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    arr_27 [i_6] [i_2] [i_7] [i_2] [i_1] [i_6] = ((/* implicit */unsigned long long int) arr_20 [i_1 + 3] [i_6 - 1] [i_7] [i_7]);
                    var_16 = ((/* implicit */unsigned long long int) arr_14 [i_7]);
                    arr_28 [i_7] [i_6] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_12 [i_1] [i_7] [i_1 + 2] [i_6 - 1]));
                }
            }
            for (short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                arr_31 [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_9 [i_8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), ((unsigned short)65528)));
            }
            for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    var_18 = ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_30 [i_1 + 1] [i_2] [i_9 - 2] [i_2])) : (arr_21 [i_1 - 1]))), (max((arr_21 [i_2]), (var_2)))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_30 [i_9 + 1] [i_9] [i_9 + 1] [i_2]))))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)23811)) ? ((-(((/* implicit */int) (unsigned short)38749)))) : ((~(1073741824)))))), (((((/* implicit */_Bool) min((4463394041467475704ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? (-1070082419063284397LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10306249860246890609ULL)) && (arr_36 [i_11] [i_11] [i_11] [i_11])))))))));
                        var_21 = ((/* implicit */signed char) arr_6 [i_1] [i_11] [i_1]);
                    }
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (16760832U)))) >= (var_7)))), ((-((-(arr_26 [i_1] [i_1] [i_1] [i_11] [i_13] [i_1])))))));
                        arr_47 [i_1] [i_2] [i_9] [i_11] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */int) (((+(arr_34 [i_11] [i_11]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_40 [i_9 - 1] [i_9] [i_9] [i_11])) : (((/* implicit */int) arr_40 [i_9 - 2] [i_9 - 2] [i_11] [i_11]))))));
                    }
                    var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26808)) ^ (((/* implicit */int) arr_46 [i_1] [i_11] [i_11]))))) & (var_6)))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_9))));
                }
                arr_48 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((int) (unsigned short)38769)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])))))));
            }
        }
        var_25 = ((/* implicit */short) max((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)38766), (((/* implicit */unsigned short) arr_45 [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
        arr_49 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775784LL)) ? (max((arr_15 [2U] [2U]), (arr_15 [(unsigned char)0] [(unsigned char)0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30)))))) <= (arr_4 [i_1])))))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 3]))))))))));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 12; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                {
                    var_27 |= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_15])) ? (572876580U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) / (arr_53 [i_15] [i_14 - 1]))) | (((/* implicit */long long int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 1819480684)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) (signed char)15))));
                    var_29 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_55 [i_14] [i_14] [i_15] = ((/* implicit */_Bool) ((short) ((var_6) != (((/* implicit */unsigned long long int) ((long long int) arr_53 [i_1] [i_1]))))));
                    var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_1] [i_1])) - (((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    }
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        arr_59 [i_16] = ((((((/* implicit */_Bool) arr_57 [i_16 + 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_58 [i_16]))))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) arr_57 [i_16])) : (((/* implicit */int) (unsigned char)96))))));
        arr_60 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(7019462993246321392LL)))) ? (min((min((((/* implicit */long long int) (short)12477)), (arr_56 [i_16] [i_16]))), (((/* implicit */long long int) (unsigned char)246)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((int) arr_57 [i_16])))))));
        arr_61 [i_16] = ((/* implicit */unsigned char) ((unsigned int) (signed char)108));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_17 = 1; i_17 < 22; i_17 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_18 = 4; i_18 < 21; i_18 += 4) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) var_7);
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_74 [i_18] [i_16] [i_16] [i_19])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-103))))))));
                            var_33 = ((/* implicit */unsigned short) arr_63 [i_17]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_21 = 0; i_21 < 24; i_21 += 4) 
            {
                /* LoopSeq 4 */
                for (signed char i_22 = 0; i_22 < 24; i_22 += 4) 
                {
                    var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1331455674969659060ULL)) ? (((/* implicit */int) arr_72 [i_16])) : (((/* implicit */int) arr_62 [i_17] [i_17] [i_22])))))));
                    arr_83 [i_22] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_16] [i_17] [i_17] [i_17 + 1])) || (arr_72 [i_16])));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_63 [i_16]))) ? (((((/* implicit */_Bool) arr_82 [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_3))) : (((/* implicit */unsigned long long int) (+(var_9))))));
                    var_36 = ((/* implicit */_Bool) (short)-12066);
                }
                for (unsigned char i_23 = 1; i_23 < 22; i_23 += 1) 
                {
                    var_37 = ((unsigned int) arr_56 [i_17] [i_16]);
                    /* LoopSeq 4 */
                    for (int i_24 = 0; i_24 < 24; i_24 += 4) 
                    {
                        var_38 = ((/* implicit */short) (~(((/* implicit */int) (short)12065))));
                        arr_89 [i_16] [i_16] [i_21] [i_23] [i_16] = ((/* implicit */unsigned int) arr_58 [i_16]);
                    }
                    for (unsigned short i_25 = 2; i_25 < 23; i_25 += 1) 
                    {
                        arr_92 [i_16] [i_16] [i_21] [i_23] [i_16] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_16]))) ^ (17952077571706852833ULL))));
                        arr_93 [i_25] [i_16] [i_16] [i_21] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((unsigned long long int) 2309788629U)) >= (((/* implicit */unsigned long long int) ((unsigned int) arr_75 [i_16] [i_17] [i_17] [i_16] [i_17])))));
                        arr_94 [i_16] [i_16] [i_16] = ((/* implicit */int) ((arr_77 [i_16] [i_23 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_16] [i_17] [i_16])))));
                    }
                    for (unsigned int i_26 = 0; i_26 < 24; i_26 += 3) 
                    {
                        arr_98 [i_16] [i_16] [i_16] [i_16] = ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12082))) : (9223372036854775805LL));
                        var_39 -= ((/* implicit */short) arr_81 [i_16] [i_21] [i_21] [i_21]);
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_99 [i_16] [i_21] [i_16] [i_16])) % (arr_78 [i_23] [i_23] [i_16])))) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (((11445694170689290326ULL) * (0ULL)))));
                        var_41 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 226132549U)) ? ((+(arr_74 [i_21] [i_21] [i_21] [i_21]))) : (((/* implicit */unsigned long long int) arr_82 [i_16] [i_21] [i_21]))));
                    }
                }
                for (short i_28 = 0; i_28 < 24; i_28 += 1) 
                {
                    arr_104 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_16] [i_16] [i_16] [i_16] [i_16]))) : (((unsigned long long int) (_Bool)1))));
                    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) var_3))));
                }
                for (short i_29 = 0; i_29 < 24; i_29 += 4) 
                {
                    var_43 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) * (((/* implicit */int) arr_72 [i_16]))));
                    var_44 = ((/* implicit */short) 1425333084U);
                    var_45 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)207))));
                }
                arr_107 [i_16] = ((/* implicit */_Bool) ((int) (+(2147483643))));
                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_95 [i_16] [i_16] [i_16] [i_17] [i_21])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                var_47 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_71 [i_16] [i_16] [i_21] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)))));
            }
        }
        for (unsigned int i_30 = 0; i_30 < 24; i_30 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_31 = 0; i_31 < 24; i_31 += 4) 
            {
                for (short i_32 = 0; i_32 < 24; i_32 += 1) 
                {
                    {
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_101 [i_16] [i_16] [i_16] [i_16])) ? (var_4) : (((/* implicit */unsigned long long int) arr_69 [i_32])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31905))))))))));
                        var_49 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_78 [i_16] [i_16] [i_16 + 1])) || (((/* implicit */_Bool) arr_82 [i_16] [i_16 + 1] [i_16])))));
                        arr_114 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 1080863910568919040LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (8380416U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) : (-1080863910568919049LL))) : (((/* implicit */long long int) max(((-(arr_102 [i_16] [i_16] [i_16] [i_31] [i_16]))), (min((arr_65 [i_16] [i_16] [i_16] [i_16]), (((/* implicit */int) arr_112 [i_16] [i_16] [i_31] [i_16])))))))));
                        arr_115 [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_105 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_57 [i_32])), (-9223372036854775804LL)))) || (((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) 117440512U))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)56))))) >= (var_3))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_33 = 0; i_33 < 24; i_33 += 1) 
            {
                var_50 = ((/* implicit */long long int) (_Bool)1);
                var_51 = ((/* implicit */signed char) (_Bool)1);
            }
            arr_119 [i_16] [i_16] [i_16] = ((/* implicit */short) (_Bool)1);
            var_52 = ((/* implicit */unsigned long long int) ((int) (~(arr_74 [i_16] [i_30] [i_30] [i_30]))));
        }
    }
    var_53 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) / (var_7)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) ? (var_4) : (var_7)));
    var_54 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned long long int) ((var_6) < (((((/* implicit */_Bool) 16515072U)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
}
