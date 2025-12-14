/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237722
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
    var_20 *= ((/* implicit */_Bool) min((((((/* implicit */int) ((unsigned short) 335227776))) << (((((((/* implicit */int) var_9)) >> (((var_5) - (560925552))))) - (23))))), (((/* implicit */int) var_16))));
    var_21 += ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) 17376605754659578755ULL);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((((17376605754659578755ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))));
                        var_23 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_2 + 1])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_2 - 1]))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                var_24 |= ((/* implicit */_Bool) (((+(arr_5 [i_0 + 1] [i_4 - 1]))) / (((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */int) (unsigned char)120)) : (((((/* implicit */_Bool) arr_12 [i_4] [i_1] [i_1] [i_0])) ? (var_5) : (arr_12 [i_1] [i_1] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    for (signed char i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_4] [i_5] [i_1] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */int) max((var_19), (arr_16 [i_0])))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_15 [i_4] [i_5])) : (var_15))))) : ((+(((/* implicit */int) (signed char)24))))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((max((-2158095087251581944LL), (((/* implicit */long long int) arr_2 [i_0])))) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_4 + 1])))))));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_4])) >> (((((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_4 + 2])) - (6396))))) > ((-(((/* implicit */int) (unsigned char)147))))));
                var_26 = ((/* implicit */short) (unsigned short)31314);
            }
            for (int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_32 [i_9] [i_0] [i_7] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */int) var_19)) - (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) ((4194300LL) < (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0]))))))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)44324), (((/* implicit */unsigned short) var_11))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_7] [i_8] [i_0] [i_9])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])) : (335227763))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0])) || (((/* implicit */_Bool) arr_18 [i_9] [i_0] [i_8] [i_7] [i_1] [i_0] [i_0])))))));
                            var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)61))));
                        }
                    } 
                } 
                arr_33 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_1] [i_1] [i_7] [i_1])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) var_3))))))) : (arr_26 [i_0] [i_0] [i_0 - 1] [i_0])));
                /* LoopSeq 3 */
                for (int i_10 = 1; i_10 < 12; i_10 += 3) 
                {
                    var_29 = max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)7864)), (var_12)))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 2] [i_10 + 1])))), (((/* implicit */int) var_8)));
                    var_30 = ((/* implicit */unsigned int) ((signed char) ((_Bool) (-(((/* implicit */int) var_3))))));
                    var_31 = ((/* implicit */unsigned long long int) ((-335227758) ^ (((/* implicit */int) arr_35 [i_0]))));
                    var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_10 + 3] [i_0] [i_10] [i_10 + 4] [i_10 + 1])) || (((/* implicit */_Bool) arr_10 [i_10 + 2] [i_10 + 2] [i_10] [i_0]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_10 + 2] [i_10 + 4] [i_10] [i_0]))) : (-4024223712544535137LL)))));
                    arr_36 [i_0] [i_7] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_7] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_1]))) : (4024223712544535136LL)))) ? (max((6039615270356476911ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (-(4329937457091534929LL)))))), (((((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (4993058921253288034ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_10] [i_10 + 4] [i_0])))))));
                }
                for (int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_33 = var_7;
                    arr_39 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */short) var_12);
                    var_34 = ((/* implicit */_Bool) (unsigned short)12780);
                    var_35 = ((/* implicit */long long int) ((arr_5 [i_1] [i_1]) <= (((((/* implicit */_Bool) (unsigned short)30455)) ? (((var_19) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_7] [i_7] [i_7] [i_0] [i_11])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)188))))));
                }
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_36 = ((/* implicit */_Bool) arr_29 [i_0] [i_0 + 1] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((unsigned short) -22954885));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 - 2])) ? (arr_23 [i_0 - 2] [i_0] [i_0]) : (arr_23 [i_7] [i_12] [i_13])))) ? (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) - (((/* implicit */int) var_18)))) : (((int) arr_1 [i_0 + 1]))));
                        var_39 = ((/* implicit */unsigned char) min((((short) 1658862968U)), (((/* implicit */short) min((arr_27 [i_0 - 1] [i_0 + 1]), (arr_27 [i_0 - 2] [i_0 + 1]))))));
                    }
                    for (short i_14 = 2; i_14 < 14; i_14 += 3) 
                    {
                        var_40 ^= 22954884;
                        var_41 = ((/* implicit */_Bool) min((var_41), ((_Bool)1)));
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~((+(arr_41 [i_0] [i_7] [i_0 - 1] [i_12])))));
                    }
                    arr_49 [i_0] = ((/* implicit */short) var_12);
                    arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_17))))), (((/* implicit */unsigned int) ((_Bool) (signed char)9)))));
                    var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)135)), (144115188075855872LL))))));
                }
            }
            for (int i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
            {
                arr_54 [i_0] [i_0] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)35080)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((int) arr_41 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2])))));
                arr_55 [i_0] [i_0] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_0)) + (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_15])) - (((/* implicit */int) arr_6 [i_15] [i_1] [i_0]))))), (904511939946021339ULL)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned char) min((var_43), (arr_46 [i_0] [i_0 - 1] [i_0] [i_1] [i_0])));
                        arr_60 [i_0] [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                        arr_61 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-9)))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_66 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_2);
                        var_44 = ((/* implicit */int) min((var_44), (((((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0 - 2] [i_0 + 1])) ? (arr_53 [i_0] [i_0] [i_0 - 2] [i_0 - 1]) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_1] [i_15]))))));
                        var_45 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_0 - 2] [i_0 + 1]))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned long long int) var_9);
                        var_47 = ((/* implicit */unsigned char) var_0);
                        var_48 = ((arr_68 [i_0] [i_1] [i_15] [i_16] [i_16] [i_19]) / (((/* implicit */int) var_9)));
                        arr_69 [i_0] [i_0] [i_15] [i_16] [i_19] = ((/* implicit */signed char) arr_58 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]);
                    }
                    var_49 = ((arr_59 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2]))));
                    var_50 += ((/* implicit */unsigned long long int) ((arr_27 [i_16] [i_0]) ? (arr_2 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_15] [i_15] [i_0 - 2] [i_1])))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_57 [i_20] [i_15] [i_1] [i_1] [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-47))))), (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_58 [i_20] [i_0] [i_15] [i_20] [i_15] [i_1] [i_20])))))))));
                    var_52 = ((/* implicit */unsigned short) var_0);
                    var_53 = ((/* implicit */signed char) arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (signed char i_21 = 0; i_21 < 16; i_21 += 3) 
                {
                    arr_75 [i_21] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2]))));
                    arr_76 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((int) arr_58 [i_0] [i_1] [i_1] [i_1] [i_15] [i_15] [i_21])) & (((/* implicit */int) ((_Bool) var_18)))));
                    arr_77 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_56 [i_0 + 1] [i_15]))));
                }
                for (unsigned char i_22 = 0; i_22 < 16; i_22 += 1) 
                {
                    var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_0] [i_0] [i_0 + 1] [i_0 + 1])) ? (arr_78 [i_0] [i_0] [i_0 - 1] [i_0 - 2]) : (arr_78 [i_0] [i_0] [i_0 + 1] [i_0 + 1])))) ? (arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) min((arr_20 [i_0] [i_0] [i_1] [i_15] [i_22]), ((unsigned char)72)))) ? (((int) var_1)) : (((/* implicit */int) min((((/* implicit */signed char) arr_11 [i_1])), ((signed char)9)))))))))));
                    var_55 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)-56))))) < (((arr_73 [i_22] [i_15] [i_15] [i_1] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58778)))))))), (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) (signed char)-35))))));
                    var_56 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1008147285))));
                }
            }
            /* vectorizable */
            for (signed char i_23 = 0; i_23 < 16; i_23 += 3) 
            {
                arr_82 [i_0] [i_1] [i_23] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_59 [i_23]))) : (((/* implicit */unsigned long long int) 0LL))));
                var_57 = ((/* implicit */unsigned char) (~(arr_47 [i_0] [i_1] [i_23] [i_0 - 1] [i_1])));
                var_58 = ((/* implicit */_Bool) (short)-32758);
            }
        }
    }
}
