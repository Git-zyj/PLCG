/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36088
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
    var_15 = ((/* implicit */signed char) var_14);
    var_16 = ((/* implicit */signed char) var_13);
    var_17 = ((/* implicit */unsigned char) 8530572467290287573ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) arr_5 [i_2 - 2]))))));
                                var_19 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                    arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_2] = ((/* implicit */short) 4432414524653523848LL);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((signed char) 2833189605U)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2 - 2] [i_6] [i_2] [i_0] = ((unsigned long long int) arr_9 [i_2 - 2]);
                                var_21 = ((/* implicit */signed char) ((arr_16 [i_2 + 1] [i_1]) | (arr_16 [i_2 - 2] [i_1])));
                                arr_21 [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2])) % (((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2 + 1]))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 17; i_8 += 1) 
                    {
                        arr_27 [i_8] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_2)), (arr_25 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 2])))) / (((/* implicit */int) arr_4 [i_7 + 1] [i_1] [i_7 - 2]))))), (((((unsigned long long int) (unsigned short)65535)) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)59156)))))))));
                        arr_28 [(short)11] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_15 [i_8] [i_7 - 2] [i_1] [i_1] [i_0 - 1] [i_0])) ^ (((/* implicit */int) (short)255)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)4)) || (arr_5 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_8)), (arr_23 [i_0 + 2] [i_1] [i_8]))) & (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0] [17ULL])) ^ (((/* implicit */int) var_11)))))))) : ((~(arr_18 [i_0 + 2])))));
                        arr_29 [i_0] [i_8] [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_3 [i_0])))) | ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)127))))));
                    }
                    var_22 = ((/* implicit */unsigned char) ((((arr_22 [i_0] [i_0 + 1]) ? (arr_2 [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9249))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 1] [i_0 - 1])) * (((/* implicit */int) arr_10 [i_0 + 2] [10] [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_7 - 1] [i_7 + 1])))))));
                    arr_30 [i_1] [i_7] [i_7 - 2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-50))));
                }
                for (short i_9 = 2; i_9 < 18; i_9 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) var_13)))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                arr_42 [i_0 + 3] [i_0] [i_0] [(_Bool)1] [i_0 + 2] [i_0 - 1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3820)));
                                var_24 -= ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) arr_26 [i_9 + 1] [i_0 + 3] [i_9 - 2] [i_11] [i_11])), (arr_32 [i_9] [i_9 - 1] [i_9] [i_9 - 2]))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (((arr_35 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 4) 
                    {
                        arr_49 [i_0] [i_12] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned short)65508)))));
                        var_26 = ((/* implicit */_Bool) ((signed char) arr_38 [i_12 - 2] [i_12 + 1] [i_12] [i_12 - 2] [i_12]));
                        arr_50 [i_0] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_33 [i_13 - 1] [i_13 + 3] [i_12 - 1])), (((((/* implicit */unsigned long long int) var_0)) % (arr_46 [i_0] [i_1] [i_12] [i_13])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_47 [i_0] [i_0 + 2] [i_12 + 1] [i_13] [i_0])), (((1LL) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 2])))))))) : ((~(((11001131405132412694ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_12 - 2])))))))));
                        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_19 [i_12] [i_13 + 2] [i_0 + 1])))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((short) arr_41 [i_14] [i_14] [i_14])), (((/* implicit */short) min(((unsigned char)247), (((/* implicit */unsigned char) (signed char)-64)))))))), (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) & (-1LL))), (4924008740111760229LL)))));
                        arr_54 [i_0] [i_12] [i_0] [i_0 + 2] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((_Bool) arr_4 [i_14] [i_12 + 1] [i_14]))), (max((arr_4 [i_0] [i_12 + 1] [i_1]), (arr_4 [i_0] [i_12 - 1] [i_12])))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) ((min((arr_8 [i_12 + 1] [i_0 + 2]), (arr_8 [i_12 + 1] [i_0 + 2]))) ? (((/* implicit */int) ((((var_0) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) > (((/* implicit */long long int) ((/* implicit */int) ((-4924008740111760230LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))))))) : (((/* implicit */int) var_1))));
                        arr_58 [(signed char)7] [i_1] [i_12] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1751819985955028203LL)) ? (((/* implicit */int) ((unsigned char) (unsigned short)65533))) : (((/* implicit */int) arr_31 [i_0 + 1] [i_1] [i_0] [i_12 - 2])))) >= (((((_Bool) var_14)) ? ((~(((/* implicit */int) arr_35 [i_12])))) : ((~(((/* implicit */int) arr_9 [i_1]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            arr_62 [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_12 + 1])) + (2147483647))) >> (((/* implicit */int) ((3918612243U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_12] [i_12]))))))))) ? (((((/* implicit */_Bool) arr_18 [i_0 + 1])) ? (arr_18 [i_12 - 2]) : (arr_18 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154)))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) * (1557310930U)));
                        }
                        arr_63 [i_12] [i_12] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (7765577368678567745ULL)));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 11LL))))));
                        arr_68 [i_12] [i_12] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_52 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)8])) + (2147483647))) >> (((((/* implicit */int) (signed char)-119)) + (144))))) << ((((~(((/* implicit */int) arr_52 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2])))) - (26889)))));
                        var_32 = ((/* implicit */long long int) ((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_60 [i_0] [(signed char)5] [i_12] [(signed char)5] [i_17])), (arr_15 [i_0 + 2] [i_12 - 2] [i_12 - 2] [i_17] [i_0 + 2] [i_0 + 2])))))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_53 [i_12] [i_12] [i_12 + 1] [i_17])), ((unsigned char)42)))))) | (((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_11 [(signed char)15] [i_0 + 1] [i_0] [i_0 + 2] [i_12 - 2])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_18 = 2; i_18 < 17; i_18 += 4) 
                        {
                            var_34 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18950))) == (var_0))))));
                            arr_72 [i_12] [i_17] [i_12 - 1] [i_1] [i_12] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)21))))));
                        }
                    }
                }
                var_35 = ((/* implicit */unsigned short) ((((_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) -849068965219911446LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) : (arr_7 [i_0 + 2] [i_0 + 2]))))))));
                arr_73 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((max((((((/* implicit */int) (unsigned short)38075)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [(_Bool)1] [i_1] [i_0])))) / (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (36864246475422035LL)))) ? (((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) * (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_71 [i_0 - 1] [i_0 + 1] [i_0 + 1] [16LL]))))));
                arr_74 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_1]))))));
            }
        } 
    } 
}
