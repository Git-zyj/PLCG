/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206168
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
    var_15 = ((/* implicit */unsigned char) min((max((var_9), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((-31772216) == (((/* implicit */int) var_0))))), ((~(57392249))))))));
    var_16 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_1]);
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (arr_3 [i_0] [i_0 - 1])))) ? (arr_7 [i_0 + 2] [i_1] [i_2 + 2] [(short)0]) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) && (arr_1 [i_2 - 2]))))));
                var_17 = ((/* implicit */unsigned long long int) (~((+((-2147483647 - 1))))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
            }
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_18 = ((((/* implicit */long long int) var_10)) | (var_4));
                var_19 |= ((/* implicit */unsigned short) (+((-(arr_0 [i_1] [i_0 + 3])))));
            }
            arr_13 [i_0] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_0] [i_0] [i_1])))))))));
            arr_14 [i_0] [(signed char)8] [(signed char)8] = ((/* implicit */short) arr_3 [i_1] [i_0 + 1]);
        }
        var_20 = ((((/* implicit */_Bool) ((arr_12 [i_0 - 1]) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_11 [1] [1])))), (((((/* implicit */int) (short)-1)) < (((/* implicit */int) var_5))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) > (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 3445902695811005588LL))))))));
        var_21 = ((/* implicit */_Bool) ((unsigned short) ((int) 7842883855634342707ULL)));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_17 [(unsigned char)8]);
                        arr_26 [i_5] [i_4] = (signed char)1;
                        var_23 = ((/* implicit */unsigned short) var_5);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (signed char i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        {
                            arr_35 [i_4] [i_5] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_5] [i_5] [i_5] [i_10] [i_10 + 3]))))) < (arr_17 [i_4])));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_32 [i_10 + 3] [i_10] [i_10 - 2] [i_10 + 4] [i_5])))))))));
                            arr_36 [i_4] [i_4] [i_4] [(_Bool)1] [i_8] [6LL] [i_10] = ((/* implicit */unsigned short) (+(3445902695811005588LL)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_39 [i_4] [(signed char)12] [i_5] [i_8] [i_4] = ((/* implicit */short) min((0U), (((/* implicit */unsigned int) arr_28 [(unsigned char)19] [i_4] [i_8] [i_11]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 3; i_12 < 22; i_12 += 4) 
                    {
                        var_25 = ((/* implicit */short) max((16546772217679184720ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_29 [i_4] [(unsigned short)0] [(unsigned short)0] [i_4]))) ? (arr_18 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                        var_26 = ((/* implicit */_Bool) (-(0ULL)));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_33 [i_4] [i_5] [i_8] [i_8] [i_12])), (arr_22 [(unsigned short)10])))) < (((((((/* implicit */int) var_8)) == (((/* implicit */int) var_12)))) ? (((/* implicit */int) arr_19 [i_11] [i_11])) : (((/* implicit */int) arr_30 [i_4] [i_4] [i_5] [4] [i_11] [4])))))))));
                    }
                    var_28 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [(signed char)20]))) <= (arr_38 [i_5] [i_5] [7ULL])))), ((~(0U)))))), (min((((/* implicit */unsigned long long int) (short)-19433)), (((((/* implicit */unsigned long long int) -3445902695811005588LL)) & (11945938636405242772ULL)))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (5723621657945402373ULL) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4] [i_5] [i_11]))) - (7842883855634342707ULL))), (((2189730610414555451ULL) >> (((arr_37 [i_4] [i_5] [i_4] [i_11] [i_11]) + (683879686077313213LL)))))))));
                }
                for (int i_13 = 1; i_13 < 21; i_13 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        arr_51 [i_4] [i_5] [i_5] [i_8] [i_4] [i_14] = ((/* implicit */unsigned short) var_0);
                        var_30 += ((/* implicit */unsigned short) ((signed char) arr_49 [i_8] [i_5] [i_4] [i_13] [i_13] [(signed char)6]));
                        arr_52 [i_8] [i_13 + 2] [i_4] = ((/* implicit */int) arr_25 [i_4] [i_5]);
                        var_31 += ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) (unsigned char)108))))), (2975921222U))) >= (((/* implicit */unsigned int) ((max((arr_47 [i_4] [i_4] [i_5] [i_8] [22ULL] [i_14] [i_14]), (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (short)7168)))))));
                        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [(_Bool)1] [i_5] [i_5] [i_5] [i_5]))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) min((((unsigned char) (unsigned short)38940)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4)))))));
                        var_34 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_27 [i_4] [i_4] [i_15])), (7842883855634342707ULL)))) || (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -3445902695811005589LL))))))));
                        var_35 = ((/* implicit */unsigned short) var_3);
                        arr_56 [13ULL] [i_5] [i_4] [i_4] [i_15] = ((/* implicit */unsigned short) (signed char)-8);
                        var_36 = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) var_14);
                        var_38 *= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_55 [i_5] [i_8])) : (((/* implicit */int) arr_29 [i_16] [i_5] [i_8] [20LL]))))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_4] [i_5] [i_8] [i_8] [i_17] [i_17]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_61 [i_4] [i_13 - 1] [i_5] [12ULL] [i_5] [i_8] [i_5])))))));
                        var_40 = (-(var_7));
                        var_41 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (_Bool)1))))) ? (arr_62 [i_13] [i_13 + 1] [i_13 + 1] [i_13 - 1] [(unsigned short)17] [i_13]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_4] [i_5] [i_4] [(short)18] [i_13] [i_17])) ? (((/* implicit */int) arr_41 [(signed char)4] [i_5] [i_8] [i_13] [i_8] [i_8] [i_4])) : (((/* implicit */int) (short)-1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_4] [i_5] [i_8] [i_8] [i_13] [i_5]))) : (1361654875001712129LL)))) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) ((unsigned char) arr_37 [6ULL] [i_4] [(signed char)12] [i_4] [i_4]))))) : ((((_Bool)0) ? (((/* implicit */int) max((var_6), (((/* implicit */short) arr_30 [i_4] [i_5] [i_8] [8LL] [i_17] [i_13 + 2]))))) : (((/* implicit */int) var_3))))));
                    }
                    arr_64 [(unsigned short)11] [(unsigned char)5] [i_8] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_62 [(short)21] [(short)21] [i_5] [i_8] [i_8] [i_13])) || (((/* implicit */_Bool) var_10))))), (arr_44 [i_13 + 1] [(unsigned short)21] [(signed char)5] [i_8] [i_5])))), (((((((/* implicit */int) arr_20 [i_4])) <= (((/* implicit */int) (unsigned short)24096)))) ? (((((/* implicit */_Bool) 524992360967228455ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))) : (4294967293U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)0))))))));
                    var_42 = ((/* implicit */unsigned long long int) max((max((arr_30 [i_4] [i_8] [i_8] [i_4] [i_4] [i_4]), (((/* implicit */signed char) var_5)))), (((/* implicit */signed char) ((var_13) || (((/* implicit */_Bool) arr_30 [i_4] [i_5] [i_5] [i_4] [i_13] [i_13 - 1])))))));
                    var_43 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 14560576152512168997ULL))))));
                    var_44 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */int) (short)17735)) : (((/* implicit */int) (!(((/* implicit */_Bool) 20ULL))))))) + (((((/* implicit */_Bool) ((arr_17 [i_13]) - (17179869183LL)))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((/* implicit */int) var_6))))));
                }
                arr_65 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-40))))) * (((unsigned int) ((unsigned int) arr_30 [i_4] [i_4] [i_5] [i_4] [11LL] [i_8])))));
            }
            for (signed char i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        {
                            arr_76 [i_4] [i_5] [i_18] [i_5] [i_4] = ((/* implicit */int) (unsigned short)24);
                            var_45 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3138)) >> (((/* implicit */int) var_8))))) % (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_15 [i_4])))))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((min(((~(((/* implicit */int) arr_29 [i_4] [(unsigned char)6] [(signed char)14] [(unsigned short)20])))), (((((/* implicit */_Bool) var_9)) ? (0) : (((/* implicit */int) arr_41 [22LL] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_60 [i_4] [i_5] [i_18] [(_Bool)1] [i_5] [i_4])))) > (((/* implicit */int) var_0))))))))));
                arr_77 [i_4] [i_4] [i_4] = ((/* implicit */short) ((unsigned char) arr_72 [i_4] [i_4] [i_5] [(short)7] [i_18] [i_18]));
            }
            for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 3) 
            {
                var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_23 [i_4] [i_4]), (((/* implicit */unsigned long long int) (unsigned short)12483))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((arr_57 [i_4]) != (arr_57 [i_5]))))));
                var_48 = ((/* implicit */unsigned long long int) arr_41 [i_4] [18U] [i_4] [i_5] [i_5] [i_5] [i_4]);
                var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) var_7))));
                var_50 = ((/* implicit */unsigned short) max((var_13), (arr_66 [i_4] [i_5] [i_21])));
                arr_81 [i_4] [i_5] [i_5] [i_5] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-1)))) - (((((/* implicit */unsigned long long int) var_10)) + (arr_23 [i_4] [i_4]))))), (((/* implicit */unsigned long long int) min(((-(1361654875001712129LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_54 [(unsigned short)12] [i_4] [i_4] [i_5] [i_21] [i_21])) - (((/* implicit */int) arr_54 [i_4] [i_4] [i_4] [i_4] [i_21] [i_21]))))))))));
            }
            var_51 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
        }
        for (short i_22 = 3; i_22 < 22; i_22 += 2) 
        {
            arr_85 [i_4] [i_22] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */unsigned long long int) 462939697)) : (12605716119343728299ULL)))) ? (((/* implicit */int) arr_19 [i_4] [i_22])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_4] [i_4] [i_22] [i_22] [i_22])) || (((/* implicit */_Bool) (short)0)))))))) > (arr_46 [i_22] [i_22] [i_22 - 3] [i_22])));
            arr_86 [22U] [i_22 - 2] [i_4] = ((/* implicit */int) (+((+(arr_74 [i_22 - 3])))));
            arr_87 [i_4] = ((/* implicit */_Bool) ((signed char) 338593700301187306ULL));
        }
        arr_88 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1832))))) - (min((arr_25 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_0))))));
        var_52 = ((/* implicit */long long int) var_10);
    }
}
