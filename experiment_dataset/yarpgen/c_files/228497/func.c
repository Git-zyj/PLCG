/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228497
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_3 - 3] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [9ULL] [i_0]);
                        arr_13 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) -1)), (((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_1] [i_3] [i_2]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned int) var_9)) : (var_7)))));
                    }
                } 
            } 
        } 
        var_10 = (-((+(((0) | (((/* implicit */int) (signed char)-30)))))));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                var_11 = ((/* implicit */unsigned char) (((!(arr_14 [i_5]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((-1) / (((/* implicit */int) var_6))))), (var_8))))));
                arr_22 [i_5] = ((/* implicit */unsigned int) (((+(var_9))) - (max((((/* implicit */int) (unsigned char)48)), (((8) << (((2842204925U) - (2842204916U)))))))));
                arr_23 [i_4] [i_4] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((1048560U), (821715344U)))))))) / (((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) << (((((/* implicit */int) arr_5 [i_4])) - (55)))))) | ((-(-4063214950023690343LL))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_27 [(_Bool)1] [i_7] = ((/* implicit */signed char) (+(((((/* implicit */int) (short)26143)) - (((/* implicit */int) (short)11))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((-28), (1)))) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))) : (arr_3 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4])) || (((/* implicit */_Bool) var_9))))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -9)) : (5205887204961897945ULL))), (((/* implicit */unsigned long long int) 4293918739U))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_7])) == (((/* implicit */int) (unsigned char)255))))))) : (var_0)));
                /* LoopSeq 3 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    arr_30 [i_7] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) var_9);
                    arr_31 [i_4] [(signed char)4] [i_4] [(unsigned short)8] [i_7] = ((/* implicit */int) (signed char)-1);
                    arr_32 [i_4] [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_4] [i_4] [i_4])) == (((/* implicit */int) (!(((/* implicit */_Bool) 1)))))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                {
                    arr_35 [i_4] [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1048560U)))) ? (((/* implicit */int) arr_25 [i_4] [i_5] [i_7] [i_9 + 1])) : (((/* implicit */int) arr_11 [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1]))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) -328205677)) ? (((/* implicit */int) (signed char)31)) : (var_0)));
                    arr_36 [i_7] [i_5] [i_5] = ((/* implicit */_Bool) 1476595146U);
                }
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 3; i_11 < 11; i_11 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) (unsigned short)65535);
                        arr_41 [i_4] [i_4] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) 11)))))))));
                        arr_42 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)1))));
                    }
                    arr_43 [(short)8] [i_5] [6ULL] [i_7] = ((/* implicit */unsigned int) min(((-(var_8))), (max((var_8), (((/* implicit */unsigned long long int) var_1))))));
                    arr_44 [i_4] [i_4] [i_4] [(signed char)3] [i_7] [i_4] = ((/* implicit */unsigned int) ((134213632ULL) | (((/* implicit */unsigned long long int) 4294967293U))));
                }
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 11; i_12 += 3) 
                {
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            arr_50 [i_7] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))) > ((-(arr_3 [i_4]))))), (var_4)));
                            arr_51 [i_4] [i_5] [i_7] [i_12] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */short) ((max((((/* implicit */int) var_6)), (-706921027))) | (((/* implicit */int) (unsigned short)65535))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                var_17 = (-(-36778027));
                arr_54 [i_14] = ((((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) arr_28 [1U])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (unsigned short)25897)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                var_18 = var_2;
                arr_55 [i_4] [1U] [i_14] [1U] = ((/* implicit */unsigned char) (-(14)));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_8))))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                arr_59 [i_4] [i_4] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((1048583U), (((/* implicit */unsigned int) arr_24 [i_4] [i_15] [i_15])))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((short) 867004100U))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)60644))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_15])))))))));
                arr_60 [i_4] [i_5] [i_15] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)2))));
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    arr_64 [i_4] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) arr_28 [i_4]);
                    var_20 = ((/* implicit */long long int) ((((_Bool) arr_34 [(unsigned short)0] [i_5])) ? ((~(arr_62 [i_4] [i_4]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_4] [i_4])))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (short)-20369)), (1048560U))), (((/* implicit */unsigned int) arr_56 [i_15] [i_5] [i_15]))))) || ((!(((/* implicit */_Bool) arr_38 [i_4] [i_5] [i_15] [i_16] [i_16] [(short)0]))))));
                    var_22 = ((/* implicit */short) (~(-706921035)));
                }
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_23 = min((((/* implicit */long long int) arr_52 [i_4])), (((1903352941422394883LL) | (((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_4))))))));
                    var_24 = ((((/* implicit */_Bool) (unsigned char)11)) ? (((21ULL) ^ (((/* implicit */unsigned long long int) arr_9 [i_4] [i_5] [i_15] [i_17])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                }
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1)) & (((/* implicit */int) (short)-5821))));
            }
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 36778027)) ? (((/* implicit */int) (unsigned short)4486)) : (641767189)));
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 12; i_18 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) arr_25 [i_4] [i_4] [i_4] [i_4]);
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), ((unsigned short)61051)))) ? (((/* implicit */long long int) 2651110399U)) : (-8883735140585829895LL)));
            }
            /* LoopSeq 3 */
            for (int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                arr_71 [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_8)))))) ? ((+(arr_29 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)-26)))), (((((/* implicit */_Bool) 1643856890U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))))));
                var_29 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)65535));
                arr_72 [i_4] [i_4] [i_5] [i_19] = var_6;
                var_30 = ((/* implicit */unsigned char) ((long long int) (~(arr_39 [i_4] [i_4] [i_19] [i_19]))));
            }
            for (unsigned int i_20 = 1; i_20 < 11; i_20 += 3) /* same iter space */
            {
                arr_75 [i_4] = ((/* implicit */_Bool) arr_40 [i_4] [i_4] [i_4] [(_Bool)1] [i_4] [i_4] [i_4]);
                var_31 = ((/* implicit */short) ((int) ((unsigned short) ((((/* implicit */int) arr_49 [i_4] [i_4])) >> (((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]) - (3098739738U)))))));
                /* LoopSeq 1 */
                for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    var_32 = ((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)3)) + (1))), (var_9)));
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 2; i_22 < 9; i_22 += 3) 
                    {
                        arr_81 [i_4] [8] [i_21] [i_4] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)40183)), (942977086U)))) ? (((((/* implicit */int) (short)-10924)) & (-1))) : (min((((/* implicit */int) (unsigned short)4)), (706921027)))))));
                        arr_82 [i_21] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_58 [i_20] [i_20 - 1] [i_20 + 1] [i_22 + 1]))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        arr_86 [i_21] [i_21] [i_21] [i_23] [i_23] = ((/* implicit */unsigned short) arr_21 [i_20] [i_5] [i_4]);
                        arr_87 [i_4] [i_21] [i_20 + 1] [i_21] [i_23] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) * (arr_37 [i_4] [i_20] [i_20] [i_23])))) ? (max((4293918713U), (((/* implicit */unsigned int) 706921027)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                    }
                    arr_88 [i_4] [i_5] [i_5] [i_20] [i_21] [i_21] = ((/* implicit */short) (unsigned char)162);
                    /* LoopSeq 1 */
                    for (unsigned char i_24 = 1; i_24 < 9; i_24 += 3) 
                    {
                        arr_92 [i_21] = ((((/* implicit */_Bool) arr_69 [i_4] [i_4] [i_21] [i_24])) ? (((/* implicit */int) (unsigned short)19244)) : ((+(((/* implicit */int) (signed char)80)))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)1020))))) ? (max((2367733389U), (((/* implicit */unsigned int) (signed char)-92)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        arr_93 [i_5] [i_21] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_6)), (var_7)));
                    }
                }
                arr_94 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (short)-23933)) : (((/* implicit */int) (short)-11029))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                arr_95 [i_4] [i_4] [i_20] = ((/* implicit */unsigned char) arr_2 [i_20]);
            }
            for (unsigned int i_25 = 1; i_25 < 11; i_25 += 3) /* same iter space */
            {
                var_34 = (-(((((((/* implicit */int) arr_24 [i_4] [i_25] [i_25 + 1])) ^ (((/* implicit */int) arr_5 [i_25])))) >> (((max((var_9), (((/* implicit */int) arr_96 [i_4] [i_5] [i_25])))) - (1692940570))))));
                arr_99 [i_4] [i_25] = (-(((((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_4] [(unsigned char)10] [(unsigned char)10] [i_4] [i_4] [i_4]))) / (2975021155U))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-1036)), ((unsigned short)61059))))))));
                arr_100 [i_4] [i_5] [i_5] [i_25] = ((/* implicit */short) (unsigned short)1);
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    arr_104 [i_25] [6U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1020)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) -22)), (4293918722U))))))) : ((-((-(((/* implicit */int) var_2))))))));
                    arr_105 [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_8 [i_4] [2LL] [2LL] [i_26])) << (((var_0) - (1694579659))))), (((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) -5)))))))) ? (((/* implicit */int) (unsigned char)6)) : ((~(((/* implicit */int) arr_74 [i_25 + 1] [i_25 - 1] [i_25 - 1] [i_25 - 1]))))));
                    var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_77 [i_25] [i_25] [i_25 + 1] [i_25 - 1] [i_25] [(unsigned short)8])))));
                    arr_106 [i_26] [i_25] [i_25] [i_4] = ((/* implicit */short) max(((signed char)-44), ((signed char)117)));
                }
            }
        }
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> ((((+((-(((/* implicit */int) var_1)))))) + (29015)))));
            arr_109 [i_27] = ((/* implicit */unsigned short) 0);
            arr_110 [i_4] [i_27] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (arr_4 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_103 [i_4])))))));
            arr_111 [i_4] [(_Bool)1] [i_27] = max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)49)) <= (((/* implicit */int) (unsigned char)20))))), (var_3));
        }
        arr_112 [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (short i_28 = 2; i_28 < 11; i_28 += 4) 
        {
            for (unsigned char i_29 = 2; i_29 < 11; i_29 += 4) 
            {
                {
                    var_37 = ((/* implicit */int) (unsigned char)236);
                    var_38 = ((/* implicit */unsigned short) (unsigned char)19);
                }
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_5)) - (35122)))));
    var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)26348)) * (((((/* implicit */int) ((short) (unsigned char)99))) / (((/* implicit */int) var_2))))));
    var_41 = ((/* implicit */_Bool) var_2);
    var_42 = ((/* implicit */unsigned short) (_Bool)1);
}
