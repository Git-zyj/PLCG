/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40238
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
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_0] [i_0])), ((((+(((/* implicit */int) (unsigned char)96)))) & (((/* implicit */int) (short)-1))))));
        var_18 = arr_2 [i_0 - 4];
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_2)), (var_9)));
                            arr_12 [i_0] [i_3 - 1] &= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) var_12)), (arr_11 [i_0] [i_1] [(unsigned char)0] [(unsigned short)6] [i_4])))) % (min((((/* implicit */int) (short)16379)), ((+(((/* implicit */int) (unsigned char)168))))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (min((arr_7 [i_1] [i_2] [i_3]), (((/* implicit */unsigned short) arr_4 [i_0] [(short)12] [(unsigned char)5]))))));
                        }
                        var_21 = min((((/* implicit */short) arr_9 [i_3 - 1] [i_2] [i_0 - 1] [9ULL] [i_0] [i_0 - 1])), (arr_3 [i_2] [(signed char)11]));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_16 [i_0 - 2] [(unsigned short)4] = min((((/* implicit */unsigned long long int) min((arr_15 [i_0 - 1]), (((/* implicit */unsigned short) max((var_16), ((short)-8351))))))), (18446744073709551615ULL));
            var_22 = ((/* implicit */unsigned short) ((1ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_5] [i_5] [(unsigned char)2] [i_5] [i_5]))))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            arr_20 [i_0] [11ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((arr_4 [i_0] [(unsigned char)12] [i_6]), (((/* implicit */short) (unsigned char)95))))), ((~(arr_6 [(signed char)11] [i_6] [(signed char)0])))));
            var_23 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_6] [i_6] [(_Bool)0]);
            arr_21 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1))))), (min((arr_10 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_6] [i_6]), (arr_10 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_6] [i_6] [12ULL])))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) 0ULL))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_8 = 1; i_8 < 12; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) arr_0 [i_7] [(unsigned char)12]);
                            arr_33 [i_0] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) arr_8 [i_0] [(unsigned short)2] [i_0 - 1] [i_8 + 1] [2LL] [i_7]);
                            var_26 = ((/* implicit */unsigned int) var_1);
                            var_27 += ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 4] [11ULL]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */short) var_2);
                            var_29 = ((/* implicit */short) (unsigned char)11);
                            var_30 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 2; i_13 < 11; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) arr_5 [i_7]);
                            var_32 = ((/* implicit */unsigned char) ((arr_36 [i_0] [i_13 - 1] [i_0 - 3] [i_14]) >> (((575100857U) - (575100846U)))));
                            var_33 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [(signed char)7] [i_13] [(unsigned char)11] [(unsigned char)3] [(unsigned char)8] [(unsigned short)0])) >= (((/* implicit */int) (short)-28445))))), (min((561850441793536ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)85)) && (((/* implicit */_Bool) var_6))))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */_Bool) 18446744073709551615ULL);
                var_35 = (unsigned char)86;
            }
            arr_46 [i_0 - 1] = ((/* implicit */short) arr_25 [i_0 - 4] [i_7]);
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
                {
                    var_36 ^= ((/* implicit */unsigned long long int) (unsigned char)255);
                    arr_52 [i_0] [i_0] [8LL] [i_17] = ((/* implicit */unsigned char) (short)10783);
                    arr_53 [i_0 - 3] [i_16] [i_16] = ((/* implicit */signed char) (unsigned char)120);
                }
                for (signed char i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
                {
                    arr_57 [(_Bool)1] [i_16] = ((/* implicit */unsigned char) (signed char)-51);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_19 = 2; i_19 < 10; i_19 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_7] [i_7] [i_16] [i_18] [i_19]);
                        var_38 = ((/* implicit */unsigned int) (unsigned short)54435);
                        var_39 = ((/* implicit */unsigned short) arr_1 [i_7] [(unsigned char)8]);
                    }
                    /* vectorizable */
                    for (unsigned char i_20 = 2; i_20 < 9; i_20 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_0 - 3] [i_18] [i_20 + 1]))));
                        var_41 -= ((/* implicit */short) ((arr_47 [i_0] [i_0 + 2] [i_20 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_62 [i_0] [i_0] [i_7] [i_16] [5] [i_20 + 1] = ((/* implicit */short) arr_26 [i_7] [i_16] [i_18] [i_20]);
                    }
                    for (unsigned char i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        arr_67 [i_0] [i_0] [i_0] [(unsigned char)3] [i_0 + 2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) - ((+(((/* implicit */int) arr_19 [i_0] [i_21]))))))), (var_0)));
                        var_42 = ((/* implicit */short) arr_37 [i_0] [i_7] [5LL] [5LL] [i_7]);
                        var_43 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((min((arr_22 [(short)8] [i_7] [(short)8]), (((/* implicit */short) (unsigned char)244)))), (((/* implicit */short) arr_2 [i_7]))))), (arr_10 [i_0] [i_18] [i_7] [i_7] [i_16] [i_18] [i_18])));
                    }
                    var_44 = ((/* implicit */short) (~((+(((/* implicit */int) var_15))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) min((var_45), ((unsigned short)10588)));
                    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) arr_17 [i_0 + 1] [i_0 + 2]))));
                    var_47 = ((/* implicit */unsigned short) (unsigned char)255);
                    arr_70 [i_0 + 2] [i_16] [i_22] = (unsigned char)214;
                }
                for (unsigned char i_23 = 3; i_23 < 11; i_23 += 1) 
                {
                    arr_74 [i_23 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_0] [i_7] [i_7] [i_16] [12])) * (((/* implicit */int) arr_68 [i_0] [i_0] [(unsigned short)9] [i_0]))));
                    arr_75 [(unsigned char)10] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) (short)-24963);
                }
            }
            for (short i_24 = 0; i_24 < 13; i_24 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_25 = 0; i_25 < 13; i_25 += 3) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned short) (unsigned char)0);
                    var_49 = ((/* implicit */unsigned char) max((arr_47 [(unsigned char)6] [i_24] [i_25]), (((/* implicit */unsigned long long int) var_8))));
                    var_50 = ((/* implicit */short) ((min((18215605988272049348ULL), (((/* implicit */unsigned long long int) (short)32767)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_7] [i_25] [i_25] [(unsigned char)12])))));
                    var_51 -= ((/* implicit */unsigned char) min((arr_61 [i_0] [i_7] [i_24] [i_24] [i_24] [(unsigned short)3] [i_25]), (((/* implicit */short) min((var_8), (((/* implicit */signed char) (_Bool)1)))))));
                    arr_82 [i_0] [3ULL] [i_0] [3ULL] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_24])), (var_0)))));
                }
                for (unsigned char i_26 = 0; i_26 < 13; i_26 += 3) /* same iter space */
                {
                    arr_85 [i_0 - 2] [(signed char)8] = ((/* implicit */long long int) min((arr_22 [i_0 - 2] [i_7] [i_26]), (((/* implicit */short) (unsigned char)96))));
                    var_52 = max((max((max((((/* implicit */unsigned long long int) var_3)), (var_5))), (((/* implicit */unsigned long long int) (unsigned char)231)))), (((/* implicit */unsigned long long int) arr_84 [i_26])));
                    var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) min((min((arr_51 [i_0 - 3] [5ULL] [i_0 + 1] [i_0]), (arr_51 [i_0 - 4] [i_0 - 2] [i_0 - 4] [i_0]))), (((/* implicit */unsigned int) (unsigned char)174)))))));
                    arr_86 [i_7] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_77 [i_0] [i_0 - 3]))))));
                    var_54 = ((/* implicit */unsigned int) 304023864834546524ULL);
                }
                var_55 = ((/* implicit */short) arr_65 [12ULL] [i_0] [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 2]);
                var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 4] [9U])) || (((/* implicit */_Bool) min((arr_28 [(signed char)8] [i_7] [i_24] [i_7] [i_24]), (((/* implicit */unsigned long long int) var_2))))))))));
                var_57 = ((/* implicit */_Bool) arr_83 [i_0 + 2] [i_0 - 4] [i_0] [i_0 - 1]);
            }
        }
        for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 2) /* same iter space */
        {
            arr_90 [i_0] [i_27] = ((/* implicit */short) (unsigned char)84);
            var_58 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_80 [i_0 - 2] [i_0 + 2] [(unsigned short)12] [i_0 - 2]))));
            /* LoopNest 3 */
            for (unsigned char i_28 = 4; i_28 < 9; i_28 += 4) 
            {
                for (unsigned short i_29 = 0; i_29 < 13; i_29 += 1) 
                {
                    for (unsigned char i_30 = 0; i_30 < 13; i_30 += 1) 
                    {
                        {
                            var_59 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_2 [(signed char)1]), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)241)) >= (((/* implicit */int) arr_99 [7U] [7U] [7U] [4] [i_30])))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_56 [i_0] [i_0] [i_0 - 3] [i_0] [(unsigned char)2] [i_0])), (arr_93 [i_27] [(signed char)8] [(unsigned char)1])))), (var_6)))));
                            var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) ((((((/* implicit */int) arr_93 [i_0 + 2] [i_0 + 2] [i_28 - 2])) | (((/* implicit */int) var_7)))) ^ (((/* implicit */int) (unsigned char)185)))))));
                            arr_101 [(unsigned short)8] [i_28 - 2] [i_29] = ((/* implicit */unsigned short) var_5);
                        }
                    } 
                } 
            } 
            arr_102 [i_0] [i_27] = ((/* implicit */unsigned long long int) arr_44 [i_0] [(short)10] [i_0] [i_0 + 1] [i_0] [i_27] [i_27]);
        }
    }
    var_61 = ((/* implicit */short) var_14);
    /* LoopSeq 2 */
    for (short i_31 = 1; i_31 < 15; i_31 += 3) 
    {
        var_62 = ((/* implicit */long long int) arr_103 [(unsigned short)8]);
        var_63 = ((/* implicit */int) arr_105 [i_31]);
        arr_107 [i_31] = ((/* implicit */_Bool) (((+(((/* implicit */int) min(((unsigned short)33027), (((/* implicit */unsigned short) (unsigned char)4))))))) << ((((((-(((/* implicit */int) var_3)))) + (56))) - (25)))));
    }
    /* vectorizable */
    for (unsigned short i_32 = 2; i_32 < 7; i_32 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            for (unsigned char i_34 = 0; i_34 < 10; i_34 += 3) 
            {
                {
                    var_64 = ((/* implicit */short) 811212226162349806ULL);
                    var_65 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (((((/* implicit */unsigned long long int) arr_42 [(unsigned char)2] [i_33] [i_33] [(unsigned short)10] [i_33] [i_33])) | (var_6)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_35 = 2; i_35 < 9; i_35 += 1) 
        {
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                {
                    arr_121 [i_35] [4ULL] [i_36] = ((/* implicit */unsigned long long int) arr_91 [i_36]);
                    var_66 = ((/* implicit */_Bool) var_16);
                    var_67 = ((/* implicit */unsigned short) arr_37 [i_32] [i_32] [i_32 - 1] [i_35] [i_36]);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_37 = 1; i_37 < 12; i_37 += 3) 
    {
        for (unsigned long long int i_38 = 2; i_38 < 12; i_38 += 3) 
        {
            {
                var_68 = ((/* implicit */signed char) min((var_68), (((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)148)), ((unsigned short)25394))))))), (arr_106 [i_38]))))));
                var_69 &= ((/* implicit */unsigned int) min(((~(var_6))), (((/* implicit */unsigned long long int) arr_51 [i_38 - 2] [i_38 - 2] [i_38] [12U]))));
            }
        } 
    } 
}
