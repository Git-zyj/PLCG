/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223936
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_9))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) arr_5 [i_2]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_12))));
                            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) var_1)) % (arr_6 [i_0] [i_3] [i_0])))));
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_16 [(signed char)1] [i_1] [i_0 + 1] [i_3] [i_1]);
                        }
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3])) && (((/* implicit */_Bool) var_9))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 24; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) var_6);
                        arr_21 [i_0] [i_0] [i_2] [i_6 + 1] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) -941925104055331442LL))))), (-568798716)));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) var_2)) >= (((((/* implicit */_Bool) (+(404209028)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50646)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_6)) ? (-404209028) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) && (((/* implicit */_Bool) var_10))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [0LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_1);
                            var_22 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)255), ((unsigned char)0)))) == (((/* implicit */int) arr_7 [i_0] [13LL]))))), (min((-941925104055331421LL), (((/* implicit */long long int) (signed char)-5))))));
                            arr_27 [i_0] [15ULL] [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 3] [i_0])) ? (var_6) : (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */long long int) min((((/* implicit */int) arr_9 [i_0] [15ULL] [i_1 - 1] [i_2] [i_7] [i_8])), (404209028)))) : (8828538395711972336LL)))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_0 + 1] [i_0] [(signed char)7] [(signed char)7] [(signed char)7] = ((/* implicit */int) ((arr_24 [i_0] [i_1] [i_2] [i_7] [i_9] [i_9]) && (((/* implicit */_Bool) ((((min((((/* implicit */int) var_12)), (var_2))) + (2147483647))) << (((((((/* implicit */unsigned int) 1027680845)) % (var_1))) - (1027680845U))))))));
                            arr_31 [i_0] [i_1 - 3] [i_2] [i_7] [i_0 - 1] [i_1 - 3] [i_0] = ((/* implicit */int) min((arr_19 [i_0] [i_0] [i_7] [i_0]), (((/* implicit */unsigned char) var_10))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) arr_5 [i_2]);
                        var_24 = ((/* implicit */short) arr_23 [i_1] [i_1 + 1]);
                    }
                    /* vectorizable */
                    for (signed char i_11 = 2; i_11 < 23; i_11 += 4) 
                    {
                        arr_39 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(var_9)));
                        var_25 = ((/* implicit */long long int) 71110464892504453ULL);
                        var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_11 - 2] [i_1 - 2] [i_11] [i_1 - 2] [i_0 - 1])) ^ (((/* implicit */int) arr_8 [i_11 - 1] [i_1 - 3] [i_11] [i_1 + 1] [i_0 + 1]))));
                    }
                    arr_40 [i_0] [i_1] [i_2] = var_11;
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 267752239U)) ? (-404209028) : (-813345246))) ^ (((/* implicit */int) var_12))));
    var_28 = ((/* implicit */int) min((var_5), (((/* implicit */long long int) ((-404209028) % (1493808229))))));
    /* LoopSeq 4 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_43 [i_12] [i_12] = ((/* implicit */short) arr_5 [i_12]);
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                {
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-9)) % (var_7))))));
                    arr_49 [i_12] [i_13] [i_14] [(signed char)10] = ((/* implicit */signed char) var_0);
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        arr_53 [i_12] [(unsigned short)0] [i_12] [i_14] [i_15] [i_15] = (i_12 % 2 == zero) ? (((/* implicit */unsigned char) (((!(arr_24 [i_12] [i_13] [i_14] [i_15] [i_12] [i_12]))) && (((/* implicit */_Bool) (((((+(arr_46 [i_12] [i_13]))) + (9223372036854775807LL))) << (((((var_2) + (1921913140))) - (5))))))))) : (((/* implicit */unsigned char) (((!(arr_24 [i_12] [i_13] [i_14] [i_15] [i_12] [i_12]))) && (((/* implicit */_Bool) (((((((+(arr_46 [i_12] [i_13]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((var_2) + (1921913140))) - (5))) - (3)))))))));
                        arr_54 [i_15] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) -3467971488995122808LL)) && (((/* implicit */_Bool) (unsigned char)0))));
                        arr_55 [i_15] [i_12] [i_12] [(short)6] = ((/* implicit */short) var_5);
                    }
                    for (unsigned short i_16 = 3; i_16 < 10; i_16 += 4) 
                    {
                        arr_58 [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)66))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_47 [i_12] [i_14] [i_13] [i_12]), (var_0)))))));
                        var_30 = ((/* implicit */unsigned long long int) var_2);
                    }
                    arr_59 [2] [(signed char)6] [i_14] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_25 [i_14] [22] [22] [i_12]) + (9223372036854775807LL))) << (((((arr_25 [i_13] [i_13] [14U] [i_14]) + (8309942447220956555LL))) - (7LL))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_17 = 1; i_17 < 11; i_17 += 1) 
        {
            for (long long int i_18 = 2; i_18 < 11; i_18 += 2) 
            {
                for (unsigned char i_19 = 4; i_19 < 11; i_19 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_20 = 1; i_20 < 10; i_20 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)255)), (6)))) % (var_8)));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) 9914092255600249718ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_20] [i_19] [5] [i_17] [i_12])) : (var_2)))) == (((((/* implicit */_Bool) var_6)) ? (arr_15 [i_12] [i_19] [i_18 - 1] [i_17 - 1] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) : (((((/* implicit */_Bool) arr_17 [i_17] [i_17 + 1] [i_18] [i_18] [i_18 + 1] [i_19 - 3])) ? (((((/* implicit */_Bool) arr_45 [i_17] [i_18])) ? (7963534121695865055ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) ((((var_2) + (2147483647))) << (((var_1) - (2981564341U))))))))) && (((/* implicit */_Bool) 10483209952013686561ULL))));
                        }
                        for (int i_21 = 1; i_21 < 10; i_21 += 4) 
                        {
                            arr_72 [i_12] [i_12] [i_12] [i_12] [i_21] = var_0;
                            var_34 += ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_17] [i_17] [i_19] [i_19] [i_19 - 2] [i_19] [i_19 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) (unsigned short)6336))))) : (2372790020512999862ULL)));
                        }
                        for (long long int i_22 = 1; i_22 < 11; i_22 += 4) 
                        {
                            var_35 *= ((/* implicit */signed char) ((var_2) ^ (((/* implicit */int) arr_38 [i_18] [i_19] [i_18] [i_18]))));
                            arr_76 [i_12] [i_12] [i_12] [i_17 + 1] [i_22] = ((/* implicit */unsigned int) arr_32 [8U] [i_12] [i_12] [i_17]);
                        }
                        var_36 = ((/* implicit */unsigned char) max((((/* implicit */int) ((max((var_7), (arr_14 [i_19] [i_12] [i_17 - 1] [i_17] [i_12] [i_12] [i_12]))) == (var_4)))), (arr_60 [i_17] [(short)11])));
                    }
                } 
            } 
        } 
    }
    for (long long int i_23 = 1; i_23 < 15; i_23 += 1) 
    {
        var_37 += ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) arr_77 [i_23 - 1] [i_23])) : (var_5)))) % (9914092255600249718ULL)))));
        var_38 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        /* LoopSeq 3 */
        for (int i_24 = 3; i_24 < 15; i_24 += 1) 
        {
            arr_82 [i_24] [i_23] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)2))))) >= (((arr_37 [14LL] [i_23 - 1] [i_24 - 3] [i_24 - 1] [i_23] [7]) ^ (arr_37 [i_23] [i_23 - 1] [i_24] [i_24 - 1] [i_23] [i_23 + 3])))));
            arr_83 [i_23] [i_23] [i_23] = ((/* implicit */int) var_0);
        }
        for (int i_25 = 3; i_25 < 17; i_25 += 1) 
        {
            arr_88 [i_23] [12] [i_23] = ((/* implicit */int) min((arr_28 [i_23 + 3] [i_23 - 1] [i_23 + 1] [i_25 - 3] [i_25 - 2] [i_25 - 1] [i_23]), (arr_28 [i_23 + 3] [i_23 - 1] [i_23 + 1] [i_25 - 3] [i_25 - 2] [i_25 - 1] [i_23])));
            /* LoopNest 2 */
            for (int i_26 = 3; i_26 < 17; i_26 += 3) 
            {
                for (unsigned int i_27 = 0; i_27 < 18; i_27 += 4) 
                {
                    {
                        arr_95 [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_15 [i_23 + 3] [i_25 + 1] [i_26] [i_26 - 3] [i_23]), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -7))))) ? ((~(arr_35 [i_23] [i_25] [i_26] [i_27]))) : (7))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 71110464892504441ULL)))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_9)) % (min((var_11), (arr_3 [1U]))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))));
                        /* LoopSeq 2 */
                        for (short i_28 = 0; i_28 < 18; i_28 += 4) 
                        {
                            var_40 = max((((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_3 [i_25])))) ? (arr_25 [i_28] [i_27] [i_27] [i_23]) : (((/* implicit */long long int) var_4)))), ((+(arr_3 [4U]))));
                            arr_98 [i_23 + 1] [i_23] [i_23 + 1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_3)), (arr_79 [4] [i_23 - 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_28] [(short)14] [i_23] [i_25 - 3] [i_23])))));
                            var_41 = ((/* implicit */unsigned long long int) arr_90 [i_26] [i_25] [i_27] [i_27]);
                        }
                        for (signed char i_29 = 0; i_29 < 18; i_29 += 1) 
                        {
                            var_42 = (-(4290203235U));
                            arr_101 [i_25] [i_25 - 2] [i_23] [i_25 - 2] [i_29] [i_27] [i_25 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) 8921652769488238292LL))));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-112))))) ? (min((((/* implicit */unsigned int) ((arr_24 [i_23] [i_25] [i_26] [(unsigned short)22] [i_27] [i_29]) && (((/* implicit */_Bool) (signed char)104))))), (var_9))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)250))))), ((+(var_9)))))));
                        }
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) arr_92 [i_27] [i_27] [i_23]))));
                        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_23 - 1])) && (((/* implicit */_Bool) arr_3 [i_23 + 2]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_30 = 2; i_30 < 17; i_30 += 3) 
            {
                for (signed char i_31 = 1; i_31 < 16; i_31 += 4) 
                {
                    {
                        arr_108 [11U] [i_25 + 1] [i_25] [i_23] = ((/* implicit */unsigned int) var_2);
                        var_46 *= ((/* implicit */_Bool) arr_102 [i_23 - 1] [i_25 - 1]);
                        arr_109 [i_23] [i_23] [i_30 - 1] = ((/* implicit */unsigned short) arr_100 [15ULL] [i_23]);
                        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((arr_79 [i_25 - 2] [i_30 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)93))))))))));
                        var_48 = ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_32 = 2; i_32 < 17; i_32 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_33 = 0; i_33 < 18; i_33 += 1) 
            {
                var_49 = ((arr_77 [i_23 + 1] [i_32 - 2]) % (((/* implicit */unsigned int) ((var_2) % (arr_90 [i_23 - 1] [i_23] [i_32] [i_33])))));
                var_50 += ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                var_51 = ((/* implicit */unsigned long long int) var_3);
            }
            for (signed char i_34 = 0; i_34 < 18; i_34 += 1) 
            {
                arr_119 [i_23 + 3] [i_23] [i_23] [i_32] = ((/* implicit */unsigned short) ((arr_4 [i_23] [i_23 - 1] [i_32 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58667)))));
                arr_120 [i_23] = ((/* implicit */unsigned char) var_1);
            }
            arr_121 [i_23 + 1] [i_23] [i_23] = ((/* implicit */long long int) var_7);
            arr_122 [i_23 - 1] [i_23] [i_23] = ((/* implicit */signed char) var_4);
        }
        var_52 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_12 [i_23 + 1] [i_23 - 1] [i_23 - 1] [i_23 + 1] [i_23 + 2] [i_23])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (var_2)));
    }
    for (signed char i_35 = 1; i_35 < 10; i_35 += 1) 
    {
        arr_127 [3] = ((/* implicit */unsigned long long int) ((arr_89 [i_35] [i_35]) >= (((/* implicit */long long int) arr_33 [i_35 - 1] [i_35 - 1] [i_35 - 1] [i_35]))));
        /* LoopNest 2 */
        for (unsigned long long int i_36 = 0; i_36 < 11; i_36 += 4) 
        {
            for (signed char i_37 = 1; i_37 < 8; i_37 += 2) 
            {
                {
                    var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) arr_16 [i_35] [(signed char)8] [i_35] [(signed char)8] [i_37]))));
                    var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) (((!(((/* implicit */_Bool) 2092444784)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_91 [i_36] [i_36]))) : (13889700668331120931ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_91 [i_36] [i_36])) % (((/* implicit */int) arr_91 [i_36] [i_36]))))))))));
                }
            } 
        } 
        arr_132 [i_35] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_103 [i_35 + 1] [i_35 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) : (var_8))) ^ (((/* implicit */unsigned long long int) -3924509783468473148LL))));
        var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) var_10))));
        var_56 += ((/* implicit */unsigned int) (short)32767);
    }
    for (int i_38 = 0; i_38 < 23; i_38 += 1) 
    {
        var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_38] [i_38] [10LL] [7] [i_38])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_38] [i_38] [i_38] [i_38] [0U] [(unsigned char)24] [i_38])) ? (((/* implicit */int) arr_32 [i_38] [i_38] [i_38] [i_38])) : (((/* implicit */int) (signed char)16))))) : (var_11)))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-11)) == (((/* implicit */int) arr_17 [i_38] [i_38] [(short)21] [i_38] [i_38] [(_Bool)1])))) ? ((+(var_11))) : (((((/* implicit */_Bool) var_9)) ? (arr_13 [i_38] [i_38] [(signed char)12] [i_38] [i_38] [i_38] [i_38]) : (arr_13 [i_38] [i_38] [i_38] [i_38] [22LL] [i_38] [i_38]))))))));
        var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_38] [i_38] [i_38] [i_38] [(signed char)9] [9ULL])) << (((((/* implicit */int) var_10)) - (33))))))));
    }
}
