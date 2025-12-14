/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29917
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */int) (short)-17234);
                    arr_8 [i_0] [i_0] [(_Bool)1] [14ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17232)) ? (((((/* implicit */_Bool) (short)17225)) ? (3327153417U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54907))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))))));
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_2 + 2]))))) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)1)), (arr_7 [i_2 - 1] [i_2 + 2] [i_2] [i_2 - 1])))))))));
                    arr_9 [i_0] [i_0] [(unsigned char)0] [i_0] |= ((/* implicit */_Bool) (short)26679);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (((+(((/* implicit */int) (signed char)18)))) + (((/* implicit */int) var_1))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) (short)17234);
        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-13683))));
        var_15 -= ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4])) * (((/* implicit */int) (unsigned short)49241))));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_4])) | (arr_4 [i_4] [i_4] [i_4])));
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_4] [3ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) (short)13834))));
            arr_22 [i_4] [i_5] = ((/* implicit */short) arr_19 [i_4] [i_5]);
        }
        for (signed char i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                var_16 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_6 + 2] [i_6 - 2] [i_6 - 2]))));
                arr_28 [6ULL] = ((/* implicit */long long int) (signed char)-123);
                arr_29 [i_4] [i_6] [i_7] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) 14741525776570395821ULL))));
            }
            for (short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                arr_32 [(unsigned short)5] [(unsigned short)5] [i_8] [(signed char)5] = ((/* implicit */signed char) (~(((/* implicit */int) arr_27 [i_4] [i_6] [8ULL] [(unsigned short)9]))));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 7; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_40 [i_4] [(unsigned short)9] [(signed char)9] [i_8] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (arr_23 [(unsigned short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned char)3] [i_6])))))) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) arr_3 [i_6 - 2]))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_7 [5U] [5U] [14LL] [i_9])) <= (((/* implicit */int) (unsigned short)12020))))) * (((/* implicit */int) arr_13 [i_6 - 2] [i_6 - 2]))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_15 [i_10])) : (((/* implicit */int) arr_7 [i_4] [i_6] [(unsigned short)1] [17ULL]))))) ? (((((/* implicit */_Bool) arr_35 [i_4])) ? (((/* implicit */int) arr_35 [i_4])) : (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) arr_27 [i_9 - 3] [i_9] [i_6 + 1] [i_4])))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) * (arr_25 [(signed char)0]))))));
            }
            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_36 [i_4]))));
            var_21 = ((/* implicit */int) 3705218297139155794ULL);
            var_22 *= ((/* implicit */signed char) (unsigned short)64658);
        }
        for (int i_11 = 1; i_11 < 7; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                arr_48 [i_4] [1ULL] [i_11] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) (unsigned short)859)))));
                arr_49 [i_12] [(short)5] [(short)5] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_11 + 3] [i_11 + 2])) + (((/* implicit */int) arr_13 [i_11 + 3] [i_11 + 2]))));
                arr_50 [i_4] [(unsigned short)9] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_44 [i_4] [(short)6] [(short)6]))));
                arr_51 [i_4] [i_11] [i_12] = ((/* implicit */int) (-(((13343362554799442904ULL) >> (((((/* implicit */int) (short)1910)) - (1903)))))));
            }
            for (int i_13 = 4; i_13 < 9; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (short i_14 = 1; i_14 < 9; i_14 += 4) 
                {
                    for (signed char i_15 = 4; i_15 < 8; i_15 += 2) 
                    {
                        {
                            arr_61 [i_4] [(signed char)1] [(short)6] [i_4] [i_4] = (~(((/* implicit */int) arr_13 [i_4] [i_11 + 3])));
                            arr_62 [i_4] [i_11] [i_15] [i_14] [(short)3] [i_13] [(unsigned short)7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_15 - 3] [i_14 - 1] [i_11 + 3] [i_13 + 1] [(short)5] [i_11 + 3] [i_11])) ? (((/* implicit */int) arr_38 [i_15 + 1] [i_14 - 1] [i_11] [i_13 - 3] [i_11] [i_11 - 1] [i_4])) : (((/* implicit */int) (unsigned short)47625))));
                        }
                    } 
                } 
                arr_63 [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) & (803491481120282527ULL));
            }
            var_23 *= ((/* implicit */signed char) (_Bool)1);
            arr_64 [i_4] [i_11] = ((/* implicit */unsigned short) arr_53 [i_4] [(short)0]);
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        var_24 = ((/* implicit */int) min((var_24), (arr_4 [(signed char)22] [(signed char)22] [(signed char)22])));
        /* LoopNest 3 */
        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            for (unsigned char i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                for (unsigned char i_19 = 4; i_19 < 22; i_19 += 3) 
                {
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) arr_69 [i_18] [i_18] [i_19 - 4])) : (((/* implicit */int) ((unsigned char) arr_69 [i_16] [i_18] [i_16]))))))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57491))) & ((+(arr_68 [i_16] [i_16] [i_16])))));
                    }
                } 
            } 
        } 
        arr_73 [i_16] = ((/* implicit */int) 1588051932608800808LL);
    }
    for (unsigned short i_20 = 2; i_20 < 11; i_20 += 3) 
    {
        arr_76 [5ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_68 [i_20] [i_20] [i_20])) ? (((((/* implicit */_Bool) (short)-1911)) ? (((/* implicit */int) max(((short)11128), (((/* implicit */short) arr_5 [i_20] [i_20] [i_20]))))) : (((/* implicit */int) arr_67 [i_20 + 3] [i_20 + 2] [i_20])))) : ((-(((/* implicit */int) (signed char)-122))))));
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 14; i_21 += 1) 
        {
            for (unsigned char i_22 = 1; i_22 < 12; i_22 += 2) 
            {
                {
                    arr_82 [i_20] = arr_5 [i_22 + 1] [i_20 - 2] [(signed char)1];
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_77 [i_20 + 1]) + (arr_77 [i_20]))))));
                    arr_83 [i_20] [i_20] [i_22] [i_20] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)27405)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))) : (17016308375502588905ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))))) ? (((((/* implicit */_Bool) arr_74 [i_20 + 1] [i_20 - 1])) ? (((((/* implicit */_Bool) 16523198422267831402ULL)) ? (17074260732852123777ULL) : (13633821600962867370ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_20] [i_21])) ? (((/* implicit */int) (short)32640)) : (((/* implicit */int) (signed char)-30))))))) : (((/* implicit */unsigned long long int) ((arr_80 [i_21]) ? (((/* implicit */int) arr_0 [i_20 + 3])) : (((((/* implicit */int) (signed char)112)) | (((/* implicit */int) (short)25814)))))))));
                }
            } 
        } 
        var_28 *= ((signed char) (unsigned short)48754);
        /* LoopNest 3 */
        for (signed char i_23 = 1; i_23 < 13; i_23 += 4) 
        {
            for (unsigned short i_24 = 0; i_24 < 14; i_24 += 4) 
            {
                for (unsigned char i_25 = 3; i_25 < 11; i_25 += 2) 
                {
                    {
                        var_29 = ((((/* implicit */_Bool) -1588051932608800808LL)) ? (((/* implicit */int) min((max((((/* implicit */unsigned short) (signed char)107)), ((unsigned short)61461))), (((/* implicit */unsigned short) arr_10 [i_23 + 1] [i_20 + 1]))))) : (((/* implicit */int) ((arr_84 [(unsigned char)11] [(unsigned char)11]) > (arr_84 [i_20] [i_24])))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) 17643252592589269108ULL))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_27 = 1; i_27 < 13; i_27 += 4) 
            {
                for (signed char i_28 = 0; i_28 < 14; i_28 += 1) 
                {
                    for (short i_29 = 2; i_29 < 12; i_29 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */int) arr_81 [i_20] [i_26] [i_26]);
                            arr_105 [(signed char)0] [i_27] [i_27] [i_28] [i_28] = ((/* implicit */unsigned short) 17914551814992843612ULL);
                            arr_106 [(unsigned short)7] [i_26] [i_27] [4ULL] [i_27] = ((/* implicit */int) 467652871305087554ULL);
                        }
                    } 
                } 
            } 
            var_32 = (!(((/* implicit */_Bool) -6716688545701903061LL)));
            arr_107 [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_87 [(short)4] [6U] [(short)4] [i_26])))) ? (((/* implicit */int) ((((/* implicit */int) arr_65 [i_20 + 1])) != (((/* implicit */int) (short)4909))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 113169410)))))));
        }
    }
}
