/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31358
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
    var_20 = (+(min((max((((/* implicit */int) (unsigned short)13619)), (1347560975))), (((((/* implicit */_Bool) var_12)) ? (-1347560979) : (1347560975))))));
    var_21 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)30)))))), (1347560974)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-109))));
                    var_23 = ((/* implicit */int) max((var_23), (((((((/* implicit */_Bool) -1347560979)) ? (arr_7 [i_0] [i_1] [i_1]) : (((/* implicit */int) (unsigned short)4095)))) >> (((((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (1347560980) : (1347560979))) - (1347560971)))))));
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) + (2147483647))) >> (((-1347560979) + (1347560979)))));
                }
            } 
        } 
        var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) -1347560980)) ? (1622986154) : (-2124211371)))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 4; i_3 < 20; i_3 += 4) 
        {
            var_26 ^= ((/* implicit */int) ((short) 1347560979));
            /* LoopNest 3 */
            for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */unsigned short) 1347560961);
                            arr_23 [i_0] [i_0] [i_3] [i_3] &= ((/* implicit */unsigned short) ((int) arr_22 [i_3] [i_3 - 2] [i_4] [(unsigned short)0] [i_5] [i_6 + 4] [5]));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) 1347560984)) ? (((((/* implicit */_Bool) 1622986154)) ? (1347560991) : (((/* implicit */int) (signed char)104)))) : (((/* implicit */int) (short)18289)))))));
                        }
                    } 
                } 
            } 
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_18 [i_0] [(short)4] [(short)4] [(short)4]);
        }
        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            var_29 -= ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) -1347560995)) ? (((/* implicit */int) arr_0 [i_0] [i_7])) : (-1347561019))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [6] [i_0] [i_0] [i_0] [i_7])) ? (((/* implicit */int) (unsigned short)0)) : (-1622986155))));
            /* LoopNest 3 */
            for (signed char i_8 = 2; i_8 < 19; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (int i_10 = 4; i_10 < 22; i_10 += 4) 
                    {
                        {
                            arr_37 [i_0] [i_0] [i_0] [(short)20] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 1347560975)) ? (((/* implicit */int) arr_35 [9])) : (((/* implicit */int) ((short) arr_16 [(unsigned short)22] [i_0] [(unsigned short)2] [i_0])))));
                            arr_38 [i_0] [(unsigned short)14] [i_0] [i_0] [(unsigned short)14] [i_9] = ((((/* implicit */_Bool) -1293209343)) ? (((/* implicit */int) ((-1347561010) == (-1347560992)))) : (((/* implicit */int) arr_0 [i_7 + 1] [i_8 + 2])));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned short) (((~(1347561009))) >= (((/* implicit */int) ((((/* implicit */_Bool) -159879399)) || (((/* implicit */_Bool) (signed char)-96)))))));
        }
        /* LoopSeq 4 */
        for (signed char i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            var_31 = ((/* implicit */short) arr_7 [i_0] [i_11] [i_11]);
            /* LoopSeq 2 */
            for (unsigned short i_12 = 3; i_12 < 21; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (short i_14 = 2; i_14 < 21; i_14 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 1347560979)))))));
                            arr_49 [i_0] [(unsigned short)18] [1] [1] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */int) (signed char)48)) & (((/* implicit */int) (signed char)-15))));
                            var_33 = ((/* implicit */unsigned short) ((-1347560975) <= (((/* implicit */int) arr_34 [i_0] [i_11 + 2] [i_12 + 2] [i_13] [(short)1]))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_12 - 3] [i_14 + 1] [i_14] [i_14] [i_14])) <= (((/* implicit */int) arr_34 [i_14 + 2] [i_14 - 1] [(unsigned short)7] [i_14] [21]))));
                            var_35 = ((/* implicit */short) (signed char)-21);
                        }
                    } 
                } 
                arr_50 [i_0] [i_11] [i_12] = ((/* implicit */short) -1293209351);
            }
            for (signed char i_15 = 2; i_15 < 21; i_15 += 4) 
            {
                var_36 = ((/* implicit */unsigned short) ((-1347561006) <= (1347560972)));
                var_37 = ((((/* implicit */_Bool) arr_10 [i_0] [i_15 + 2] [i_15])) ? (((/* implicit */int) arr_15 [i_15 + 1] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_15] [i_15 - 1] [i_15])));
            }
            var_38 = ((/* implicit */int) arr_12 [i_11] [(signed char)8]);
            var_39 -= ((/* implicit */unsigned short) -1347561000);
            var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1293209342) ^ (((/* implicit */int) (signed char)-60))))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)93))));
        }
        for (int i_16 = 1; i_16 < 22; i_16 += 2) 
        {
            var_41 -= ((/* implicit */signed char) (+(((-1) % (-1347561012)))));
            /* LoopSeq 1 */
            for (signed char i_17 = 2; i_17 < 21; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 1; i_18 < 20; i_18 += 2) 
                {
                    for (int i_19 = 1; i_19 < 19; i_19 += 3) 
                    {
                        {
                            arr_64 [i_19 + 1] [i_18] [i_18] [(signed char)13] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_19 + 4] [i_16 - 1] [i_17 + 1])) ? (((((/* implicit */int) (unsigned short)52469)) << (((1106762635) - (1106762631))))) : (-1347561013)));
                            var_42 += (unsigned short)52469;
                            var_43 = ((/* implicit */signed char) (~(arr_14 [i_16 + 1])));
                        }
                    } 
                } 
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_16] [i_16 + 1] [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_20 [(signed char)4] [i_16 + 1] [i_16 - 1] [i_16 + 1] [(unsigned short)7] [i_16] [i_16])) : (((/* implicit */int) (unsigned short)46887)))))));
                /* LoopSeq 2 */
                for (signed char i_20 = 1; i_20 < 20; i_20 += 2) 
                {
                    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [2] [i_0])) ? (-622437017) : (((/* implicit */int) (unsigned short)56522))));
                    var_46 = ((((/* implicit */int) (signed char)-1)) | (-228676180));
                    arr_67 [i_0] [i_20] = ((/* implicit */unsigned short) (signed char)47);
                }
                for (int i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    var_47 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)13067))));
                    /* LoopSeq 3 */
                    for (short i_22 = 0; i_22 < 23; i_22 += 1) 
                    {
                        var_48 &= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)11114)) ^ (1622986141))) | (((/* implicit */int) ((signed char) (unsigned short)52469)))));
                        var_49 = ((/* implicit */int) min((var_49), (((((/* implicit */_Bool) ((short) arr_17 [i_0] [i_16] [i_16] [i_21]))) ? (1347561019) : (((/* implicit */int) (short)-1))))));
                        arr_72 [i_22] [i_16] [i_17] [i_16] [i_16] [i_0] [i_0] = (signed char)(-127 - 1);
                    }
                    for (signed char i_23 = 0; i_23 < 23; i_23 += 3) /* same iter space */
                    {
                        var_50 = ((/* implicit */int) (!(((((/* implicit */_Bool) -1622986161)) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]))))));
                        arr_75 [(signed char)5] [i_16] [(signed char)9] [i_17] [(signed char)5] [i_21] &= ((int) 268435455);
                    }
                    for (signed char i_24 = 0; i_24 < 23; i_24 += 3) /* same iter space */
                    {
                        arr_80 [(signed char)1] [i_24] [i_17] [i_16] [i_24] [12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_0] [19] [i_0])) ? (((/* implicit */int) arr_16 [i_17] [i_16 - 1] [i_17] [i_0])) : (((/* implicit */int) (unsigned short)52452))))) ? (arr_1 [i_21]) : (arr_61 [i_16 + 1]));
                        var_51 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10851)) ? (((/* implicit */int) arr_6 [i_0] [i_16] [i_16])) : (((/* implicit */int) (signed char)-48)))))));
                    }
                    var_52 = ((/* implicit */int) ((unsigned short) arr_8 [i_17 + 2]));
                }
            }
        }
        for (int i_25 = 1; i_25 < 22; i_25 += 4) 
        {
            /* LoopNest 3 */
            for (int i_26 = 0; i_26 < 23; i_26 += 4) 
            {
                for (unsigned short i_27 = 1; i_27 < 22; i_27 += 1) 
                {
                    for (int i_28 = 0; i_28 < 23; i_28 += 3) 
                    {
                        {
                            var_53 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) arr_39 [i_0] [i_25 - 1] [i_25 - 1])) : (((/* implicit */int) arr_39 [i_28] [i_25 - 1] [i_26]))));
                            var_54 = arr_27 [(signed char)9] [(signed char)9] [i_27] [(signed char)9];
                            var_55 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)52469)) ? (((/* implicit */int) ((signed char) (unsigned short)16038))) : (((/* implicit */int) (signed char)-16))));
                        }
                    } 
                } 
            } 
            arr_90 [i_0] [i_25] [i_25] = arr_25 [i_0] [i_0];
        }
        for (int i_29 = 1; i_29 < 22; i_29 += 1) 
        {
            arr_93 [i_29] [i_29] = ((/* implicit */int) ((signed char) arr_91 [i_29 + 1] [i_29 + 1] [i_29]));
            /* LoopSeq 2 */
            for (short i_30 = 1; i_30 < 20; i_30 += 2) /* same iter space */
            {
                var_56 *= ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_21 [i_29] [i_29] [i_0] [(unsigned short)5] [i_0])) + (2147483647))) >> (((1347561014) - (1347560986))))) ^ (((((/* implicit */int) arr_88 [(signed char)15])) ^ (((/* implicit */int) arr_94 [(unsigned short)14] [(unsigned short)14] [i_30] [i_30]))))));
                var_57 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_87 [i_0] [(unsigned short)2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (signed char)-26))))) ? (((/* implicit */int) (unsigned short)29316)) : (((((/* implicit */_Bool) arr_91 [i_0] [i_29] [(unsigned short)12])) ? (-659748399) : (((/* implicit */int) arr_29 [i_0] [i_29] [i_30 + 3] [i_30])))));
            }
            for (short i_31 = 1; i_31 < 20; i_31 += 2) /* same iter space */
            {
                arr_100 [i_29] [i_29] [i_29] [i_31] = ((/* implicit */unsigned short) ((signed char) (signed char)-41));
                var_58 = ((/* implicit */int) min((var_58), (((((((((/* implicit */int) arr_98 [i_29])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65523)) - (65523))))) - (((((/* implicit */_Bool) -1489430687)) ? (((/* implicit */int) (signed char)25)) : (-195783355)))))));
                arr_101 [i_29] [(signed char)17] [(short)13] = ((short) (short)4432);
            }
            arr_102 [i_29] [i_29] = ((/* implicit */int) (unsigned short)52469);
        }
        arr_103 [i_0] = ((/* implicit */int) arr_65 [i_0] [(signed char)5]);
    }
    for (short i_32 = 2; i_32 < 20; i_32 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_33 = 2; i_33 < 20; i_33 += 2) 
        {
            arr_108 [i_32] [i_33] [i_33 + 1] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_97 [i_32])) / (arr_7 [i_32 - 1] [i_33 - 1] [i_33 - 2]))));
            var_59 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_40 [i_32 + 1] [i_33 - 2]), (((/* implicit */int) (unsigned short)40387))))) ? (((((/* implicit */int) arr_6 [i_32] [i_32 + 1] [i_33 - 1])) - (((/* implicit */int) max(((unsigned short)12), (((/* implicit */unsigned short) (signed char)-48))))))) : (((((((/* implicit */int) arr_78 [12] [i_33] [i_32])) + (arr_40 [i_32] [i_32]))) + (((/* implicit */int) (unsigned short)13074))))));
        }
        arr_109 [i_32] [i_32] = ((/* implicit */unsigned short) max((min((((/* implicit */int) (short)4432)), (-1262947839))), (((/* implicit */int) ((((/* implicit */int) (short)21131)) >= (((/* implicit */int) (short)4447)))))));
        arr_110 [i_32] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_9 [i_32 - 1] [i_32] [(signed char)20] [(signed char)20]), ((signed char)-26)))) - (((/* implicit */int) ((((/* implicit */int) arr_107 [i_32])) > (((/* implicit */int) arr_59 [i_32 - 2] [i_32 - 2] [i_32 + 1] [i_32 + 1] [i_32 - 2] [i_32 - 1])))))));
        var_60 = ((/* implicit */unsigned short) (signed char)88);
    }
    var_61 = ((/* implicit */signed char) -1);
}
