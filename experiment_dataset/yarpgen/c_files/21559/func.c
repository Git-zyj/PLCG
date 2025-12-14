/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21559
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((var_9), (((/* implicit */unsigned long long int) 333043176U)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0 + 1] &= ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))) % (arr_0 [i_0 - 1])))));
        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (var_3) : (((/* implicit */int) (unsigned char)85))))))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-10577))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (short i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned char) arr_12 [i_3] [i_2 - 1] [i_1 - 2]))), (min((((3047119843U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3])) - (((/* implicit */int) var_14)))))))));
                            var_21 = ((((/* implicit */_Bool) ((unsigned char) arr_7 [8LL] [8LL] [i_4 - 1] [i_2 + 1]))) ? (arr_7 [i_0 - 1] [i_1] [i_4 - 1] [i_2 - 2]) : (max((arr_7 [i_2] [9U] [i_4 - 1] [i_2 - 1]), (arr_7 [i_0] [i_1] [i_4 + 1] [i_2 - 1]))));
                            var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned char)171)))))), (min(((-(((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_4 + 1] [i_4])))), (((/* implicit */int) var_11))))));
                            arr_14 [i_0] [i_0 + 2] [i_0 + 2] [4ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-10577)))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 + 1])))))));
                            var_23 = ((/* implicit */int) min((max((((/* implicit */long long int) arr_0 [i_4 - 2])), (arr_12 [i_4 - 1] [i_0 - 2] [i_1 - 1]))), (((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_0 + 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) : (3322912510789839863LL)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_7))));
        }
        /* LoopSeq 4 */
        for (unsigned char i_5 = 3; i_5 < 8; i_5 += 2) 
        {
            arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (max((var_3), (((/* implicit */int) (unsigned char)173))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_5 + 1]))));
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (var_11)));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_2))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24576)) ? (var_15) : (((/* implicit */long long int) 1070545076))))) ? (min((3322912510789839871LL), (((/* implicit */long long int) (short)32767)))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) ((short) (-(65534U))))) : (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) arr_11 [i_0 - 1] [i_5 - 1] [i_5 - 1] [i_0 - 2] [(unsigned char)3] [i_0 + 1]))))));
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((1780038044) != (((/* implicit */int) var_10)))))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_5 - 1])), (((((/* implicit */_Bool) 17231733437739176194ULL)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned char)170))))))))))));
                    var_30 += ((/* implicit */unsigned long long int) (-(max((-5361016047055685368LL), (((/* implicit */long long int) ((unsigned short) 4294967295U)))))));
                }
                /* vectorizable */
                for (signed char i_8 = 3; i_8 < 8; i_8 += 2) 
                {
                    var_31 ^= (!(((/* implicit */_Bool) arr_3 [i_5 + 1] [i_0 + 1])));
                    var_32 = ((/* implicit */unsigned short) (~(arr_12 [(unsigned short)9] [(unsigned short)9] [i_0 + 2])));
                }
                for (int i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 2; i_10 < 8; i_10 += 2) 
                    {
                        var_33 = ((/* implicit */short) (((!(((/* implicit */_Bool) 1070545076)))) ? (((long long int) min((((/* implicit */int) var_8)), (arr_7 [i_0] [i_9] [i_0 + 2] [i_9 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)140))))))));
                        arr_32 [(short)4] [(_Bool)1] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0])), (((((/* implicit */_Bool) ((unsigned int) 1072696567))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)85)) || (((/* implicit */_Bool) var_5)))))))));
                        var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_5 - 1])), (var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10577))))) : (((/* implicit */int) ((signed char) arr_16 [i_10 + 1])))));
                        var_35 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)116)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) 1070545076)) & (3322912510789839875LL))))))) : (((/* implicit */int) arr_6 [i_10 + 1]))));
                        arr_33 [(unsigned short)7] [i_10] [i_9] [i_9] [i_6] [i_5 - 1] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [2U]))) / (max((max((16368985029307926944ULL), (((/* implicit */unsigned long long int) (unsigned char)97)))), (((/* implicit */unsigned long long int) -1070545080))))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_11 = 4; i_11 < 9; i_11 += 2) 
                    {
                        arr_36 [i_0 - 1] [i_5 - 1] [i_6] [(unsigned char)8] [i_5 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_6]), (((/* implicit */unsigned int) ((var_3) < (((/* implicit */int) var_16)))))))) ? (-173795094) : ((~((~(((/* implicit */int) var_5))))))));
                        arr_37 [i_9] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(var_13)))), (max((((/* implicit */short) (_Bool)0)), ((short)-942)))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_40 [i_0] [i_5] [i_6] [i_5] [i_12] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1070545091)) ? (((/* implicit */long long int) 14U)) : (var_12)))) ? (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) 2147483641)))) : (((/* implicit */long long int) (~(var_2))))))));
                        var_36 += ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_9 + 1] [i_5 + 2]))))) < (((((-1070545106) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0 - 2])) - (3025))))));
                        arr_41 [i_0] [i_5] = ((/* implicit */unsigned short) (-(((unsigned long long int) var_7))));
                        var_37 = ((/* implicit */short) min((var_37), (arr_11 [i_12] [i_12] [(signed char)8] [i_6] [i_0 - 1] [i_0 - 1])));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) min((((((/* implicit */int) var_16)) + (((/* implicit */int) arr_16 [i_5])))), (((/* implicit */int) arr_23 [i_12] [i_9 - 1] [i_5] [i_5])))))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) ((1123032569) & (-1070545080)));
                        arr_44 [i_13 - 2] [i_9] [i_6] [i_5] [i_0] = ((_Bool) 6326542646523548039LL);
                    }
                }
            }
            for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                arr_48 [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1070545085)))))));
                var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((signed char) (_Bool)1)))));
                arr_49 [i_0 - 2] [i_5] [i_5] = ((/* implicit */long long int) var_8);
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned short)1023))));
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_42 = ((/* implicit */unsigned char) ((((long long int) (short)1294)) / (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_55 [i_0] [i_5] [i_5] [i_15] [i_16] [i_16])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                    var_43 = min((min((4194304U), (((/* implicit */unsigned int) arr_42 [i_0] [i_0 + 2] [i_5 - 2] [(_Bool)0] [i_16])))), (((((/* implicit */_Bool) arr_54 [4LL] [i_5 + 2] [4LL] [i_0] [i_0 + 1])) ? (((unsigned int) 1632640268U)) : (arr_20 [i_0] [i_5 - 2] [(short)6] [i_5]))));
                    var_44 = ((/* implicit */unsigned int) arr_56 [i_0] [7U] [i_15] [4U] [i_16] [(unsigned char)5]);
                    arr_57 [i_16] [i_16] [i_5 + 1] [i_16] [i_5] [i_16] = ((/* implicit */unsigned short) ((_Bool) ((arr_28 [(_Bool)1] [(_Bool)1] [i_0] [i_0 + 2] [i_5 - 1]) / (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))));
                    var_45 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_46 [i_5 + 2] [i_5 + 2] [i_5 - 3])) ? (var_3) : (((/* implicit */int) var_16)))) * (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6))))) ? (((/* implicit */int) min(((unsigned char)255), (var_4)))) : (((/* implicit */int) arr_16 [i_15]))))));
                }
                for (short i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 - 1])) ^ (((/* implicit */int) var_16)))))));
                    arr_60 [i_0 + 1] [i_0 - 2] [i_0 - 2] [(unsigned char)0] = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_26 [i_0 + 1] [i_5 + 2] [i_5] [i_5 - 1] [i_17]), (((/* implicit */short) var_16))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_1 [i_5 - 2])) : (((/* implicit */int) var_17))))));
                    arr_61 [i_0] [i_0] = ((/* implicit */_Bool) (-(((8480801976289939686LL) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)203))))))));
                    var_47 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_16 [i_0 + 1])) - (((/* implicit */int) arr_58 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1] [i_5 + 1])))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_58 [(unsigned char)6] [i_0 - 2] [i_0 - 2] [(unsigned char)6] [i_0 + 1] [i_5 + 2]))))));
                    var_48 = ((/* implicit */unsigned char) min((max((var_15), (((/* implicit */long long int) -2147483642)))), (((/* implicit */long long int) var_5))));
                }
            }
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 3; i_19 < 8; i_19 += 2) 
            {
                var_49 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((3884943877U) >> (((((/* implicit */int) var_8)) - (141))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (short)31816)), (-2147483642))))))) > (var_12));
                var_50 -= ((/* implicit */unsigned int) (+(((6326542646523548039LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            var_51 = ((/* implicit */unsigned char) ((unsigned int) arr_53 [i_0] [i_0] [i_0] [i_18] [i_0]));
        }
        /* vectorizable */
        for (int i_20 = 2; i_20 < 8; i_20 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [(signed char)9] [i_20 - 1] [i_20 - 2] [i_0 + 2])) && (((/* implicit */_Bool) arr_51 [i_0 + 1] [i_20 + 1] [i_20 + 1] [i_0 + 1])))))));
                        arr_74 [i_0] [i_20] [i_21] [(unsigned short)6] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
                    }
                } 
            } 
            var_53 = ((/* implicit */long long int) arr_20 [(short)2] [(short)2] [(short)2] [i_20]);
        }
        /* vectorizable */
        for (int i_23 = 2; i_23 < 8; i_23 += 2) /* same iter space */
        {
            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) arr_70 [i_0] [i_23 - 2] [i_0 - 2] [(short)3])) && ((_Bool)1)));
            arr_78 [i_0 - 2] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)235)))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)88)) - (69)))))));
            arr_79 [i_0] [i_0 - 2] [i_23] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
        }
        var_55 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) ^ (((((var_16) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (min((arr_55 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) var_17))))))));
    }
    for (unsigned char i_24 = 3; i_24 < 13; i_24 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_25 = 0; i_25 < 14; i_25 += 2) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    var_56 ^= ((/* implicit */_Bool) (((-(((/* implicit */int) (!(((/* implicit */_Bool) -524866803))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) -1855993070)))))));
                    var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)3), (((/* implicit */unsigned char) (_Bool)1))))) && (((/* implicit */_Bool) arr_86 [i_24] [i_25] [i_26] [i_26])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_27 = 0; i_27 < 14; i_27 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_28 = 3; i_28 < 11; i_28 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_29 = 0; i_29 < 14; i_29 += 2) 
                {
                    var_58 -= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_3)) : (arr_81 [i_24 - 3])));
                    /* LoopSeq 1 */
                    for (unsigned int i_30 = 0; i_30 < 14; i_30 += 2) 
                    {
                        arr_97 [i_30] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) ((-7912863176563794595LL) ^ (arr_82 [i_28 - 3])));
                        arr_98 [i_24] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)254))));
                    }
                }
                var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) ((_Bool) arr_82 [i_24 - 3])))));
            }
            var_60 = ((/* implicit */unsigned int) (signed char)110);
            var_61 = ((/* implicit */int) max((var_61), (((((((/* implicit */int) ((signed char) (unsigned char)176))) + (2147483647))) >> (((((/* implicit */int) (signed char)88)) - (62)))))));
            arr_99 [i_27] [i_24] [i_24 - 3] = ((/* implicit */long long int) 2147483641);
        }
    }
    var_62 = ((/* implicit */unsigned long long int) var_15);
    var_63 = ((/* implicit */unsigned int) (~(((var_15) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (unsigned char)60))))))))));
}
