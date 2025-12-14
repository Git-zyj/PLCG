/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221777
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [(short)15] [i_1] [i_0]))) ? (((/* implicit */unsigned int) min((880302391), (((/* implicit */int) (signed char)53))))) : (var_18))));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [(unsigned short)5] [i_2] [8U] = ((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_3] [i_3] [i_3 - 3]);
                                var_21 = ((/* implicit */int) max(((+(17701264478140833216ULL))), (((/* implicit */unsigned long long int) arr_8 [i_1]))));
                            }
                        } 
                    } 
                    var_22 = min((((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [i_0] [i_1] [i_2]))), (((int) (~(((/* implicit */int) (signed char)4))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [10ULL] [i_2] [i_5]))))))))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) 2199023255551ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_6 - 1])) && ((!(((/* implicit */_Bool) var_16))))))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_5 - 1] [i_5] [i_6 - 1])) >= (((/* implicit */int) arr_10 [i_0] [i_1] [i_5 - 1] [(_Bool)1] [i_6]))))))))));
                                var_25 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_0 [i_0] [i_6 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [2] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((short) arr_8 [i_0]))) ? (((unsigned int) 6302949680832439857ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [0ULL] [(short)14])))))));
        /* LoopSeq 3 */
        for (short i_7 = 2; i_7 < 18; i_7 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                var_26 = ((/* implicit */unsigned long long int) max((var_26), ((-(((arr_7 [i_7] [i_7] [11U] [i_7 - 1]) & (arr_7 [i_0] [(unsigned short)17] [i_0] [i_7 + 1])))))));
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) min((arr_19 [i_0]), (max((((/* implicit */short) arr_16 [(unsigned short)10] [i_7 - 1] [i_8] [i_0] [i_7] [i_7] [i_7 - 2])), (arr_19 [i_0]))))))));
            }
            for (short i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                var_28 = ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (short)32579)))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_9 + 1] [i_9 - 1] [i_9] [(unsigned short)2])) : ((-(((/* implicit */int) arr_19 [i_7 - 2])))));
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_0 [4] [i_10]), ((short)32562))))) && ((!(((/* implicit */_Bool) (short)32579)))))))));
                    arr_31 [i_10] [i_9 - 1] [i_7 + 1] [i_0] [i_0] = ((/* implicit */short) arr_15 [i_0] [(_Bool)1] [(short)8] [(_Bool)1] [i_0] [(short)8]);
                    arr_32 [(_Bool)1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0] [i_7 - 2] [i_10])) >> (((((/* implicit */int) arr_9 [i_10] [i_9] [i_7] [(_Bool)1])) - (5282)))))) ? (((/* implicit */int) min((((/* implicit */short) var_4)), (((short) arr_21 [17ULL] [i_0]))))) : ((+(((/* implicit */int) arr_8 [i_7 + 1]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7 + 2] [3])) ? (((unsigned int) arr_14 [(_Bool)1] [(_Bool)1] [i_7 + 2] [i_7 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)16] [i_7] [i_7 + 2] [i_7])))));
                        arr_35 [i_0] [i_11] [i_9 - 1] [i_9 - 1] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (short)32557)))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_34 [i_11] [i_9 + 1] [i_9 - 1] [i_11] [i_7] [5] [(unsigned char)6]) >> (((((/* implicit */int) var_15)) - (17387)))))) && (((var_5) < (((/* implicit */unsigned long long int) arr_17 [i_0] [i_7] [i_11] [i_0] [i_11]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_7 - 2] [i_9] [i_10] [i_7 - 2] [i_12] = ((/* implicit */short) (+(arr_28 [i_7] [i_7] [i_7 + 2] [i_9 - 1] [i_9 + 1])));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_7 - 2] [(short)15] [(short)15])) || (((/* implicit */_Bool) arr_23 [i_7 - 2] [i_7] [i_0]))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_9))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [18U] [i_7 - 1] [(_Bool)1] [i_10] [i_13] [i_13])) ? (((((/* implicit */_Bool) arr_14 [i_13] [i_9] [i_0] [i_0])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_10])) : (((/* implicit */int) arr_19 [i_7])))) : ((-(var_6)))));
                        var_35 = ((/* implicit */int) max((var_35), ((~(((/* implicit */int) (unsigned short)64257))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_36 &= ((/* implicit */signed char) ((unsigned int) (~(2147483645))));
                    /* LoopSeq 4 */
                    for (short i_15 = 2; i_15 < 18; i_15 += 4) 
                    {
                        arr_45 [i_14] [i_14] [i_9] [i_7] [(unsigned short)4] [(unsigned short)4] [i_14] = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        arr_46 [i_14] [(signed char)7] [(signed char)16] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_7 + 1] [i_15 + 1])) << (((((/* implicit */int) arr_2 [i_7 + 2] [i_15 + 1])) - (19904)))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        arr_49 [i_0] [i_7] [i_7] [i_14] [18ULL] = (-(4294967295U));
                        arr_50 [i_0] [i_0] [i_9] [i_14] [(short)1] = ((/* implicit */short) (-(((/* implicit */int) arr_30 [i_0] [i_0] [i_0]))));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9 + 1] [i_7 - 1])) ? (((/* implicit */int) arr_27 [i_9 - 1] [i_7 - 1])) : (((/* implicit */int) var_12)))))));
                        var_38 = ((/* implicit */_Bool) arr_15 [i_14] [i_0] [i_7 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]);
                    }
                    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        arr_55 [i_9] [i_14] [i_14] [i_9] [i_14] [i_0] = ((/* implicit */long long int) (unsigned char)0);
                        arr_56 [i_0] [i_14] [i_0] [i_14] [i_17] [i_9] [i_14] = ((/* implicit */signed char) var_10);
                        var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_7 - 1] [i_9 - 1] [(short)0] [i_9]))));
                        var_40 = (-((+(arr_20 [i_7]))));
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (+((+(15385791U))))))));
                    }
                    for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        arr_60 [i_0] [i_14] [i_9 - 1] [i_14] [(signed char)16] = ((/* implicit */signed char) ((long long int) (_Bool)0));
                        arr_61 [i_14] = ((/* implicit */unsigned char) (+(arr_20 [i_9 - 1])));
                        var_42 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (short)32579)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32758))) : (4294967295U))));
                    }
                    var_43 = ((unsigned int) ((arr_4 [2ULL]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_14 [i_14] [9ULL] [i_7] [i_0]))));
                }
                for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 2) 
                {
                    arr_64 [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)108)) / (((/* implicit */int) (signed char)91))));
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) min((1143410657U), (((2676913463U) - (max((arr_28 [i_0] [15LL] [12] [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_7])))))))))));
                }
            }
            for (short i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
            {
                var_45 = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) 8858700953187676972LL)) ? (8858700953187676962LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)30)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_7 + 2] [i_7 - 1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) 878006903U)))))))))));
                var_46 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) > ((+(((/* implicit */int) arr_36 [i_7] [i_7 + 1] [i_7 - 1] [(signed char)16]))))));
                /* LoopSeq 3 */
                for (unsigned short i_21 = 1; i_21 < 18; i_21 += 4) 
                {
                    var_47 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_0] [(short)6])))))) ^ (((min((arr_43 [i_0] [i_20] [(_Bool)1]), (((/* implicit */long long int) arr_52 [i_21 + 2] [i_20])))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))))))));
                    var_48 = ((/* implicit */unsigned long long int) min((var_48), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_65 [i_0] [i_7] [i_20])) : ((+(((/* implicit */int) var_19))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (-1)))), (6351636512114559205ULL)))))));
                }
                for (unsigned char i_22 = 1; i_22 < 19; i_22 += 1) /* same iter space */
                {
                    var_49 = ((/* implicit */short) ((unsigned char) ((arr_39 [i_7] [i_7] [i_7 + 2] [i_7 + 1] [i_0] [i_22 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        var_50 = ((/* implicit */unsigned int) (short)-9684);
                        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) (+(((((/* implicit */int) arr_15 [i_20] [i_7 + 2] [0] [i_20] [i_22 - 1] [i_23])) / (((/* implicit */int) arr_15 [i_0] [i_7 - 2] [i_20] [i_22 - 1] [i_20] [0ULL])))))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_24 = 1; i_24 < 19; i_24 += 1) /* same iter space */
                {
                    var_52 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_24] [i_24 + 1] [i_20] [i_7 + 2])) > (((/* implicit */int) arr_29 [(short)14] [i_24 - 1] [i_7] [i_7 + 1]))));
                    var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */int) ((unsigned char) var_13))) : (((((/* implicit */int) var_12)) - (-1633985952)))));
                    var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) (unsigned char)0))));
                }
                var_55 = ((/* implicit */unsigned int) ((((arr_22 [i_7 + 2] [i_7 + 1] [i_20] [i_20]) ? (((((/* implicit */_Bool) (unsigned short)64257)) ? (((/* implicit */unsigned long long int) arr_51 [i_20] [i_20] [i_7 - 1] [10ULL] [10ULL] [i_0])) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
            for (short i_25 = 0; i_25 < 20; i_25 += 4) /* same iter space */
            {
                var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)-10267)) > (((/* implicit */int) (unsigned char)203))))))))));
                var_57 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)255))));
                var_58 -= ((/* implicit */unsigned char) ((unsigned int) ((arr_26 [i_0] [i_7 - 1] [i_25]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                var_59 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [(short)13])) || (((/* implicit */_Bool) var_11))))))));
            }
            var_60 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_40 [4] [i_7 + 2] [i_7 - 2] [i_7 + 1] [i_0] [(short)2] [4]))))));
            var_61 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [17ULL] [i_7 + 1])) * (min((((/* implicit */int) arr_11 [i_0] [i_7 + 1])), (1805309162)))));
            var_62 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_26 [i_7 - 1] [i_7 - 2] [i_0])) ? (arr_26 [i_7 - 1] [i_7 + 1] [i_0]) : (arr_26 [i_0] [i_0] [i_7 + 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            var_63 = (-((-(((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))))))));
            /* LoopSeq 1 */
            for (int i_27 = 0; i_27 < 20; i_27 += 4) 
            {
                var_64 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_26])) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_3))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_54 [i_0] [i_0] [(signed char)5] [i_26] [15U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)15] [i_26])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2387))) : (((((/* implicit */_Bool) ((unsigned short) arr_47 [i_0] [14] [i_26] [i_27] [i_27]))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_17))))) : (max((((/* implicit */long long int) (_Bool)1)), (0LL)))))));
                var_65 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((+(arr_47 [(short)9] [i_27] [i_0] [(short)2] [i_0]))) : (max((((/* implicit */int) (unsigned char)2)), (118925834)))));
            }
            arr_87 [(_Bool)1] [i_26] = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) 2147483645)), (var_16))), (((/* implicit */unsigned int) arr_0 [i_0] [7])))))));
        }
        for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
        {
            arr_90 [i_0] [i_28] = ((/* implicit */signed char) min((((unsigned int) arr_88 [i_28 + 1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_28] [i_28 + 1] [i_28] [i_28])) ? (((/* implicit */int) arr_42 [i_28] [i_28 + 1] [i_28] [i_28])) : (((/* implicit */int) arr_42 [i_28] [i_28 + 1] [i_0] [i_28])))))));
            var_66 = ((/* implicit */unsigned short) min(((_Bool)0), ((_Bool)1)));
        }
    }
    var_67 = ((/* implicit */unsigned char) ((unsigned int) var_6));
    /* LoopSeq 1 */
    for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 2) 
    {
        var_68 = ((/* implicit */unsigned long long int) max((var_68), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_92 [i_29])) != ((+(var_1))))))) * ((~((+(var_8)))))))));
        arr_93 [i_29] = ((((/* implicit */int) (short)4689)) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_91 [i_29]))) < (((unsigned int) var_15))))));
        arr_94 [i_29] = ((/* implicit */long long int) 2147483637);
        var_69 = ((/* implicit */int) min((var_69), (((/* implicit */int) (unsigned short)33294))));
    }
    /* LoopNest 3 */
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        for (unsigned char i_31 = 3; i_31 < 23; i_31 += 3) 
        {
            for (unsigned short i_32 = 2; i_32 < 21; i_32 += 2) 
            {
                {
                    var_70 = ((/* implicit */unsigned long long int) ((signed char) 9223372036854775806LL));
                    var_71 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */int) (short)0)) & (((/* implicit */int) (unsigned char)7)))) : (59122771))))));
                }
            } 
        } 
    } 
    var_72 = ((/* implicit */unsigned int) var_4);
}
