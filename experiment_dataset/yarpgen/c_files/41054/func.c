/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41054
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
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-83))))) ? (((/* implicit */int) (signed char)105)) : (-1372742651)))), (arr_2 [(unsigned char)15] [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 20; i_1 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (signed char)75))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114)))))));
            arr_6 [i_0] = ((/* implicit */_Bool) ((signed char) arr_1 [i_0]));
            arr_7 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (signed char)-83)) + (((/* implicit */int) arr_0 [i_1])))));
        }
        for (int i_2 = 3; i_2 < 20; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0]))))) ? (arr_12 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */int) (signed char)74)) != (((/* implicit */int) (unsigned char)52)))))));
                        var_20 = ((/* implicit */unsigned char) (!(arr_0 [i_0 - 2])));
                        arr_18 [i_0] [i_0] [i_2] [i_4] [i_0 + 2] [i_2 - 3] = ((/* implicit */int) (signed char)-79);
                        arr_19 [i_0] [(_Bool)1] [i_3] [i_3] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)50)) > (((/* implicit */int) (short)32767))));
                        var_21 = ((var_11) ? (11710408465389720560ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))));
                    }
                    for (int i_6 = 1; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) arr_20 [i_0]);
                        arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] [i_0] [i_0 - 2] = ((((/* implicit */int) arr_17 [i_6] [i_2 - 3] [i_2] [i_2] [i_3] [(unsigned char)22] [i_6])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_2 - 3] [i_6])) && (((/* implicit */_Bool) ((11624217129409260843ULL) << (((/* implicit */int) arr_14 [i_4] [i_0] [i_0] [i_0])))))))));
                        arr_23 [i_0 - 1] [i_2] [i_0 - 1] [i_4] [i_0] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_20 [i_0])) : (((arr_14 [i_2] [i_0] [i_0] [5]) ? (((/* implicit */int) arr_16 [i_0] [i_2 - 2])) : (((/* implicit */int) (signed char)64)))))))));
                        var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-43))))) > ((+(((((/* implicit */int) (signed char)69)) & (((/* implicit */int) (signed char)-87)))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) (short)32767)) > (arr_12 [i_0] [i_2])))) & (((/* implicit */int) arr_9 [(unsigned short)4])))), (((((/* implicit */_Bool) 700428463U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_6 + 1])))))))));
                    }
                    for (int i_7 = 1; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        arr_26 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 13417182936491956618ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0]))) : (3594538814U))), (((/* implicit */unsigned int) var_8))));
                        arr_27 [i_0] [i_2] [i_4] = ((/* implicit */short) min((3594538814U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3594538814U), (((/* implicit */unsigned int) arr_9 [i_0]))))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (2133696663) : (((/* implicit */int) arr_5 [i_3])))) : (((int) (unsigned char)159)))))));
                    }
                    arr_28 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((((/* implicit */int) (signed char)50)) % ((+(((/* implicit */int) arr_10 [i_2])))))) : (((/* implicit */int) max(((short)-17343), (((/* implicit */short) arr_25 [i_0] [i_0] [i_0 + 2])))))));
                    var_25 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)185))));
                    arr_29 [i_0 - 2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_0)) | (1170120277))) & ((-(-1470147622))))) + ((~(((/* implicit */int) (unsigned char)10))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_34 [9] [i_2 + 2] [i_0] [i_3] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) <= (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_3] [i_0] [i_3] [(unsigned short)23]))))) >= (241699320U))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        arr_37 [(unsigned short)1] [i_0] [i_3] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (+((-2147483647 - 1))));
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 + 3]))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-121)) && (((/* implicit */_Bool) arr_1 [(unsigned short)4])))))));
                        arr_42 [i_10] [i_2 - 2] [i_3] [i_0] [i_2 - 2] [i_8] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)124))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        arr_47 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32754)) - (((/* implicit */int) arr_30 [i_0 + 1]))));
                        arr_48 [i_2] [i_2 - 2] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-64)) < (((((/* implicit */_Bool) 443214007)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (short)-32767))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned char)157))));
                    }
                    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) 680081666)), (min((((/* implicit */unsigned long long int) (unsigned char)128)), (0ULL)))))));
                        arr_52 [i_12 - 1] [i_0] [i_3] [i_2 + 3] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_8]))) : (4006386512065801258ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_8 [i_0] [i_2 + 3])) : (((/* implicit */int) (unsigned char)102))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)157)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 14440357561643750378ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32756))) <= (18446744073709551615ULL)))))))));
                        arr_53 [i_0] [i_2 - 1] [i_3] [i_0 + 2] [i_2] [i_2 + 2] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_0 - 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-106))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 2] [i_0] [i_2 + 3]))) * (4294967295U)))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2 - 1] [i_3]))) & (21U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))) >= (((/* implicit */int) (signed char)-75))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) arr_11 [i_0 - 2] [i_2 + 4] [i_13 + 1]);
                        var_32 = ((/* implicit */unsigned char) arr_32 [i_0] [i_2] [i_3] [i_8]);
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 21; i_14 += 3) 
                {
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_50 [i_14 + 2] [i_14 + 2] [i_14 - 1] [i_14 + 2] [i_14] [i_14 + 2])), ((-(((/* implicit */int) (unsigned char)70))))))) ? (max((4294967271U), (((/* implicit */unsigned int) (unsigned char)177)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)122)) | (((/* implicit */int) (unsigned char)247)))))));
                            var_34 = -1684211508;
                            var_35 -= ((((/* implicit */_Bool) (signed char)-41)) ? ((((_Bool)0) ? (((/* implicit */int) arr_40 [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_15] [i_0 + 2])) : (((/* implicit */int) arr_40 [i_0 + 1] [i_2] [i_3] [i_14] [i_15] [i_15])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_2 + 2] [(unsigned char)10] [i_3] [i_15] [i_15]))))));
                        }
                    } 
                } 
            }
            for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        {
                            var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27195)) - (((/* implicit */int) var_7))))) ? (((4294967294U) | (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_43 [i_2 - 3] [i_18] [i_18] [i_0 + 2])))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (short)-32767))));
                            arr_71 [i_0 - 1] [i_0] [i_16] [i_16] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) arr_35 [i_0 + 2] [i_18] [i_2 - 1] [i_17] [i_0 - 1] [i_2]))))) * (((((/* implicit */_Bool) 4847461632226434488ULL)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_0] [i_2 - 3] [i_16] [i_17] [i_0] [i_18])) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)255))))))) ? (arr_59 [i_0] [i_17] [i_18]) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_16)))) < (((/* implicit */int) (short)-32765)))))));
                        }
                    } 
                } 
                arr_72 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)32007)), (min((arr_61 [i_0 - 1] [i_2 + 3]), (arr_61 [i_0 - 2] [i_2 + 4])))));
            }
            arr_73 [i_0] [15] = ((/* implicit */unsigned char) 14440357561643750330ULL);
            /* LoopSeq 1 */
            for (unsigned char i_19 = 1; i_19 < 23; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    arr_80 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-701984585) == (((/* implicit */int) (unsigned short)33504)))))) <= (max((13599282441483117122ULL), (((/* implicit */unsigned long long int) arr_78 [i_0] [i_2] [i_0] [i_0])))))))));
                    var_39 *= ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)126))))) | (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)32007)))));
                }
                var_40 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_0 - 2] [i_2 - 2] [i_19 - 1] [i_0 - 2] [i_0])) ? (3786814207U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))))), (12032511831868498678ULL)));
                var_41 = max((((/* implicit */int) (unsigned char)52)), ((+(((/* implicit */int) (signed char)32)))));
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) arr_4 [i_19] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_74 [i_0 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((6414232241841052937ULL) << (((508153088U) - (508153064U)))))))))) : (((((/* implicit */_Bool) max(((unsigned short)51174), (((/* implicit */unsigned short) arr_50 [i_0] [i_2 + 4] [i_19] [i_0 + 1] [i_2] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)28))))) : (((((/* implicit */_Bool) (signed char)104)) ? (782594214U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [2] [i_19 + 1] [i_19])))))))));
            }
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)9563), (((/* implicit */unsigned short) (_Bool)0))))) ? (((((/* implicit */_Bool) min(((signed char)-4), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) arr_8 [i_0] [6])) : (254931753))) : (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) var_6))))))) : (((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)9)) > (((/* implicit */int) arr_45 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_61 [(_Bool)0] [(_Bool)0])) && ((_Bool)1))))))));
        }
        var_44 = ((/* implicit */signed char) arr_11 [(unsigned char)4] [(short)6] [i_0 - 1]);
    }
    var_45 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */int) (signed char)-29)) % (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (signed char)112)))));
    var_46 = ((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
