/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236859
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 2])) ? (((unsigned int) arr_0 [i_1 - 2] [i_1 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1 - 2] [i_1 - 1]), (((/* implicit */signed char) arr_4 [i_1 - 1] [i_0 + 1] [i_1]))))))));
                arr_7 [i_1 - 2] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0])))))));
                var_18 = ((/* implicit */short) (signed char)118);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            {
                arr_12 [i_2] = ((/* implicit */_Bool) (signed char)118);
                /* LoopSeq 3 */
                for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_3])), (2021914146))))))) : (((/* implicit */int) (short)-32751))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_23 [(signed char)8] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) 0LL);
                                arr_24 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (signed char)127)), (-7666792194125679863LL))), (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_3 - 1] [i_4] [i_4])) ? (-1786269668574943534LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2 - 2]))) : (0U))))))));
                            }
                        } 
                    } 
                    arr_25 [i_2] [i_3] [i_4] = ((/* implicit */long long int) min((((((/* implicit */int) (short)16376)) * (((/* implicit */int) arr_17 [i_4 - 1] [i_3 + 1] [i_2 + 1])))), (((/* implicit */int) arr_17 [i_4 - 1] [i_3 + 1] [i_2 - 1]))));
                }
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                {
                    arr_28 [i_7] [i_7] [i_7] [(short)18] = ((unsigned char) min((((/* implicit */unsigned short) arr_18 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])), (arr_11 [i_2 - 2] [i_3 - 1])));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)253))));
                    var_21 = ((/* implicit */long long int) arr_9 [i_2]);
                }
                for (long long int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -7588824222891227936LL)) ? (arr_26 [i_8]) : (((/* implicit */int) arr_13 [i_2 + 1]))))), (((((/* implicit */_Bool) arr_18 [i_2] [(signed char)3] [i_2] [i_2] [i_2] [i_2])) ? (arr_16 [i_2] [i_2 - 1] [(unsigned short)15] [i_3] [i_8]) : (arr_16 [16LL] [16LL] [16LL] [i_3] [i_3]))))))));
                    arr_31 [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)3840)) < (-2021914146))) ? (min((((/* implicit */long long int) arr_10 [i_8] [i_8] [i_8])), (-31LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-114)))))) ? (((((/* implicit */_Bool) ((int) 1944122168461644609ULL))) ? (var_3) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) 0U))))))) : (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))));
                }
                var_23 = ((/* implicit */short) (unsigned short)45751);
                arr_32 [i_3 - 1] [i_3 - 1] [i_2 - 2] = ((/* implicit */short) min((((/* implicit */long long int) ((signed char) arr_11 [i_2 + 1] [i_2 - 1]))), ((~(max((((/* implicit */long long int) var_6)), (8431264140012848129LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_11 = 2; i_11 < 17; i_11 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) arr_34 [i_11]);
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (-(min((max((-5078306512236329261LL), (var_11))), (arr_36 [i_10] [i_10 - 1]))))))));
                            var_26 = ((/* implicit */signed char) arr_42 [i_9] [16LL] [i_13] [i_12]);
                        }
                        for (unsigned char i_14 = 1; i_14 < 17; i_14 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_37 [i_9] [i_9]))));
                            var_28 = ((/* implicit */unsigned short) arr_48 [i_9] [i_10] [i_10] [i_9] [i_11] [i_9] [i_14]);
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            arr_51 [i_12] [i_10] [i_10] [i_10] [i_15 + 1] |= ((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_40 [i_10] [i_10 - 1] [i_11 - 1] [i_12]))), (max((((/* implicit */int) var_12)), (var_14)))));
                            var_29 = ((/* implicit */long long int) max((var_29), (max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_40 [19LL] [i_11 - 1] [i_10 - 1] [i_10 - 1])), (var_2)))), (min((((((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_9] [i_9])) ? (arr_46 [i_11] [i_10] [i_10] [i_10] [i_15]) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) arr_49 [i_9] [i_10 - 1] [i_12] [i_15 + 1] [i_9] [i_15 + 1]))))))));
                            arr_52 [i_12] |= (~(((((/* implicit */_Bool) arr_49 [i_15 + 1] [i_15 + 1] [i_10 - 1] [i_12] [i_15] [i_11 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-31LL))));
                        }
                        arr_53 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_40 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1])) : ((-(((/* implicit */int) (unsigned char)71))))))) ? (((int) arr_35 [i_10 - 1])) : (((/* implicit */int) var_2))));
                    }
                }
                arr_54 [i_9] [i_9] |= (-((-(((/* implicit */int) arr_42 [i_9] [i_10 - 1] [i_9] [i_10 - 1])))));
                /* LoopSeq 3 */
                for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (-(max((((/* implicit */unsigned long long int) var_11)), (arr_39 [i_9] [i_9] [i_10 - 1] [i_16]))))))));
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        var_31 |= ((/* implicit */int) max((((/* implicit */long long int) min((arr_49 [i_9] [i_16] [i_10 - 1] [i_10 - 1] [i_9] [i_9]), (arr_49 [i_17] [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_10])))), ((+(var_13)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_56 [i_9] [i_9] [(short)13] [i_18])) : (((/* implicit */int) (_Bool)1)))))));
                            arr_63 [i_9] [i_10] [i_9] [i_17] [i_18 + 2] [i_10 - 1] = ((/* implicit */unsigned short) arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                        }
                        for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            var_33 = var_15;
                            arr_67 [i_9] [i_10 - 1] [(unsigned short)15] [i_17] = ((/* implicit */long long int) max((((unsigned long long int) arr_59 [i_9] [i_9] [i_9] [14LL])), (((/* implicit */unsigned long long int) arr_64 [i_10] [i_10]))));
                            arr_68 [i_10 - 1] [i_10 - 1] [i_16] [i_10 - 1] [i_10] = min((-5078306512236329269LL), (((/* implicit */long long int) (!((_Bool)1)))));
                            var_34 = min((((((/* implicit */_Bool) arr_36 [i_9] [i_9])) ? (arr_36 [i_9] [i_9]) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) -2021914156)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 2) 
                        {
                            var_35 |= ((signed char) arr_50 [i_9] [i_9] [i_9] [i_17] [i_17]);
                            var_36 |= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)123))));
                            arr_71 [i_9] [18U] [i_17] [i_20] = ((/* implicit */int) (((_Bool)1) ? (arr_59 [i_9] [i_10] [i_20] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            arr_72 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (arr_47 [i_9] [i_9] [i_9] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10]) : (arr_47 [i_9] [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_9])));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_75 [i_10] [i_21] = ((/* implicit */short) var_4);
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) min((min((-7593484244738800348LL), (((/* implicit */long long int) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (7294125171198648790LL))))));
                            var_38 = ((/* implicit */short) max((min((arr_47 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]), (arr_47 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]))), ((+(arr_50 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_21])))));
                        }
                        var_39 = ((/* implicit */signed char) var_4);
                    }
                    for (long long int i_22 = 2; i_22 < 18; i_22 += 4) 
                    {
                        var_40 |= ((/* implicit */short) arr_60 [i_16]);
                        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) arr_39 [i_9] [i_9] [i_22 - 1] [i_22]))));
                        arr_78 [i_9] [i_16] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_40 [i_9] [i_10] [i_16] [i_9])), (((((/* implicit */_Bool) arr_65 [i_9] [i_10 - 1] [i_16] [i_22] [i_16])) ? ((((_Bool)1) ? (12632977367953117592ULL) : (arr_39 [i_9] [i_10] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_10 - 1] [i_10 - 1] [i_22 + 1] [i_22])))))));
                        /* LoopSeq 2 */
                        for (signed char i_23 = 2; i_23 < 18; i_23 += 1) 
                        {
                            var_42 = max((((((/* implicit */long long int) -2132538544)) / (-7593484244738800348LL))), (((/* implicit */long long int) arr_38 [i_23 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                            var_43 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)123)), (1056573514887035693ULL)));
                        }
                        for (long long int i_24 = 2; i_24 < 19; i_24 += 3) 
                        {
                            var_44 |= ((/* implicit */short) (-(((/* implicit */int) arr_66 [i_24 - 2] [i_9] [(_Bool)0] [i_16] [i_16] [i_10] [i_9]))));
                            var_45 = ((/* implicit */signed char) (~(5813766705756434028ULL)));
                        }
                    }
                }
                /* vectorizable */
                for (long long int i_25 = 1; i_25 < 17; i_25 += 1) 
                {
                    arr_85 [i_9] [i_9] [i_10 - 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)55010)) ? (4998179735931380244ULL) : (((/* implicit */unsigned long long int) -2580973512512479152LL))));
                    arr_86 [i_9] = ((/* implicit */signed char) (unsigned char)127);
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 20; i_26 += 3) 
                    {
                        for (unsigned char i_27 = 3; i_27 < 16; i_27 += 1) 
                        {
                            {
                                arr_91 [i_27] [i_10] [i_10] [i_26] [i_26] = ((/* implicit */int) ((arr_42 [i_27 - 2] [i_27 + 3] [i_27 + 3] [i_27 - 2]) ? (7593484244738800348LL) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10 - 1])))));
                                var_46 = ((/* implicit */signed char) arr_48 [i_25 + 2] [i_27 + 2] [i_25 + 2] [i_10 - 1] [i_10 - 1] [i_9] [i_9]);
                            }
                        } 
                    } 
                }
                for (int i_28 = 1; i_28 < 19; i_28 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_29 = 2; i_29 < 19; i_29 += 3) 
                    {
                        for (unsigned char i_30 = 2; i_30 < 16; i_30 += 1) 
                        {
                            {
                                arr_101 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] [(signed char)14] [i_9])))))))));
                                var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_93 [i_10]) / (arr_93 [i_29 - 2])))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) min((arr_95 [i_10] [i_10 - 1] [(unsigned char)3]), (((/* implicit */unsigned short) ((unsigned char) var_13))))))));
                            }
                        } 
                    } 
                    arr_102 [i_10 - 1] [i_10 - 1] [i_10 - 1] = ((/* implicit */long long int) arr_69 [i_10 - 1]);
                    var_48 |= ((/* implicit */long long int) arr_87 [i_28 - 1] [i_10] [i_10 - 1] [i_9]);
                    arr_103 [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)92)))), ((-(arr_79 [i_10 - 1] [i_10 - 1] [i_28 - 1] [i_28 - 1])))));
                }
                var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_49 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [(signed char)16] [(signed char)16] [(signed char)16] [i_10 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_10 - 1] [(short)4] [(short)4] [i_10 - 1]))) : ((-(arr_59 [i_10] [i_9] [i_10 - 1] [i_10])))));
                arr_104 [i_9] [i_10] [i_10] = ((/* implicit */long long int) arr_41 [i_10] [i_10] [i_9] [i_9]);
            }
        } 
    } 
    var_50 = ((/* implicit */long long int) (~((-(var_10)))));
    var_51 = ((/* implicit */long long int) var_7);
}
