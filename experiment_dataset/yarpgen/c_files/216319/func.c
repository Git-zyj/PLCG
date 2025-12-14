/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216319
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned short)7);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)206))));
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1])) + (((/* implicit */int) arr_4 [i_1 - 2] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 1] [1ULL] [i_1])))) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1] [i_1]))));
            var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65499))))) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)7))))))) : (((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (_Bool)1)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_2])), ((short)-15387)))))))));
            var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_6 [i_0] [i_0])))))));
            var_15 = ((/* implicit */unsigned long long int) var_8);
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_3]);
            arr_13 [i_0] |= ((/* implicit */unsigned char) arr_6 [i_0] [i_3]);
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_17 = ((/* implicit */long long int) (unsigned short)37);
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            arr_29 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_5 [i_6 - 2] [i_7]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_6 - 2] [i_7]))));
                            var_19 &= ((/* implicit */long long int) arr_5 [i_7] [i_9]);
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_6 + 1])) ? (((/* implicit */int) (signed char)87)) : (arr_16 [i_6 + 1])));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */short) var_6);
            var_22 = ((/* implicit */unsigned long long int) (-(arr_19 [i_6])));
            arr_30 [i_5] [i_6] [i_6] = ((((/* implicit */_Bool) arr_10 [i_5 + 2] [i_5 + 2])) ? (((/* implicit */int) arr_10 [i_5 - 2] [i_6])) : (((/* implicit */int) (signed char)-66)));
        }
        var_23 = ((/* implicit */unsigned long long int) (unsigned short)7);
        /* LoopSeq 4 */
        for (short i_10 = 1; i_10 < 9; i_10 += 3) 
        {
            var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)2586))))) ? ((~(((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5] [1] [i_5] [i_5 - 2])))) : ((+(((/* implicit */int) ((var_0) == (((/* implicit */int) (unsigned char)156)))))))));
            /* LoopSeq 1 */
            for (int i_11 = 1; i_11 < 8; i_11 += 1) 
            {
                var_25 = ((/* implicit */int) min((var_25), (var_1)));
                var_26 = ((/* implicit */unsigned char) var_5);
                arr_35 [i_5] [i_10] [i_11] = ((/* implicit */long long int) var_3);
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */int) 99950175765352232LL);
                            var_28 = ((((/* implicit */int) (signed char)-5)) == (((/* implicit */int) (signed char)-27)));
                        }
                    } 
                } 
                arr_44 [i_5] [i_10] = ((/* implicit */unsigned int) ((unsigned short) ((short) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
            }
            /* vectorizable */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                arr_48 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (+(-99950175765352233LL)));
                var_29 = (+(((/* implicit */int) (short)-11989)));
                var_30 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)36)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            arr_52 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_25 [i_16] [i_16] [i_5] [i_5 - 2] [i_5])) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) max((arr_36 [i_16] [i_5 - 2] [i_16]), (arr_36 [i_16] [i_5 - 1] [i_16]))))));
            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [9ULL]))));
            var_32 = ((/* implicit */unsigned char) var_3);
            arr_53 [i_16] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_22 [i_5] [i_16] [i_16])) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_5])) >= (var_3)))) : (((int) var_8))))));
        }
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)41)) ? (-863484283) : (((/* implicit */int) arr_38 [i_18] [i_17] [i_5])))))))));
                var_34 = ((/* implicit */unsigned int) ((arr_21 [i_5] [i_5 - 2]) >= (((/* implicit */unsigned long long int) ((99950175765352232LL) << (((arr_14 [i_5] [i_5]) - (4246915294U))))))));
            }
            var_35 = ((/* implicit */long long int) arr_11 [i_5 - 1]);
        }
        /* vectorizable */
        for (unsigned int i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-3727321231378388399LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_19] [i_5 + 2] [i_5 - 2]))) : ((-(-7869332451362441231LL)))));
            var_37 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1))));
        }
        arr_62 [i_5] [i_5] = ((/* implicit */long long int) (short)-8055);
    }
    for (unsigned char i_20 = 3; i_20 < 18; i_20 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned long long int) var_2);
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_73 [i_20] [i_23] [i_22] [i_22] = ((/* implicit */unsigned int) (unsigned short)16128);
                    var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967290U)))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_24 = 2; i_24 < 18; i_24 += 1) 
                {
                    var_40 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_68 [i_24] [i_22] [(_Bool)1] [(signed char)4])) || (((/* implicit */_Bool) arr_63 [i_20])))));
                    var_41 = ((/* implicit */signed char) var_9);
                }
                for (int i_25 = 0; i_25 < 19; i_25 += 2) 
                {
                    var_42 = ((/* implicit */long long int) ((((arr_66 [i_20]) / (((/* implicit */int) var_7)))) * (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_65 [i_21]))))));
                    arr_78 [i_20] [i_20] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(3171868023U))))));
                    arr_79 [i_20] [i_20] [i_22] [i_22] [i_22] [i_25] = ((/* implicit */unsigned char) (+(arr_66 [i_20 - 3])));
                    var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) arr_65 [i_20 - 1]))));
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_70 [i_20] [i_20] [i_20] [i_20] [i_20]) ? (arr_72 [i_25] [i_22] [i_21] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_21])))))) && (((/* implicit */_Bool) ((unsigned char) arr_68 [i_20] [i_21] [(signed char)12] [i_25])))));
                }
            }
        }
        for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 3) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned long long int) arr_71 [i_26] [i_20]);
            var_46 = ((/* implicit */signed char) min(((-((-(((/* implicit */int) (short)-18147)))))), (((/* implicit */int) (((~(((/* implicit */int) arr_83 [i_26] [i_20] [i_26])))) >= (((((/* implicit */_Bool) 3171868023U)) ? (((/* implicit */int) (unsigned short)6144)) : (var_3))))))));
            arr_84 [i_20] [i_26] = ((/* implicit */unsigned short) max((max((arr_80 [i_26] [i_26]), (((/* implicit */short) arr_65 [i_20 - 2])))), (((/* implicit */short) ((_Bool) (short)18147)))));
            /* LoopSeq 3 */
            for (signed char i_27 = 0; i_27 < 19; i_27 += 2) 
            {
                arr_88 [i_26] [i_26] [i_26] [i_20] = ((/* implicit */unsigned int) arr_77 [i_20] [i_26] [i_20] [i_20] [i_20]);
                var_47 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (max((arr_74 [i_27] [i_26] [i_27] [(short)3]), (((/* implicit */unsigned int) arr_66 [i_26])))))) & (((/* implicit */unsigned int) (~(var_10))))));
            }
            /* vectorizable */
            for (unsigned char i_28 = 0; i_28 < 19; i_28 += 4) 
            {
                var_48 = ((/* implicit */unsigned char) arr_90 [i_26] [i_26] [(signed char)10]);
                arr_91 [i_20] [i_20] [i_26] = ((/* implicit */unsigned int) 0ULL);
            }
            /* vectorizable */
            for (unsigned int i_29 = 1; i_29 < 17; i_29 += 1) 
            {
                arr_95 [11] [i_26] [11] [i_20] = ((/* implicit */int) arr_75 [3] [i_26] [i_26] [(unsigned char)9]);
                /* LoopSeq 3 */
                for (int i_30 = 2; i_30 < 17; i_30 += 2) /* same iter space */
                {
                    arr_98 [i_26] [i_30] [i_30] |= ((/* implicit */int) arr_83 [i_30] [i_29] [i_30]);
                    var_49 = (+(1811242190));
                    /* LoopSeq 1 */
                    for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
                    {
                        var_50 = ((/* implicit */unsigned int) (+(arr_66 [i_20 + 1])));
                        var_51 = ((((/* implicit */int) (signed char)-84)) * (((/* implicit */int) (unsigned short)32640)));
                        var_52 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_1))) + ((-(((/* implicit */int) var_2))))));
                    }
                }
                for (int i_32 = 2; i_32 < 17; i_32 += 2) /* same iter space */
                {
                    var_53 = ((/* implicit */short) arr_71 [i_29] [i_32]);
                    var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6895960314930124298ULL)) ? (((/* implicit */int) arr_64 [i_20 - 2])) : (((/* implicit */int) arr_81 [i_29 - 1] [i_26] [i_32 + 1]))));
                }
                for (unsigned char i_33 = 0; i_33 < 19; i_33 += 4) 
                {
                    var_55 = ((/* implicit */signed char) ((short) arr_85 [i_29 - 1] [i_26] [i_20 - 3] [i_20]));
                    arr_107 [(unsigned char)0] [i_26] [(short)2] [i_26] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-10949)))));
                }
                var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) ((((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)37)))) | (arr_103 [i_20] [i_26] [i_20] [i_26] [i_26]))))));
            }
        }
        var_57 *= ((/* implicit */unsigned char) ((((arr_99 [i_20] [10] [i_20 + 1] [10] [10]) >> (((((/* implicit */int) arr_87 [i_20])) - (207))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65499)))))));
    }
    var_58 = ((/* implicit */unsigned char) var_1);
}
