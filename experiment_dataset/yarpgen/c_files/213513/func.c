/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213513
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) ((unsigned short) 2235169234U))))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108863)) ? (((/* implicit */int) (unsigned short)39073)) : (((/* implicit */int) (unsigned char)224))))) && (((((/* implicit */int) var_2)) < (((/* implicit */int) var_6)))))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)30270)))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1])), (var_0))))))) % (((((/* implicit */int) arr_3 [i_1 - 3])) - (((/* implicit */int) (unsigned char)42))))));
                arr_8 [i_0] [(short)22] [i_0] = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_19 [i_2 - 1] [i_3] [i_2 + 1] [i_5] [i_4] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) (+(((/* implicit */int) var_5))))));
                            arr_20 [i_6] [i_6] [i_2] [i_6] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) (signed char)9)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [(unsigned char)13]), (((/* implicit */unsigned long long int) var_3))))))))));
                            arr_21 [i_2] [(signed char)13] [i_2] [i_2 + 3] [i_4] = ((/* implicit */unsigned long long int) var_1);
                            arr_22 [i_4] [17ULL] [i_4] = min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)32)) == ((~(((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) + (arr_10 [i_2 + 4]))) >> ((((~(((/* implicit */int) arr_3 [15ULL])))) + (8))))));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            arr_26 [i_2] [(unsigned char)14] [6U] [(signed char)6] [i_7] [i_2] [6U] |= ((/* implicit */_Bool) max(((~(((/* implicit */int) ((signed char) var_1))))), (((/* implicit */int) (unsigned char)224))));
                            arr_27 [i_4] = ((/* implicit */unsigned long long int) (signed char)74);
                            arr_28 [i_7] [i_5] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_12 [i_7] [i_4 + 1])) >> (((((/* implicit */int) arr_12 [i_3] [i_4 + 1])) - (17342)))))));
                            arr_29 [(_Bool)1] = ((/* implicit */unsigned short) arr_0 [(unsigned short)16]);
                            arr_30 [(short)0] [(_Bool)1] [i_4 + 1] [(unsigned char)10] [(short)0] = ((/* implicit */signed char) ((323241823U) << (((/* implicit */int) (!((_Bool)1))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 2) 
                        {
                            arr_33 [6U] = ((/* implicit */unsigned short) arr_11 [i_5] [i_5] [i_3]);
                            arr_34 [i_2] [i_4] [i_4 + 1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)210))));
                            arr_35 [i_4] [i_3] [i_3] [(_Bool)1] [i_8] [i_3] [i_3] = ((/* implicit */signed char) arr_17 [i_4] [i_4]);
                            arr_36 [i_4] [i_4] [i_4] [i_5] [i_5] [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4] [i_4])) | ((-((+(((/* implicit */int) arr_24 [i_8 + 2] [i_5] [i_4] [i_3] [i_2]))))))));
                            arr_37 [(_Bool)0] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) min((((/* implicit */short) arr_24 [i_2 - 1] [i_3] [i_8] [i_5] [i_8])), (arr_2 [(short)7])))))));
                        }
                        arr_38 [i_2] [i_2] [16ULL] [2U] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)224)) && (((/* implicit */_Bool) (unsigned char)46)))))));
                        arr_39 [(short)6] [i_4 + 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-123)) / (((/* implicit */int) (unsigned char)255))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_45 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((((_Bool)0) && (((/* implicit */_Bool) 18446744073709551615ULL)))) || (((/* implicit */_Bool) max((6360072349660378821LL), (((/* implicit */long long int) var_1)))))));
                            arr_46 [i_9] [(unsigned short)0] [10ULL] [10ULL] [(unsigned short)0] = ((/* implicit */unsigned int) (unsigned short)64818);
                            arr_47 [i_2] [i_10] [i_4] [i_9] [(signed char)14] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_2])) >= (((/* implicit */int) arr_41 [i_4] [i_4 + 1] [i_2 + 2] [i_2] [(short)11] [i_4])))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned short)64818)) : (((/* implicit */int) (unsigned char)47)))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) arr_17 [i_4] [i_4]))))) || ((_Bool)1))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_50 [i_2] [i_9] [i_4] [i_9] [(_Bool)0] = ((/* implicit */_Bool) (unsigned short)29199);
                            arr_51 [i_2] [i_9] [i_4 + 1] [8U] [i_2] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_10 [i_11])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_32 [i_11] [i_3] [i_4 + 1] [i_3] [i_2])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_2] [i_9] [(_Bool)1]))) == (3936513433U)))))), (((/* implicit */int) (_Bool)0))));
                        }
                        arr_52 [i_2] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)7), (((/* implicit */unsigned char) arr_32 [i_2] [i_3] [i_4] [i_9] [i_9])))))))) ? (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) arr_17 [i_2] [i_9])))) : (((/* implicit */int) var_9))));
                        arr_53 [i_2] [i_9] [(_Bool)1] [i_9] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_31 [i_2 + 3] [i_2] [i_9] [i_4] [i_4] [i_9] [i_9])) ? (arr_10 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        arr_56 [i_4] [i_3] [i_4] = ((/* implicit */short) max((max((((/* implicit */int) (signed char)-126)), (arr_54 [i_4 + 1]))), (((/* implicit */int) arr_32 [i_2] [i_3] [i_2] [(unsigned short)0] [i_3]))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_59 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_41 [i_12] [(unsigned char)6] [i_12] [i_12] [i_3] [i_12]), (((/* implicit */short) (unsigned char)210))))) / (((/* implicit */int) (signed char)-1))))) ? (min((((((/* implicit */_Bool) (signed char)64)) ? (1030042604660267611ULL) : (arr_55 [i_12]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_2] [i_12] [i_2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_2 + 2] [i_3] [i_12] [i_3] [(unsigned char)8])) ? (((/* implicit */int) ((11859520729505740900ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [14])))))) : ((~(((/* implicit */int) var_7)))))))));
                            arr_60 [i_4] [(unsigned char)10] [i_4] [i_4] = ((/* implicit */unsigned short) min((arr_18 [i_4] [i_2 + 3] [i_4] [(unsigned short)11] [i_4] [i_2] [i_2 + 3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_40 [(unsigned short)9] [i_4] [i_4 + 1])) : (((/* implicit */int) ((short) arr_11 [17ULL] [17ULL] [i_4 + 1]))))))));
                        }
                        arr_61 [i_12] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_15 [i_2] [i_2] [i_2] [17LL] [i_2] [i_2])), ((~(var_8)))));
                        arr_62 [i_4] [i_3] = ((/* implicit */_Bool) max((((arr_49 [i_12] [i_4] [i_4] [i_2 + 3] [i_4 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)209)), ((unsigned short)64818))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (14801005219010683196ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_44 [i_12] [(unsigned char)13] [(unsigned short)0] [i_12])))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_1))))) : (((((/* implicit */int) arr_49 [(unsigned char)15] [i_4] [i_4] [i_12] [i_12])) * (((/* implicit */int) arr_12 [i_4] [i_2])))))))));
                    }
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        arr_65 [i_2 - 1] [(signed char)16] |= ((/* implicit */unsigned short) ((min(((_Bool)0), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)65534)))))) ? ((((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)210)) && (((/* implicit */_Bool) (unsigned char)50))))))) : (((((((/* implicit */int) arr_57 [i_14] [i_4 + 1] [i_3] [i_2])) + (2147483647))) << (((((/* implicit */int) arr_4 [i_3] [i_4] [i_14])) - (126)))))));
                        arr_66 [i_4] = ((signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_14] [i_4] [(_Bool)1] [i_14] [(unsigned char)3]))) / (-7866554376229624154LL))));
                        arr_67 [i_2 + 4] [i_2 + 4] [(_Bool)1] [12U] = ((/* implicit */unsigned short) var_6);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_15 = 3; i_15 < 15; i_15 += 3) 
                    {
                        arr_72 [i_2] [i_3] [i_3] [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_2 + 3] [i_4 + 1] [i_4] [i_15 - 2]))) % ((-(var_8))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_2] [12LL] [i_4] [i_15]))) ^ (((((/* implicit */_Bool) (signed char)80)) ? (arr_44 [i_4] [i_4] [i_4] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64328))))))));
                        arr_73 [i_2] [6ULL] [(_Bool)1] [i_2] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) -7866554376229624154LL)) ? (arr_31 [i_2] [i_2] [(signed char)12] [i_4] [(unsigned char)8] [i_4 + 1] [i_15 - 3]) : (arr_31 [i_2] [i_2] [(unsigned short)8] [i_2] [i_2] [i_4 + 1] [i_15 - 2]))));
                    }
                    for (long long int i_16 = 1; i_16 < 17; i_16 += 1) 
                    {
                        arr_78 [i_4] [(unsigned short)2] = ((/* implicit */short) min((((/* implicit */int) min((arr_23 [(unsigned char)13] [i_2 + 1] [(unsigned short)10] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2]), (arr_4 [(signed char)2] [i_4 + 1] [i_4])))), ((-(((/* implicit */int) arr_4 [i_2 + 1] [i_4 + 1] [i_4]))))));
                        arr_79 [i_4] [i_3] [i_4] [i_16 + 1] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)109))));
                    }
                    arr_80 [i_2] [i_4] [i_2] [i_2 + 2] = ((/* implicit */signed char) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 4] [i_4 + 1] [i_4 + 1])))));
                }
            } 
        } 
        arr_81 [i_2] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_1 [i_2]) : (arr_18 [i_2] [i_2] [16U] [i_2] [16U] [i_2] [i_2])))))));
        arr_82 [i_2] [(short)8] = ((/* implicit */unsigned short) var_5);
        arr_83 [i_2] = ((/* implicit */unsigned short) 0U);
    }
}
