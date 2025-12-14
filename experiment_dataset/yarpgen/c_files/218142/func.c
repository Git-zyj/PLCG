/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218142
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = (unsigned short)7284;
                var_20 = ((/* implicit */int) ((unsigned char) 0ULL));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) (unsigned short)7284)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) arr_5 [i_0] [(unsigned short)8])))) * (((/* implicit */int) min(((short)-23954), ((short)-23961))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [3LL] = ((((/* implicit */_Bool) ((unsigned short) (unsigned short)58251))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_11 [i_4 + 1] [i_0] [i_4 - 1] [i_4 - 1] [i_0] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1539895799U)) && (((/* implicit */_Bool) (unsigned short)7284)))))))));
                            arr_14 [i_2] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_4 [i_4 - 1] [i_0])) | (((/* implicit */int) (unsigned char)185)))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) min((var_10), (((/* implicit */long long int) (unsigned short)58241))))))));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_5] [i_2] [(unsigned short)12] = ((/* implicit */signed char) ((unsigned char) ((_Bool) arr_11 [i_0] [i_1] [i_5 + 1] [i_3] [i_0] [i_5])));
                        }
                        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            arr_21 [(short)20] [(short)20] [i_2] [i_0] = ((/* implicit */signed char) arr_17 [i_0 + 2] [i_0 + 2] [0ULL] [i_0 + 2] [i_3] [(short)0] [i_6]);
                            arr_22 [i_0] [i_1] [i_3] [i_6] [i_6 - 1] [i_6] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2]))) <= (((((/* implicit */_Bool) (unsigned short)7294)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) : (4294967295U)))))));
                            var_23 &= max((min(((~(3124755673177496854LL))), (((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) (unsigned short)51897)) - (51897)))))))), (((/* implicit */long long int) (short)23964)));
                        }
                        for (short i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_1 - 1] [i_0] [i_3] [i_1 - 1] = ((/* implicit */long long int) min(((unsigned short)58252), (((/* implicit */unsigned short) (signed char)102))));
                            var_24 = ((/* implicit */unsigned int) -1312891941);
                        }
                        var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1])), (((arr_11 [i_0] [i_0 + 3] [i_0] [i_3] [i_0] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7284))) <= (3325607614605234196LL)))))))));
                    }
                    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        arr_29 [i_0 - 3] [i_0] [i_2] [i_8] = ((/* implicit */unsigned char) 3427077481U);
                        arr_30 [i_2] [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_7);
                    }
                    for (unsigned int i_9 = 2; i_9 < 21; i_9 += 3) /* same iter space */
                    {
                        arr_35 [i_0] [i_2] [i_9 + 1] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2] [i_1 - 1] [i_2] [i_1 - 1] [i_0] [i_0 + 1] [i_2])) ? (((((/* implicit */int) (unsigned short)7284)) >> (((((/* implicit */int) arr_0 [i_0])) - (20696))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_16 [i_2] [i_1 - 1] [(unsigned char)18] [i_9] [i_0] [i_0 - 4] [i_2])))))))) : (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2] [i_1 - 1] [i_2] [i_1 - 1] [i_0] [i_0 + 1] [i_2])) ? (((((/* implicit */int) (unsigned short)7284)) >> (((((((/* implicit */int) arr_0 [i_0])) - (20696))) - (37371))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_16 [i_2] [i_1 - 1] [(unsigned char)18] [i_9] [i_0] [i_0 - 4] [i_2]))))))));
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-18292)) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (signed char)81))))))))) / ((-9223372036854775807LL - 1LL))));
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned short) 1914721727U));
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 331322073U);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) 9219593706470653834LL))));
                        arr_39 [i_0] [i_0 - 4] [i_1 + 1] [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)48073))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_2] [i_2] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max(((unsigned short)48073), (((/* implicit */unsigned short) (unsigned char)12))))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 4; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) ((_Bool) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_0])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_17 [i_11] [i_0] [i_10] [i_2] [i_1] [i_0 - 4] [i_0])), (var_13)))))));
                            arr_43 [i_0] [i_11] = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) ((long long int) 2333437835U))))), (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((12641625764084858665ULL), (((/* implicit */unsigned long long int) 9007197107257344LL)))))))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 21; i_12 += 3) /* same iter space */
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) min((arr_12 [i_0] [i_0] [i_2] [i_10] [(signed char)12]), (((/* implicit */long long int) (unsigned short)58252)))))));
                            var_30 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) (unsigned short)65528)));
                        }
                        arr_49 [i_10] [i_0] [i_0] [i_0] = var_4;
                    }
                    arr_50 [i_0] [i_1] [(unsigned char)11] [i_2] = ((/* implicit */signed char) arr_41 [i_0] [i_0] [i_1] [i_2] [9LL]);
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    arr_54 [i_0] = ((/* implicit */int) ((signed char) arr_2 [i_0 + 1] [i_0] [i_13]));
                    arr_55 [i_0] = ((/* implicit */unsigned long long int) 1939398211);
                    arr_56 [(short)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (unsigned char)207))))) && (((/* implicit */_Bool) ((unsigned int) 5222725224070324103LL)))));
                    var_31 = ((/* implicit */unsigned int) (short)32767);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7278)) ^ (-1857449358)));
        arr_59 [i_14] = ((/* implicit */signed char) ((unsigned long long int) ((short) ((((/* implicit */int) arr_16 [16LL] [16LL] [i_14] [i_14] [6] [i_14] [i_14])) - (((/* implicit */int) (short)4104))))));
    }
    /* LoopNest 2 */
    for (signed char i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            {
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_15] [i_15] [i_15] [i_15] [12LL] [i_16])) - (max((((/* implicit */int) (unsigned short)7294)), (1001337562))))))));
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) min(((unsigned short)41667), (((/* implicit */unsigned short) (short)-21887)))))));
                arr_64 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_15]))))) * (((((((/* implicit */int) var_7)) | (((/* implicit */int) (short)4102)))) & (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)8)), (var_13))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
    {
        arr_68 [i_17] = ((/* implicit */signed char) min((arr_15 [i_17] [i_17] [i_17] [i_17] [i_17]), (((/* implicit */long long int) arr_16 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))));
        arr_69 [i_17] = min((arr_20 [i_17] [i_17] [i_17] [i_17] [i_17]), (arr_19 [i_17] [i_17]));
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((long long int) (short)9)) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_18] [i_18])))));
        arr_72 [i_18] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-30692))) * (1427551522U));
        var_36 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(short)2] [i_18])) ? (((/* implicit */int) arr_5 [(unsigned char)8] [(unsigned char)8])) : (((/* implicit */int) arr_5 [(_Bool)1] [i_18]))));
    }
}
