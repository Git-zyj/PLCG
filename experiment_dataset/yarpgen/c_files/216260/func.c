/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216260
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
    var_14 = ((/* implicit */_Bool) ((((((unsigned long long int) var_6)) & (((unsigned long long int) (_Bool)1)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)50786))) ? (min((1048575LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-16649)) : (((/* implicit */int) (unsigned short)21698))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0]))));
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (var_9) : (((/* implicit */long long int) (-(((/* implicit */int) (short)31734)))))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_1))))) ? (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((~(((/* implicit */int) ((short) var_11))))) : ((~(((/* implicit */int) var_1)))))))));
    var_18 = max(((unsigned short)65535), ((unsigned short)21698));
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_19 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [(short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9525))) : (arr_7 [i_1] [i_1]))), ((+(max((arr_7 [i_2] [i_1]), (((/* implicit */unsigned long long int) var_0))))))));
            arr_8 [i_1] = ((/* implicit */unsigned int) arr_3 [i_2] [i_1]);
            var_20 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_1 [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_5)), (arr_1 [i_2])))) ? (((/* implicit */int) (short)-27176)) : (((/* implicit */int) var_8)))))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_6 [(unsigned short)6]))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            var_22 = ((/* implicit */int) var_1);
            var_23 = ((/* implicit */long long int) ((arr_10 [i_3 + 1] [i_3] [i_1]) % (((unsigned int) arr_12 [i_3] [i_3]))));
        }
        var_24 ^= ((/* implicit */unsigned short) ((short) var_6));
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            for (unsigned short i_6 = 2; i_6 < 15; i_6 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 16365025084890392845ULL)) ? (((((/* implicit */_Bool) (unsigned short)58647)) ? (((/* implicit */int) (unsigned short)16352)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (arr_21 [i_6]) : (((/* implicit */int) var_13)))))), ((+(((/* implicit */int) ((short) arr_15 [i_4] [i_5] [i_5]))))))))));
                    arr_22 [i_4] [i_4] = ((/* implicit */int) arr_13 [i_6 - 2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                {
                    arr_28 [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned int) var_7)), (var_12))))) - (((unsigned long long int) arr_16 [i_4]))));
                    var_26 = (unsigned short)65535;
                    var_27 = ((/* implicit */unsigned long long int) ((((arr_19 [i_8] [i_8] [i_7] [i_4]) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_25 [i_4] [i_7] [i_8])) ? (((/* implicit */int) (unsigned short)56)) : (((/* implicit */int) arr_25 [i_4] [i_8] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (2147475456ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        arr_31 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((int) max((((/* implicit */unsigned long long int) (signed char)-1)), (arr_29 [i_9] [i_7] [i_4])))) : (((/* implicit */int) var_6))));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_28 -= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_4] [i_9] [i_8] [i_7] [i_10] [i_10] [i_4])) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_32 [i_4] [i_10] [i_8] [i_9] [i_7] [i_7] [i_7])))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_29 [i_4] [i_7] [i_8]))));
                        }
                        for (short i_11 = 3; i_11 < 14; i_11 += 4) 
                        {
                            arr_37 [i_4] [i_4] [i_4] [i_9] [i_11] = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-104)))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_32 [i_4] [i_7] [i_7] [i_9] [i_7] [i_11] [i_11])), (var_2))))))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */int) min(((short)31387), (((/* implicit */short) (signed char)0))))) & ((+(((/* implicit */int) (signed char)6)))))) : (((/* implicit */int) ((_Bool) arr_26 [i_4] [i_8] [i_9] [i_11 + 1]))))))));
                        }
                        for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            arr_41 [i_4] [i_7] [i_8] [i_8] [i_9] [i_12] [i_12] = ((/* implicit */int) max((((unsigned long long int) arr_15 [i_4] [i_7] [i_7])), (((/* implicit */unsigned long long int) var_8))));
                            var_31 ^= ((/* implicit */short) var_8);
                            arr_42 [i_4] [i_4] [i_8] [i_9] [i_12] = ((/* implicit */short) ((unsigned short) ((unsigned long long int) arr_25 [i_7] [i_7] [i_7])));
                            arr_43 [i_4] [i_7] [i_9] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) ((signed char) var_6))), (min((arr_23 [i_9]), (((/* implicit */unsigned int) var_11))))))));
                            var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((3509989742824561146LL) != (((/* implicit */long long int) var_10))))), (max((arr_18 [i_8] [i_9] [i_12]), (((/* implicit */unsigned long long int) (unsigned short)13857))))));
                        }
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */short) min((((((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) << (((((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) - (9370))))), (((((/* implicit */int) (short)-29429)) ^ (((/* implicit */int) arr_20 [i_4] [i_4] [i_4]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            var_34 -= ((/* implicit */unsigned int) ((short) arr_17 [i_4] [i_4] [i_13]));
            arr_46 [i_13] [i_13] [i_4] = ((/* implicit */unsigned long long int) (~(arr_45 [i_4] [i_13])));
            arr_47 [i_4] = ((/* implicit */signed char) arr_39 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
            var_35 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (var_10)));
            /* LoopSeq 3 */
            for (short i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                var_36 = ((/* implicit */_Bool) ((short) arr_27 [i_4] [i_4] [i_14]));
                var_37 = (+(3341891361605993032ULL));
                /* LoopSeq 4 */
                for (unsigned char i_15 = 2; i_15 < 15; i_15 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_15 + 1] [i_15 - 1])) ? (arr_15 [i_14] [i_15 + 1] [i_15 - 1]) : (((/* implicit */unsigned long long int) arr_45 [i_15 + 1] [i_15 + 1]))));
                    var_39 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_50 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9838)))))) ? (((arr_44 [i_13]) ? (var_9) : (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20615))))))));
                }
                for (unsigned char i_16 = 2; i_16 < 15; i_16 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((unsigned char) arr_49 [i_16 - 1] [i_16 - 2] [i_16 + 1])))));
                        arr_58 [i_14] [i_16] [i_14] = ((/* implicit */unsigned int) ((short) var_1));
                        var_41 -= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                        var_42 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16] [i_16] [i_16 + 1] [i_16 - 2]))));
                    }
                    for (unsigned short i_18 = 2; i_18 < 15; i_18 += 2) 
                    {
                        var_43 += ((/* implicit */unsigned long long int) arr_30 [i_18 - 1] [i_18] [i_18 - 1] [i_16 - 1] [i_16 - 2] [i_13]);
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_33 [i_18] [i_16 - 1] [i_13] [i_13] [i_18] [i_18])))))))));
                    }
                    arr_62 [i_4] [i_13] [i_16] [i_16 - 1] = ((/* implicit */int) ((var_3) % (arr_38 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 - 1])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 4; i_19 < 14; i_19 += 4) 
                    {
                        var_45 -= ((/* implicit */_Bool) var_9);
                        arr_66 [i_4] [i_13] [i_14] [i_4] [i_19 - 3] [i_13] [i_16] = ((/* implicit */int) var_2);
                    }
                    for (unsigned long long int i_20 = 1; i_20 < 15; i_20 += 2) 
                    {
                        arr_69 [i_4] [i_13] [i_14] [i_14] [i_16] [i_16] = (~(arr_36 [i_16 + 1] [i_13] [i_14] [i_16 - 2] [i_16 + 1] [i_20 + 1]));
                        arr_70 [i_13] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_4] [i_20] [i_16 - 2] [i_20 + 1] [i_16 - 2])) ? (arr_57 [i_14] [i_16] [i_16] [i_20 + 1] [i_16 - 2]) : (arr_57 [i_4] [i_13] [i_14] [i_20 + 1] [i_16 - 2])));
                    }
                }
                for (unsigned short i_21 = 1; i_21 < 15; i_21 += 2) 
                {
                    var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * ((-(18446744073709551615ULL))))))));
                    arr_73 [i_21] [i_21] [i_21] = (-(((/* implicit */int) (short)25536)));
                    arr_74 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_27 [i_4] [i_4] [i_21])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_30 [i_21 - 1] [i_21 - 1] [i_21] [i_21 - 1] [i_21 + 1] [i_21])) : (((/* implicit */int) (unsigned short)0))));
                }
                for (short i_22 = 0; i_22 < 16; i_22 += 1) 
                {
                    var_47 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_13)))));
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_77 [i_22] [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (1ULL))))))));
                    /* LoopSeq 4 */
                    for (signed char i_23 = 0; i_23 < 16; i_23 += 3) 
                    {
                        arr_82 [i_4] [i_4] [i_14] [i_22] [i_22] = ((/* implicit */unsigned long long int) var_11);
                        var_49 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)51678))))) ? (563987593) : (((/* implicit */int) (unsigned short)42767))));
                        var_50 = ((/* implicit */unsigned long long int) ((arr_75 [i_4] [i_4] [i_4] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)0))))));
                    }
                    for (short i_24 = 0; i_24 < 16; i_24 += 3) 
                    {
                        var_51 += (+(arr_53 [i_4] [i_14]));
                        arr_85 [i_14] [i_13] [i_4] [i_13] [i_24] = ((/* implicit */unsigned long long int) arr_81 [i_4]);
                        var_52 += var_2;
                        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_4] [i_13] [i_4] [i_14] [i_22] [i_4] [i_24])) ? (563987593) : (((/* implicit */int) var_8))));
                    }
                    for (short i_25 = 0; i_25 < 16; i_25 += 1) 
                    {
                        arr_89 [i_4] [i_13] [i_14] [i_22] [i_25] [i_25] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_4] [i_25] [i_4]))));
                        arr_90 [i_4] [i_13] [i_14] [i_22] [i_13] = ((/* implicit */unsigned long long int) (short)-16323);
                        var_54 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_4])) ? (((((/* implicit */_Bool) 3347332696U)) ? (var_3) : (((/* implicit */unsigned long long int) 86979060)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_13] [i_13]))))))));
                    }
                    for (unsigned int i_26 = 0; i_26 < 16; i_26 += 2) 
                    {
                        arr_93 [i_4] [i_4] [i_14] [i_22] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) : (arr_84 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (86979060) : (((((/* implicit */_Bool) -65155396)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned short)0))))));
                        var_55 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13858)) ? (((/* implicit */int) (unsigned short)0)) : (-1611455913)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_13] [i_13] [i_13] [i_14] [i_4]))) : (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                        var_56 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28189)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51678))) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_22]))) : ((-(var_10)))));
                        arr_94 [i_4] [i_4] = (~(((/* implicit */int) var_5)));
                        arr_95 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (short)27698);
                    }
                }
            }
            for (unsigned int i_27 = 0; i_27 < 16; i_27 += 4) 
            {
                arr_98 [i_4] [i_27] = arr_35 [i_4] [i_13] [i_27] [i_4] [i_27];
                arr_99 [i_4] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_1)))) >= (((/* implicit */int) (short)-5990))));
                var_57 = ((/* implicit */unsigned long long int) arr_96 [i_4] [i_27] [i_27]);
            }
            for (short i_28 = 1; i_28 < 15; i_28 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_29 = 0; i_29 < 16; i_29 += 4) 
                {
                    for (unsigned short i_30 = 0; i_30 < 16; i_30 += 4) 
                    {
                        {
                            var_58 -= ((/* implicit */unsigned short) arr_29 [i_4] [i_4] [i_4]);
                            var_59 ^= ((/* implicit */unsigned short) 8388608U);
                            var_60 = ((/* implicit */unsigned long long int) var_10);
                        }
                    } 
                } 
                arr_108 [i_4] [i_28] [i_28 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [i_4] [i_13] [i_28])) : (((/* implicit */int) var_1)))))));
            }
        }
        for (short i_31 = 0; i_31 < 16; i_31 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_32 = 0; i_32 < 16; i_32 += 3) 
            {
                for (int i_33 = 3; i_33 < 14; i_33 += 2) 
                {
                    for (short i_34 = 0; i_34 < 16; i_34 += 4) 
                    {
                        {
                            var_61 = ((/* implicit */unsigned char) var_7);
                            var_62 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_79 [i_34] [i_33 + 2] [i_32] [i_31] [i_4])) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_4] [i_33 - 1] [i_32])) && (((/* implicit */_Bool) arr_64 [i_31] [i_31] [i_31]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_4] [i_31] [i_32] [i_33] [i_34] [i_34])) || (((/* implicit */_Bool) arr_55 [i_4])))))) % ((~(var_9))))))));
                        }
                    } 
                } 
            } 
            var_63 = ((/* implicit */unsigned long long int) max((max((var_8), (((/* implicit */unsigned short) arr_119 [i_4] [i_31] [i_31] [i_4] [i_4])))), (((/* implicit */unsigned short) max((arr_119 [i_31] [i_31] [i_31] [i_4] [i_31]), (arr_119 [i_4] [i_4] [i_4] [i_31] [i_31]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_35 = 0; i_35 < 16; i_35 += 4) 
        {
            var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) var_10))));
            arr_123 [i_4] [i_35] [i_35] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) var_8))) + (2147483647))) >> (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_55 [i_4]))))));
        }
    }
}
