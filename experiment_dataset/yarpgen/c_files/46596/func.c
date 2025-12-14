/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46596
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
    var_15 = ((int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 2] &= ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)127));
        arr_4 [i_0] |= ((/* implicit */unsigned long long int) ((unsigned char) var_3));
    }
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        arr_9 [i_1 + 1] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-22)) : ((-(min((((/* implicit */int) (unsigned char)22)), (arr_7 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_15 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((short) 2702644153881420416LL));
                    arr_16 [i_2] [i_2 - 1] [i_3] [i_3] = ((/* implicit */signed char) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_2])) : (((/* implicit */int) (unsigned char)217)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_23 [i_1] [i_2] [i_3] [(short)16] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) (signed char)-98)))));
                            arr_24 [i_1] [i_2] [i_3] [i_1] [i_2] [i_5] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_20 [i_1 - 2] [i_2 - 1] [(short)4] [i_2] [i_3] [i_4] [i_5])), (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) -4926574404801199159LL)))))), (((/* implicit */unsigned long long int) ((signed char) (signed char)-39)))));
                        }
                        arr_25 [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) arr_10 [i_1 - 1] [i_2])));
                        arr_26 [i_4 - 2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (!(arr_17 [i_4 - 2]))));
                    }
                    for (unsigned int i_6 = 3; i_6 < 17; i_6 += 1) 
                    {
                        arr_29 [(unsigned char)10] [(unsigned char)10] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1311)) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)4))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)102)))) : (arr_19 [i_1] [19] [i_3] [i_6 - 1] [(unsigned char)0]))) : (((/* implicit */int) (short)-8639))));
                        arr_30 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)11699))));
                        arr_31 [i_1] [i_2] = ((((((/* implicit */_Bool) max((arr_21 [i_1] [i_2] [i_2] [i_3] [i_6]), (((/* implicit */unsigned long long int) arr_18 [i_3] [i_3] [(unsigned char)0] [12] [i_3] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3099))) : (arr_11 [i_2])))))) ? (((((/* implicit */_Bool) (short)1311)) ? (((((/* implicit */_Bool) arr_28 [(unsigned char)15] [i_3] [16] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)109)) : (var_0))) : ((~(arr_14 [i_2]))))) : ((~(((/* implicit */int) (short)-28405)))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        arr_35 [i_1] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)714)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (short)-29358)))), ((((!((_Bool)0))) ? (((/* implicit */int) ((signed char) (unsigned char)154))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_13 [i_3]) : (arr_34 [i_1] [i_1] [i_1 + 1] [i_1 - 2])))))));
                        arr_36 [i_2] [i_3] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_14 [i_2])))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) 1197476714609282374ULL)) ? (8310234703853482585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                    arr_37 [i_1 - 1] [i_1] [i_2] = ((/* implicit */signed char) ((min((((/* implicit */int) ((signed char) (unsigned char)99))), (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (unsigned short)58036)) : (1913580134))))) << (((((((/* implicit */_Bool) (+(arr_21 [i_1] [i_2] [i_2 - 1] [i_3] [i_3])))) ? (15967339996780332154ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned char)196))))))) - (15967339996780332139ULL)))));
                }
            } 
        } 
        arr_38 [i_1] = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-3945)));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 1) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                {
                    arr_48 [i_8] = ((/* implicit */unsigned char) ((signed char) (unsigned char)154));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_11 = 1; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        arr_52 [(_Bool)1] [i_10] [i_9 - 1] [(_Bool)1] &= ((/* implicit */unsigned char) arr_46 [(short)4] [i_9] [i_11]);
                        arr_53 [i_8] [i_9] [i_9] [i_10] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-3922)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (_Bool)1))));
                        arr_54 [12LL] [0] [i_10] [i_11] |= ((/* implicit */unsigned long long int) ((signed char) arr_46 [(unsigned char)10] [i_10] [i_11]));
                    }
                    for (short i_12 = 1; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        arr_57 [12U] [(short)14] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */int) (signed char)-34)), (arr_14 [(unsigned char)2])))), (((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */long long int) arr_14 [(unsigned char)4])) : (6213271711361723119LL)))));
                        arr_58 [i_12] [6] [i_8] [i_8] [(short)6] [i_8] = ((((((/* implicit */_Bool) (-(arr_0 [i_10])))) || ((!((_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1913580140)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) arr_10 [i_9 - 1] [i_8]))))) ? (((/* implicit */unsigned long long int) arr_34 [i_8] [i_12 + 2] [i_10] [i_9])) : (((((/* implicit */_Bool) (unsigned short)43889)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8756277189531041621ULL))))) : ((~(((((/* implicit */_Bool) 2147483647ULL)) ? (9690466884178509996ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))))));
                        arr_59 [i_8] [i_9] [1U] [i_12] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)247)) ? (min((arr_39 [i_8]), (((/* implicit */unsigned long long int) (signed char)125)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_8] [i_8 + 1] [i_8] [i_8 - 1])))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (short i_13 = 1; i_13 < 13; i_13 += 4) /* same iter space */
                    {
                        arr_62 [i_8] [i_9 - 1] [i_13] [6ULL] = ((/* implicit */signed char) arr_20 [i_8 - 1] [1] [i_9 - 1] [i_9 - 1] [1] [i_10] [7LL]);
                        /* LoopSeq 2 */
                        for (short i_14 = 1; i_14 < 12; i_14 += 1) /* same iter space */
                        {
                            arr_66 [i_14 + 2] [(unsigned char)6] [(unsigned char)0] [(unsigned char)6] [i_8 - 3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_44 [1LL] [i_13 + 2])) ? (arr_28 [i_8 - 3] [i_9] [i_10] [i_9] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (short)19000))))));
                            arr_67 [i_8 - 2] [i_9 - 1] [i_10] [i_8 - 2] [6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [(unsigned char)8])) ? (((unsigned int) (signed char)126)) : (((/* implicit */unsigned int) ((arr_56 [i_8] [(short)8]) ? (((/* implicit */int) (signed char)-126)) : (arr_5 [i_8 - 2]))))));
                            arr_68 [2U] [i_14] [2U] [i_13] [i_14] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43876)) ? (((/* implicit */int) (signed char)-114)) : (2047)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_13 + 1] [i_9]))) : (arr_55 [i_9] [i_9] [i_9 - 1] [i_14])));
                            arr_69 [i_9] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [(signed char)10])) ? (10338927422524599164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))))))));
                            arr_70 [i_8] [i_8 - 2] [(short)0] [i_13] = ((/* implicit */unsigned long long int) 12582912);
                        }
                        for (short i_15 = 1; i_15 < 12; i_15 += 1) /* same iter space */
                        {
                            arr_74 [i_8] [i_9 - 1] [i_15] [i_8] [i_13] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_9] [i_9 - 1] [i_9 - 1])) ? (arr_12 [i_8] [i_9] [i_9 - 1]) : (arr_12 [i_8 - 2] [i_8] [i_9 - 1])));
                            arr_75 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14064)) ? (15967339996780332156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92)))));
                        }
                    }
                    arr_76 [(unsigned short)6] &= ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-10)) ? (503611661) : (((/* implicit */int) (signed char)-47))))));
                    arr_77 [(short)8] = ((/* implicit */long long int) (unsigned char)156);
                    arr_78 [i_8] [i_8] [i_9] [i_10] = ((/* implicit */signed char) arr_21 [i_8] [i_8] [i_9] [i_9 - 1] [i_10]);
                }
            } 
        } 
    } 
}
