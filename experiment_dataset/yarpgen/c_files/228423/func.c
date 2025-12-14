/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228423
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) 1073741824U)))))) ^ (min((((/* implicit */unsigned long long int) (short)15779)), (var_12)))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (max((((/* implicit */long long int) (short)25515)), (1156769934856612601LL))) : (((/* implicit */long long int) -378332230)))))));
        arr_5 [i_0] [i_0] = (!(((/* implicit */_Bool) var_13)));
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) 8ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) (short)22642))))) & (((((/* implicit */_Bool) var_9)) ? (var_16) : (var_15)))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            var_19 ^= ((/* implicit */short) (((~(min((var_0), (((/* implicit */unsigned long long int) var_9)))))) >> (((max((var_2), (((/* implicit */unsigned long long int) var_15)))) - (9355614397238923476ULL)))));
                            var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (short)-15779))))) | (((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) var_17)))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((1156769934856612603LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_17)))))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))), (max((var_0), (var_12))))) : (((/* implicit */unsigned long long int) max((((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_6)) + (32628))) - (9))))), ((-(((/* implicit */int) (short)(-32767 - 1))))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_22 ^= ((/* implicit */long long int) ((short) ((unsigned short) var_8)));
                            var_23 = ((/* implicit */unsigned char) ((short) ((-1465133044) <= (((/* implicit */int) (signed char)-70)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) max(((+(max((((/* implicit */long long int) (unsigned short)29301)), (1156769934856612609LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9139))) != (var_10))))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((short)14246), ((short)19898)))) <= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) var_6))))));
                            var_24 = (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_17)))))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)49434))))) : ((-(1156769934856612602LL))))))))));
                            var_26 = ((/* implicit */short) var_10);
                        }
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_9))));
                        arr_23 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) var_12));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                for (long long int i_10 = 3; i_10 < 24; i_10 += 1) 
                {
                    {
                        arr_34 [(signed char)10] [i_8] [i_8] &= ((/* implicit */long long int) (((+(4119998165U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_28 ^= ((/* implicit */short) ((unsigned short) var_9));
                        /* LoopSeq 4 */
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) var_11);
                            var_30 = ((/* implicit */short) ((var_16) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_31 = ((/* implicit */unsigned int) ((var_15) % (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        }
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            arr_40 [i_7] [i_7] [i_9] [i_7] [14] [14] = ((/* implicit */unsigned int) ((short) ((_Bool) var_0)));
                            arr_41 [4] [i_7] [i_10] = ((/* implicit */short) ((4323455642275676160ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (var_4)))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */int) min((var_32), (((((((/* implicit */int) var_13)) << (((1961820418097493517LL) - (1961820418097493516LL))))) | (var_4)))));
                            var_33 = ((/* implicit */signed char) (-(var_9)));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)15772)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (short)19893)) ? (var_9) : (var_9)))));
                            arr_45 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)17777)) & (((/* implicit */int) (signed char)-23))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_17))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */unsigned long long int) var_17)))))));
                        }
                        for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((var_4) > (((/* implicit */int) (signed char)-42)))))));
                            arr_48 [20U] [i_7] [i_7] [5ULL] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_1))))) + (((((/* implicit */unsigned int) var_9)) * (var_17)))));
                            var_37 = (+(((long long int) var_15)));
                            var_38 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)56935)) ? (var_9) : (((/* implicit */int) var_13))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_15 = 1; i_15 < 24; i_15 += 1) 
        {
            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
            var_40 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10434))) != (var_0)));
        }
        arr_52 [i_7] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
        arr_53 [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_17)) != (var_15))))) - ((+(var_12)))));
        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6847296750906498008ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
    {
        var_42 = ((/* implicit */short) min((var_42), (var_5)));
        arr_57 [i_16] [i_16] |= ((((var_2) * (var_8))) - (var_12));
        var_43 |= ((/* implicit */int) var_15);
        var_44 += ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((unsigned int) var_10)) : (((var_17) >> (((var_16) + (5802584295320085065LL))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned char) var_1);
        arr_62 [i_17] = ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) || (((((/* implicit */int) var_7)) > (((/* implicit */int) var_7))))))), (var_6)));
        var_46 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_10)) : (var_0))))) ^ (((/* implicit */unsigned long long int) max((939524096U), (((/* implicit */unsigned int) var_6)))))));
        arr_63 [i_17] [i_17] = ((/* implicit */unsigned char) var_6);
    }
    var_47 = ((/* implicit */unsigned char) ((((((unsigned long long int) -1156769934856612595LL)) << (((min((((/* implicit */unsigned int) (unsigned short)59175)), (var_17))) - (59137U))))) << (((var_10) - (2556055748U)))));
    /* LoopSeq 2 */
    for (int i_18 = 1; i_18 < 9; i_18 += 4) 
    {
        var_48 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_10)), (var_8))), (((/* implicit */unsigned long long int) ((var_16) - (((/* implicit */long long int) 4119998165U)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) var_3)))))));
        /* LoopSeq 2 */
        for (long long int i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
        {
            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))), (max((max((((/* implicit */unsigned long long int) var_14)), (var_2))), (((/* implicit */unsigned long long int) var_16)))))))));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                for (signed char i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    for (unsigned short i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) ((signed char) ((max((((/* implicit */unsigned long long int) var_3)), (var_0))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_10)))))));
                            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? ((~(var_0))) : (max((8951006491271508673ULL), (((/* implicit */unsigned long long int) -1865409058091282121LL)))))), (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned int) var_3))))))))));
                            var_52 = ((/* implicit */long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)6360)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_23 = 0; i_23 < 12; i_23 += 1) /* same iter space */
        {
            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56931))) & (var_8))) : (var_8)));
            var_54 = ((/* implicit */unsigned char) -7247279582771613837LL);
        }
    }
    for (unsigned short i_24 = 0; i_24 < 12; i_24 += 4) 
    {
        arr_86 [i_24] |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (~(var_15))))) ? (((/* implicit */unsigned long long int) min(((-(var_15))), (((/* implicit */long long int) max((var_7), (((/* implicit */short) var_14)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */long long int) var_3))))) : (min((((/* implicit */unsigned long long int) -1023691229923905491LL)), (var_8)))))));
        arr_87 [i_24] = min(((~(max((((/* implicit */unsigned int) var_9)), (var_10))))), (((/* implicit */unsigned int) var_6)));
        arr_88 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((var_15), (((/* implicit */long long int) var_14))))) > (((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
    var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))) * (((var_2) ^ (var_12))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopNest 3 */
    for (unsigned short i_25 = 0; i_25 < 22; i_25 += 3) 
    {
        for (unsigned short i_26 = 1; i_26 < 20; i_26 += 1) 
        {
            for (short i_27 = 0; i_27 < 22; i_27 += 1) 
            {
                {
                    arr_97 [i_25] [i_25] = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : ((-(((/* implicit */int) var_6)))))) < (max((((/* implicit */int) ((signed char) -3563837749421385361LL))), (((((var_4) + (2147483647))) >> (((8944513400707135130ULL) - (8944513400707135125ULL)))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_28 = 0; i_28 < 22; i_28 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_29 = 0; i_29 < 22; i_29 += 4) 
                        {
                            var_56 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)19893)), (max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_13))))))));
                            arr_102 [i_25] [i_25] [1LL] = ((/* implicit */unsigned long long int) (~(((((var_17) < (((/* implicit */unsigned int) var_4)))) ? (((/* implicit */long long int) max((var_17), (((/* implicit */unsigned int) 1139114447))))) : (((((/* implicit */_Bool) var_9)) ? (3584726308548444747LL) : (-3213570237115824910LL)))))));
                        }
                        for (long long int i_30 = 0; i_30 < 22; i_30 += 3) 
                        {
                            var_57 = ((/* implicit */short) var_2);
                            var_58 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((min((var_16), (var_16))), (((/* implicit */long long int) (signed char)127))))), (max((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)17489)))))))));
                        }
                        arr_105 [(signed char)6] &= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (-(var_15))))) && (((/* implicit */_Bool) ((((unsigned int) var_17)) << (((min((((/* implicit */long long int) (unsigned short)48048)), (var_16))) + (5802584295320085068LL))))))));
                        var_59 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) != (var_2))))));
                        arr_106 [(unsigned char)10] [i_26] [i_27] [(unsigned char)12] &= ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) ((unsigned char) var_11)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)38784)), (var_17)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_9)))) : (((unsigned int) 3500548345524409654LL))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_31 = 1; i_31 < 21; i_31 += 1) 
                        {
                            arr_109 [i_25] [i_25] [i_25] [(signed char)6] [(signed char)8] |= ((/* implicit */_Bool) ((((var_0) < (8561232299271389713ULL))) ? ((+(var_16))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */int) var_13))))))));
                            var_60 += ((/* implicit */unsigned int) var_16);
                        }
                        for (unsigned short i_32 = 4; i_32 < 21; i_32 += 3) 
                        {
                            arr_113 [i_25] [(unsigned char)12] [(unsigned char)12] [i_25] [i_25] [i_25] [(unsigned char)12] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((var_2) >= (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                            arr_114 [i_25] [i_25] [(unsigned char)10] [i_25] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48048))) >= (var_16))))))) : (max((((/* implicit */unsigned long long int) (signed char)-70)), (var_8)))));
                        }
                        for (short i_33 = 1; i_33 < 19; i_33 += 3) 
                        {
                            arr_117 [i_25] = ((/* implicit */unsigned char) (unsigned short)48045);
                            var_61 *= ((/* implicit */unsigned int) (+(max((var_4), (((/* implicit */int) var_13))))));
                            arr_118 [i_25] [(unsigned char)1] [i_25] = ((/* implicit */_Bool) max((((var_0) ^ (var_8))), (((/* implicit */unsigned long long int) (short)-12825))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_34 = 0; i_34 < 22; i_34 += 3) 
                    {
                        arr_121 [i_34] [i_25] [i_25] [i_25] = ((long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_12))));
                        arr_122 [i_25] [i_25] = ((/* implicit */int) ((short) ((((/* implicit */int) (short)23435)) + (var_4))));
                        /* LoopSeq 1 */
                        for (unsigned int i_35 = 0; i_35 < 22; i_35 += 1) 
                        {
                            var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_5)))))) : (var_15)));
                            arr_125 [(short)20] [(_Bool)1] [8] [(_Bool)1] [i_25] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(var_9)))) * (((var_12) / (var_8)))));
                            var_63 += (+(((/* implicit */int) ((_Bool) var_12))));
                        }
                    }
                    for (unsigned int i_36 = 0; i_36 < 22; i_36 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65534))) && (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_0))))));
                        arr_128 [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) var_3))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (var_17))))))));
                        var_65 = ((/* implicit */_Bool) max((var_65), (((/* implicit */_Bool) (-((~(((/* implicit */int) var_3)))))))));
                    }
                    for (unsigned int i_37 = 0; i_37 < 22; i_37 += 1) 
                    {
                        var_66 = ((/* implicit */_Bool) max((var_66), (((((((var_17) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_17))))) == (((((/* implicit */_Bool) ((signed char) var_13))) ? (max((var_17), (((/* implicit */unsigned int) (short)17489)))) : (max((((/* implicit */unsigned int) (unsigned char)117)), (var_10)))))))));
                        arr_132 [i_25] [i_26 + 1] [6U] [i_25] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) (signed char)-18))), ((-(var_2))))))));
                    }
                }
            } 
        } 
    } 
}
