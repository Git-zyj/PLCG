/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34737
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_9))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 4; i_3 < 20; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)29)))))));
                        arr_9 [i_0] [i_1] [(unsigned char)6] [i_2] = ((/* implicit */short) (+(arr_4 [i_1] [i_1 - 1] [i_3 - 2])));
                        var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_2]))))) : ((+(9534475920629414586ULL)))));
                        var_14 = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-31))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_15 += ((/* implicit */unsigned short) arr_1 [i_0]);
                        var_16 += ((/* implicit */unsigned char) (short)32767);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) ((8912268153080137029ULL) << (((((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 3] [i_2] [18ULL] [i_5])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10625))))) - (1602229976223255432LL)))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((3364405300U) >> (((8912268153080137032ULL) - (8912268153080137030ULL)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54899)))));
                            var_19 &= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)203))));
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned long long int) (signed char)23)))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((arr_6 [i_4] [i_4] [i_6 - 1] [i_6 - 1]) <= (3364405300U))))));
                            arr_19 [2] [1LL] [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) 7390777019192332167LL);
                            var_22 = ((/* implicit */unsigned short) (~(1496067088746390128LL)));
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_6 - 1] [i_1]))));
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_1]) ^ (((/* implicit */long long int) -2060386680))))) || (((/* implicit */_Bool) (unsigned char)14)))))));
                            var_25 = ((/* implicit */short) ((((long long int) (short)32767)) << (((((/* implicit */int) var_10)) - (115)))));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_22 [(_Bool)0] [i_0] [i_1] [i_2] [i_2] [(unsigned char)0] [(_Bool)0])))) ? (arr_4 [i_1 - 1] [i_1 - 2] [i_2]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (9534475920629414562ULL))))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) >= (arr_3 [0] [0]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [(short)8] [0U] [i_8] [8ULL]))) : (8997149644941334958LL))))))));
                        var_28 = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [6LL])) ? (((((/* implicit */_Bool) -7448897905271952473LL)) ? (1126147863U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))))) : (((/* implicit */unsigned int) -2060386680)));
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */long long int) 9534475920629414554ULL);
                            var_30 = ((/* implicit */int) (((-(var_4))) << (((arr_23 [i_1 - 1] [i_1 + 2] [i_9]) - (2758621510U)))));
                            arr_29 [i_0] [i_0] [14U] [i_8] [i_9] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8912268153080137029ULL))))) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [20U] [i_9] [i_2]))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 3] [i_1 + 2] [(short)13])))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((int) arr_12 [i_1 + 1] [i_0] [(short)12])))));
                            arr_32 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) (signed char)53)));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (-((-(9534475920629414586ULL))))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_34 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                            var_35 = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)32763))))));
                        }
                    }
                    for (long long int i_12 = 1; i_12 < 19; i_12 += 3) 
                    {
                        var_36 = ((/* implicit */short) (unsigned short)22692);
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 3; i_13 < 17; i_13 += 1) 
                        {
                            var_37 = ((/* implicit */short) ((arr_37 [i_0] [i_13 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54911))))))));
                            var_38 = (~(arr_2 [i_1]));
                        }
                    }
                    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (~(arr_2 [i_1 + 1]))))));
                }
            } 
        } 
        var_40 = ((/* implicit */_Bool) ((arr_38 [i_0] [i_0] [i_0] [i_0]) ^ ((-(arr_38 [i_0] [(unsigned char)2] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 3; i_16 < 19; i_16 += 4) 
                    {
                        for (signed char i_17 = 2; i_17 < 20; i_17 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_17] [i_0] [i_16 + 2] [i_17] [i_17])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_40 [i_17] [i_16 + 2] [i_16 - 3] [i_16] [i_17]))));
                                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (-(1191845971004374391ULL))))));
                                var_43 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_28 [i_0] [i_14] [i_15] [i_16 - 1] [i_17 + 1])) : (((/* implicit */int) arr_46 [i_0] [i_14] [(_Bool)1] [14ULL]))));
                                var_44 ^= ((/* implicit */short) ((((/* implicit */int) arr_30 [i_17] [i_17 - 2] [i_17] [i_16])) << (((9534475920629414586ULL) - (9534475920629414558ULL)))));
                            }
                        } 
                    } 
                    var_45 ^= ((/* implicit */_Bool) -375299727008994272LL);
                    var_46 |= ((/* implicit */signed char) -18LL);
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 3; i_18 < 20; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 3) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned char) arr_49 [i_0] [(unsigned short)17] [i_15] [(unsigned short)4] [i_19]);
                                var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) arr_52 [(_Bool)1] [i_14] [i_15] [i_18]))));
                                var_49 = (+(((/* implicit */int) arr_30 [i_0] [i_14] [i_14] [i_18 - 3])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_20 = 2; i_20 < 18; i_20 += 1) 
                    {
                        for (short i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            {
                                var_50 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_17 [i_0] [i_14] [i_15] [i_21] [i_21])))) ? (arr_38 [i_20 + 2] [14LL] [i_20 - 2] [i_20]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)138)))))));
                                var_51 |= ((/* implicit */signed char) arr_52 [i_21] [i_15] [i_21] [i_21]);
                                var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [(signed char)8] [i_21])) ? (arr_35 [i_14] [20] [i_15] [i_21] [i_20 + 3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-26839)) : (((/* implicit */int) arr_47 [i_20 - 1] [i_21])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 3) 
    {
        var_53 = ((/* implicit */_Bool) var_4);
        var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) arr_30 [i_22] [(unsigned char)5] [(unsigned char)5] [i_22]))));
        arr_66 [i_22] = (unsigned char)246;
        var_55 = ((/* implicit */unsigned long long int) min((var_55), ((+(((unsigned long long int) (short)-7393))))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 16; i_23 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_24 = 0; i_24 < 16; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_25 = 0; i_25 < 16; i_25 += 2) 
            {
                for (unsigned int i_26 = 1; i_26 < 13; i_26 += 3) 
                {
                    {
                        arr_76 [i_23] [14] [i_25] [i_25] [i_23] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-26839))));
                        var_56 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)24)) / (((/* implicit */int) (short)3505))))) < (arr_11 [i_23] [i_23] [i_23] [i_23] [i_23])));
                        var_57 = ((/* implicit */unsigned char) (short)3512);
                    }
                } 
            } 
            var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) -1373892481))));
            arr_77 [i_24] [i_23] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) ((-8927762693172267805LL) != (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_23] [i_23])))))) / (arr_71 [i_24] [i_23])));
        }
        for (unsigned int i_27 = 1; i_27 < 15; i_27 += 1) 
        {
            var_59 = ((/* implicit */short) ((((/* implicit */long long int) arr_27 [(unsigned char)4] [(unsigned char)4] [i_23] [i_27] [12] [i_27])) >= (((((/* implicit */_Bool) arr_21 [(short)14] [i_27 - 1] [i_23] [i_23] [(short)14] [i_27] [18])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26852))) : (-375299727008994272LL)))));
            var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) (unsigned short)37501))));
            /* LoopNest 2 */
            for (short i_28 = 1; i_28 < 15; i_28 += 2) 
            {
                for (short i_29 = 0; i_29 < 16; i_29 += 1) 
                {
                    {
                        var_61 = (!(((((/* implicit */_Bool) arr_64 [i_23] [i_23])) || (((/* implicit */_Bool) 930561995U)))));
                        var_62 = ((/* implicit */int) ((((/* implicit */int) arr_53 [i_23] [i_27] [i_28] [(signed char)4])) > ((-(((/* implicit */int) var_2))))));
                        var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) 3035580014245309154LL))));
                        var_64 = ((/* implicit */signed char) arr_49 [i_23] [i_27] [i_28] [(_Bool)1] [i_29]);
                    }
                } 
            } 
        }
        for (signed char i_30 = 2; i_30 < 15; i_30 += 2) 
        {
            var_65 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) 2326507011535179372ULL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
            var_66 = ((/* implicit */long long int) (-(arr_3 [i_23] [i_30 + 1])));
        }
        arr_88 [i_23] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_81 [i_23] [i_23] [i_23])) + (((/* implicit */int) arr_81 [i_23] [i_23] [i_23]))));
        var_67 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_31 = 0; i_31 < 23; i_31 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_32 = 1; i_32 < 19; i_32 += 3) 
        {
            var_68 = ((/* implicit */_Bool) min((var_68), (((((/* implicit */int) ((-2060386680) >= (((/* implicit */int) var_10))))) <= (((/* implicit */int) (signed char)-19))))));
            var_69 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2199014866944LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60313))) : (arr_89 [i_31])))) : ((~(var_3)))));
            /* LoopSeq 1 */
            for (unsigned char i_33 = 3; i_33 < 21; i_33 += 4) 
            {
                var_70 = ((/* implicit */int) min((var_70), ((~(((/* implicit */int) (short)-26833))))));
                arr_96 [4] [i_32] [i_31] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-32756))));
                arr_97 [0ULL] [i_31] [i_31] [i_33] = ((/* implicit */unsigned char) (short)-12477);
            }
            var_71 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)26834))) + (arr_89 [(signed char)6]))))));
            var_72 = ((/* implicit */int) (unsigned short)21398);
        }
        var_73 = ((/* implicit */unsigned short) min((var_73), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)10)))), ((~(((/* implicit */int) (unsigned short)54910))))))) ? ((+((-(3364405297U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54911))))))));
        arr_98 [i_31] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((arr_93 [5ULL]), (arr_93 [i_31]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)10)), (var_0)))) || (((/* implicit */_Bool) ((unsigned int) 13597214013254611261ULL)))))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (unsigned short i_34 = 0; i_34 < 23; i_34 += 3) 
        {
            for (long long int i_35 = 2; i_35 < 20; i_35 += 2) 
            {
                for (unsigned long long int i_36 = 1; i_36 < 22; i_36 += 3) 
                {
                    {
                        var_74 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 12))))), (min((((/* implicit */int) min((var_0), (((/* implicit */short) (signed char)-97))))), ((~(((/* implicit */int) (short)-2854))))))));
                        var_75 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)26839)) ? (((/* implicit */int) (signed char)127)) : (-1125951227)));
                        var_76 = ((/* implicit */short) min((var_76), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)241)), (2060386680)))) && (((/* implicit */_Bool) (~(var_4))))))))))));
                        var_77 = ((/* implicit */unsigned int) min((var_77), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_94 [i_34] [i_35 + 2] [i_36])) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_106 [i_35] [i_35] [i_35 - 2] [i_35 - 2] [i_35] [i_35 - 2])), (arr_93 [i_31])))) ? (((/* implicit */int) ((arr_95 [i_31] [i_34] [i_36 + 1]) < (8376089090527216410LL)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_5)))))));
                        var_78 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) 3758096384U)), (max((((/* implicit */long long int) (short)27115)), (-5350478090688859540LL)))))));
                    }
                } 
            } 
        } 
    }
    var_79 = ((/* implicit */int) min((var_79), ((~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))))));
}
