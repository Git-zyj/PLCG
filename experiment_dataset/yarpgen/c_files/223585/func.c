/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223585
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_15 = ((max(((-(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((((/* implicit */long long int) 262143)) < (2527436875157277150LL)))))) | ((~(((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 2] [i_1 + 1])))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                arr_7 [i_0] [i_0] [i_1 - 2] [(unsigned char)11] = ((/* implicit */unsigned short) var_14);
                var_16 = ((/* implicit */_Bool) (-(8209994979652713524ULL)));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 4; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_12 [i_3])), (max((arr_11 [i_4] [2LL] [i_4 + 3] [i_4 + 1] [i_4 - 2] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_4 + 1] [(unsigned char)3] [13LL] [i_1 - 3] [(unsigned short)0])))))))));
                            arr_13 [(unsigned char)4] [(unsigned char)5] [i_3] [(unsigned char)7] [i_2] [(signed char)2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0])) & (((((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) << ((((-(((/* implicit */int) var_3)))) + (24)))))));
                            var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_3 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1]))))));
                        }
                    } 
                } 
            }
            var_19 -= ((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)-72)))), ((-(((/* implicit */int) (unsigned char)2))))));
            var_20 = min((((/* implicit */unsigned long long int) ((arr_2 [i_1] [i_1 + 3] [i_1 - 2]) == (arr_2 [9LL] [i_1 + 1] [i_1])))), (arr_2 [i_0] [i_1 + 1] [i_0]));
        }
        for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (((+(18446744073709551614ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) var_3))))))))))))));
            var_22 = ((((/* implicit */_Bool) ((((arr_6 [i_5 - 2] [i_5] [i_0] [i_5 + 2]) + (2147483647))) << (((((arr_6 [i_5 - 2] [i_5] [7ULL] [i_5]) + (1262316212))) - (30)))))) ? ((+(((/* implicit */int) (unsigned char)231)))) : ((-(arr_6 [i_5 + 1] [i_5] [i_5] [i_5]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_6 = 3; i_6 < 13; i_6 += 4) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 - 1]))) == (((8461508427678911438ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) arr_12 [i_6]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) & (6047037572001448585ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_25 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_5] [i_6 - 1] [i_6 - 1] [i_0]))) | (-1606490794713173229LL)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        arr_24 [i_6] [i_7 - 1] [i_6] [i_5 - 3] [i_6] = ((/* implicit */int) (-(var_1)));
                        var_26 = ((/* implicit */signed char) (-((-(arr_11 [i_0] [i_0] [i_0] [8LL] [i_0] [i_0])))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_0))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_5] [i_6] [(signed char)1] [i_5 - 1])) << (((12399706501708103030ULL) - (12399706501708103014ULL)))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) var_4);
                        var_29 = ((/* implicit */int) arr_1 [i_5 - 3]);
                        arr_29 [(unsigned short)6] [i_6] [i_6 - 3] [i_6] [i_6 - 2] [(unsigned char)2] = ((/* implicit */unsigned char) arr_15 [i_6 - 3] [i_7 - 1] [i_5 - 3]);
                        var_30 = ((/* implicit */unsigned long long int) arr_27 [i_5 - 1] [i_5 - 1]);
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_31 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)3)) : (-405883675)))));
                    arr_33 [i_6] = (~(((/* implicit */int) (_Bool)1)));
                }
                /* LoopSeq 4 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) -405883675)) : (arr_20 [(_Bool)0] [i_5 - 3] [i_5] [(unsigned short)11])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_0] [6ULL] [i_6 + 1] [6ULL] [i_11])) : (((/* implicit */int) (signed char)84)))) : (((((/* implicit */_Bool) 35184372088831ULL)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (unsigned char)253))))));
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)36))))) ? (arr_30 [i_6] [4ULL]) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)28)))))));
                        var_34 += ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)52))))));
                    }
                    for (long long int i_13 = 2; i_13 < 11; i_13 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        var_36 = ((/* implicit */long long int) ((var_10) ? (((/* implicit */int) arr_9 [i_5 - 1] [0LL] [i_5] [(_Bool)1])) : (((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
                {
                    arr_43 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) -783414295))));
                    arr_44 [3] [i_6] [i_6] [3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_36 [i_6]) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                    var_37 = ((((/* implicit */_Bool) arr_32 [i_0] [i_5 - 3] [i_6] [i_5 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_5 - 2] [i_6] [(_Bool)1]))) : (arr_11 [i_14] [i_5 + 3] [i_6] [i_14] [i_6 - 1] [i_5 + 3]));
                    var_38 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_0] [i_5] [i_6] [i_6 - 3])) << (((((/* implicit */int) arr_18 [9LL] [i_5] [7ULL] [i_6 + 1])) - (176)))));
                }
                for (signed char i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    arr_48 [i_6] [(_Bool)1] [i_5] [0ULL] [i_15] = ((/* implicit */unsigned char) var_1);
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_14 [(_Bool)1])))))))));
                    /* LoopSeq 4 */
                    for (int i_16 = 0; i_16 < 14; i_16 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((((/* implicit */_Bool) 17879936313757871296ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)220)))))) : ((+(var_9)))))));
                        var_41 = ((((/* implicit */_Bool) arr_34 [i_5 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_34 [i_5 - 3]));
                    }
                    for (int i_17 = 0; i_17 < 14; i_17 += 4) /* same iter space */
                    {
                        var_42 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_36 [i_0]))));
                        var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0] [i_17])))))));
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) arr_40 [(_Bool)1] [i_5 - 1] [i_5 + 2] [(_Bool)0] [i_17] [i_6 + 1] [i_17]))));
                        var_45 = ((/* implicit */unsigned long long int) var_1);
                        var_46 -= ((/* implicit */unsigned char) (-((+(((/* implicit */int) (signed char)-92))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) var_10))));
                        var_48 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_6] [4ULL] [12] [i_6])) ? (((/* implicit */int) arr_18 [(unsigned short)13] [i_6] [i_5] [(unsigned short)8])) : (((/* implicit */int) (unsigned char)64))))));
                        arr_56 [i_6] = ((/* implicit */long long int) arr_54 [i_18] [i_15] [i_6] [i_5 - 2] [i_5 - 2] [i_0] [i_0]);
                    }
                    for (int i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned long long int) var_10);
                        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13756401006261512863ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) : (240329125232546193ULL)));
                    }
                    var_51 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_5 + 3] [i_6 - 2] [i_15]))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    var_52 = ((/* implicit */int) arr_19 [i_0] [i_5 + 2] [i_6] [i_20]);
                    var_53 += ((/* implicit */unsigned short) (+(arr_35 [i_0] [i_0] [(unsigned short)10] [i_6 - 2] [i_0] [i_20])));
                }
                var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_5 + 1] [i_6 - 1] [i_6] [i_6] [i_6 - 3])))))));
            }
        }
        var_55 = ((/* implicit */unsigned char) arr_59 [(unsigned char)4] [i_0]);
        var_56 = ((/* implicit */int) max((6068577465452491865ULL), (arr_34 [i_0])));
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 1) 
        {
            for (int i_22 = 0; i_22 < 14; i_22 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 14; i_23 += 4) 
                    {
                        for (signed char i_24 = 1; i_24 < 12; i_24 += 1) 
                        {
                            {
                                arr_73 [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)88))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_23])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_3 [i_21] [i_23] [i_21]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0])), (var_3))))) : (arr_35 [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_24 + 2] [i_22] [i_24 - 1]))) : (((/* implicit */long long int) (+(arr_53 [i_24] [i_24 + 1] [i_24 + 2] [i_24 - 1] [i_22])))));
                                var_57 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_0] [i_22] [10ULL]))) != (((((arr_9 [i_0] [i_23] [4LL] [i_23]) ? (409502239523478158ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))))) * ((-(arr_11 [i_24] [i_22] [i_0] [i_22] [i_21] [i_0])))))));
                            }
                        } 
                    } 
                    arr_74 [i_22] [i_21] [i_21] [i_0] = ((/* implicit */unsigned long long int) max(((-(var_12))), (((/* implicit */int) (unsigned char)231))));
                    var_58 = arr_17 [i_0] [i_21] [i_22];
                    var_59 = ((/* implicit */unsigned char) arr_54 [i_0] [i_0] [i_21] [i_21] [(unsigned char)11] [(signed char)6] [i_22]);
                }
            } 
        } 
    }
    for (int i_25 = 0; i_25 < 10; i_25 += 4) 
    {
        var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) var_14))));
        arr_77 [i_25] [(unsigned short)1] = ((/* implicit */unsigned char) (((-(var_1))) != (arr_30 [i_25] [i_25])));
    }
    for (int i_26 = 1; i_26 < 16; i_26 += 1) 
    {
        var_61 = ((/* implicit */unsigned long long int) (unsigned char)164);
        var_62 = ((/* implicit */long long int) 8736983601444343766ULL);
        var_63 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)2933), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_79 [18ULL] [i_26 + 2])) ? (((/* implicit */int) (unsigned short)62602)) : (((/* implicit */int) var_6))))) : (arr_78 [i_26 + 2]))) : (((/* implicit */unsigned long long int) 1711400816853147076LL))));
        var_64 = ((/* implicit */long long int) (-(arr_78 [i_26])));
        var_65 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)0)), (13756401006261512876ULL)));
    }
    var_66 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_0)) : ((+((+(((/* implicit */int) (unsigned short)19120))))))));
    var_67 = min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1))));
    var_68 += ((/* implicit */int) var_14);
}
