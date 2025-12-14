/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198236
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((var_11) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((signed char) arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_20 -= ((/* implicit */int) min((((/* implicit */long long int) arr_9 [0LL] [i_2])), (max((((/* implicit */long long int) (unsigned short)15597)), (-5521066109066996906LL)))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned char)128)) - (101))))) : (((/* implicit */int) var_13))))) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38759)))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((var_1) << (((/* implicit */int) ((((/* implicit */_Bool) (short)-32758)) && (((/* implicit */_Bool) arr_8 [i_1] [i_2])))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((arr_6 [14]), (((/* implicit */unsigned int) var_13)))))) ? (((((/* implicit */_Bool) (unsigned char)15)) ? (5521066109066996905LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [20])) * ((-(((/* implicit */int) arr_7 [4] [4])))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            arr_15 [i_1] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 1]))) : (arr_14 [i_3] [i_1])));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) 8342772636478906820ULL);
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_11))) - (var_1)));
                    var_25 = ((/* implicit */signed char) ((unsigned char) -5521066109066996906LL));
                }
                for (int i_6 = 3; i_6 < 23; i_6 += 3) 
                {
                    arr_25 [i_4 + 1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    arr_26 [i_1] [i_3] [5] [i_1] [i_6] = ((/* implicit */_Bool) var_14);
                    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((8342772636478906810ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                arr_27 [(unsigned char)16] [i_1] [(unsigned char)16] [i_4] = ((/* implicit */unsigned int) ((((arr_20 [(unsigned char)3] [(unsigned char)3] [i_3 + 1] [(unsigned char)7] [i_3] [i_3]) && (((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_4])) ? (arr_14 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_3]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1])))))));
                arr_28 [i_1] [i_3] [i_1] = ((/* implicit */short) (((-(((/* implicit */int) arr_23 [i_1] [i_3])))) <= (((/* implicit */int) ((short) arr_14 [i_1] [i_4])))));
            }
        }
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
            arr_32 [i_1] = ((/* implicit */long long int) var_3);
            arr_33 [i_7] [i_1] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) ((signed char) var_8)))), (var_7)));
            arr_34 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)23102))) / (arr_0 [i_1]))))))), ((+(max((((/* implicit */unsigned int) arr_24 [i_1] [i_1] [2ULL])), (arr_13 [(unsigned short)21] [i_1])))))));
        }
        for (long long int i_8 = 1; i_8 < 23; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 2; i_9 < 20; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    for (unsigned int i_11 = 1; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_28 = ((unsigned int) -14);
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_23 [23U] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40746))) : (var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [(signed char)22] [i_8]))) : (min((((((/* implicit */_Bool) arr_43 [i_1] [(signed char)3] [i_1] [i_1] [i_9] [i_10] [i_10])) ? (arr_12 [i_11] [i_10] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(short)23] [i_9])) ? (((/* implicit */int) arr_16 [i_8] [i_9] [i_11])) : (((/* implicit */int) arr_38 [i_11] [i_9 + 4] [i_1])))))))));
                            arr_45 [i_1] [i_1] [i_1] [i_1] [i_11] [i_9] = ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
                arr_46 [(unsigned char)8] [i_1] = ((/* implicit */_Bool) min((min((1464742616U), (((/* implicit */unsigned int) (signed char)27)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-56)) % (((/* implicit */int) (unsigned char)182)))))));
                arr_47 [i_1] = max(((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_0 [i_1]))))), (((/* implicit */long long int) (((!(var_4))) ? (((/* implicit */int) ((short) arr_24 [i_9 + 1] [i_8] [i_1]))) : (((((/* implicit */int) (short)22652)) ^ (var_1)))))));
                var_30 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1])))))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (arr_39 [i_8] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11723))))) : (((/* implicit */unsigned long long int) (-((+(var_18))))))));
            }
            /* LoopSeq 3 */
            for (long long int i_12 = 3; i_12 < 23; i_12 += 1) 
            {
                arr_52 [i_1] [6LL] [6LL] [i_1] = ((((/* implicit */int) ((((/* implicit */_Bool) 1044826428)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_12] [i_1] [i_1])) ? (((/* implicit */unsigned int) var_16)) : (arr_6 [i_12]))))))) <= (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)7)))));
                var_31 = ((/* implicit */unsigned char) (+(min(((~(0LL))), (((((/* implicit */long long int) ((/* implicit */int) var_17))) / (-14LL)))))));
            }
            for (unsigned int i_13 = 2; i_13 < 23; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_15 = 1; i_15 < 23; i_15 += 1) /* same iter space */
                    {
                        arr_61 [(unsigned short)3] [i_8] [i_13] [i_14] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)80))));
                        var_32 = ((arr_18 [i_15 + 1] [i_15 - 1]) ? (((/* implicit */int) arr_18 [i_15 + 1] [i_15 + 1])) : (((/* implicit */int) arr_18 [i_15 - 1] [i_15 - 1])));
                        arr_62 [i_1] [i_1] [i_13] [i_1] [i_15] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                        arr_63 [i_1] [i_14] [i_13] [i_14] [i_1] [3ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_15 + 1] [i_15 + 1])) ? (((/* implicit */int) arr_9 [i_15 + 1] [i_15 + 1])) : (((/* implicit */int) arr_9 [i_15 + 1] [i_15 + 1]))));
                    }
                    for (long long int i_16 = 1; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        arr_67 [i_13] [i_1] [i_13 - 1] [i_13] [10U] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)1572)), (7799420993957403811ULL)));
                        arr_68 [i_16] [i_1] [i_14] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_30 [i_16 + 1] [i_8 - 1]);
                        arr_69 [i_1] [i_8] [i_8] [i_8] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((0ULL), (9007199254740991ULL)))) ? (((/* implicit */int) (unsigned short)30766)) : (((-2147483630) + (((/* implicit */int) (short)0))))))) ? (min((4294967293U), (((/* implicit */unsigned int) (unsigned char)2)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_16 + 1] [i_13 - 1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1151203991))))) : (((/* implicit */int) arr_48 [i_1])))))));
                        arr_70 [i_1] [i_8] [i_1] [23ULL] [i_14] [i_16] = var_17;
                        arr_71 [i_1] [i_1] = min((((/* implicit */unsigned int) var_0)), (((((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))) % (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_42 [i_1] [i_8] [i_13] [(unsigned char)3])), (arr_38 [i_8 + 1] [i_13] [i_13]))))))));
                    }
                    arr_72 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 406354918)) && (((/* implicit */_Bool) 1222653537U)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_17 = 1; i_17 < 23; i_17 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) arr_54 [(unsigned char)3] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) 3072313759U)) : (arr_75 [i_17] [i_14] [i_14] [i_13 - 2] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_13] [i_17])) && (((/* implicit */_Bool) (unsigned char)75))))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_17 - 1] [i_13 - 1] [i_8 + 1])) && (((/* implicit */_Bool) ((unsigned char) arr_37 [i_1] [i_1] [i_1]))))))));
                        var_34 = ((/* implicit */int) var_19);
                        arr_76 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)13] [i_1] = ((/* implicit */unsigned char) var_2);
                    }
                    for (long long int i_18 = 1; i_18 < 23; i_18 += 1) 
                    {
                        arr_79 [i_1] [i_8] [i_13] [i_14] [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_48 [i_13 - 2])))));
                        var_35 = (unsigned char)8;
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_14 [17U] [i_18]))));
                    }
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        arr_82 [i_1] [14ULL] [i_1] [(signed char)0] [i_1] |= ((/* implicit */short) min((((max((((/* implicit */long long int) 1668859757)), (7767807875475729202LL))) <= (((/* implicit */long long int) -994019140)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) arr_21 [i_13] [(short)18])) : (((/* implicit */int) (unsigned short)9)))))))));
                        arr_83 [i_19] [8ULL] [i_1] [i_13 + 1] [i_1] [i_8] [(short)16] = ((/* implicit */unsigned int) arr_50 [i_8]);
                    }
                }
                var_37 = ((/* implicit */short) var_9);
                arr_84 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_78 [i_8 + 1] [i_8] [i_13 - 1] [i_13 + 1] [i_13]))))));
            }
            for (unsigned char i_20 = 1; i_20 < 22; i_20 += 1) 
            {
                var_38 = arr_2 [i_8];
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) arr_58 [i_1] [i_1] [i_1] [4ULL] [i_1]))));
            }
            arr_88 [i_1] = max((((((((/* implicit */int) arr_74 [i_8 + 1] [i_8] [i_8 + 1] [(short)20] [i_1])) >= (-2147483636))) ? ((~(10647323079752147811ULL))) : (((/* implicit */unsigned long long int) arr_64 [i_8] [i_8 + 1] [i_8 + 1])))), (((unsigned long long int) ((short) arr_0 [i_1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_22 = 1; i_22 < 23; i_22 += 4) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */short) (-(((/* implicit */int) arr_55 [i_1]))));
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_1] [i_8] [i_21] [i_21] [i_1] [i_22] [i_23])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_53 [i_1] [i_21]), (((/* implicit */unsigned int) (short)-18535))))) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_18))))))) : (((((((/* implicit */_Bool) arr_21 [i_21] [i_21])) ? (2147483612) : (((/* implicit */int) var_7)))) - (((((/* implicit */int) arr_35 [i_22] [i_21] [i_1])) * (((/* implicit */int) var_4))))))));
                            arr_96 [i_1] [i_8 - 1] [i_21] [(short)10] [i_22] [i_1] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_8] [i_21] [i_23])) > (((/* implicit */int) arr_11 [i_8]))))) << (((arr_40 [i_1] [i_8 - 1] [i_21] [i_8 - 1]) + (4874655782506903530LL)))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_17))) / (14U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_80 [i_8] [i_8 + 1] [i_8] [i_8] [(_Bool)1]), (((unsigned char) 1225673524U))))))));
                        }
                    } 
                } 
                arr_97 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_92 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8 - 1])) : (((/* implicit */int) arr_92 [i_8 - 1] [i_8 - 1] [(unsigned short)2] [(unsigned short)2] [i_8 - 1]))))), ((~(var_18)))));
            }
        }
    }
    for (int i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
    {
        arr_101 [i_24] [i_24] = ((/* implicit */short) arr_50 [i_24]);
        arr_102 [i_24] [i_24] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned char)2))))) : (((/* implicit */int) ((((/* implicit */int) arr_92 [i_24] [i_24] [i_24] [i_24] [i_24])) != (((/* implicit */int) (unsigned char)210)))))))));
    }
    var_42 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_17)))))))), ((+(((/* implicit */int) var_7))))));
}
