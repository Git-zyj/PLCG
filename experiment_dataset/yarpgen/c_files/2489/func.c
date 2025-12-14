/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2489
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) 956155196U);
                    arr_7 [i_0] [i_1] [i_2] = (-(max((var_5), (((/* implicit */unsigned int) (unsigned char)95)))));
                }
            } 
        } 
        var_12 = ((var_6) << (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_5)) - (var_6))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0)))))))));
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_19 [i_7] [i_7] [i_3] [i_6] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(var_10))) + (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) var_0)))))))) ? ((+(((/* implicit */int) var_0)))) : (arr_4 [(signed char)15] [i_7])));
                                var_13 = ((/* implicit */unsigned char) arr_12 [i_3] [i_3]);
                                arr_20 [i_6] [i_3] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9))))))) == (((unsigned int) ((arr_8 [i_3]) * (575580840555295627ULL))))));
                                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) / (((var_5) / (573054197U)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)32767)) != (747961775))))) % (max((arr_8 [i_3]), (15425952260216925782ULL)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)50)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned long long int) 3466390863U)))))));
                    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) == (min((arr_13 [i_5 - 1] [i_4 + 1] [14U] [i_4 + 2]), (((/* implicit */unsigned int) arr_4 [i_3] [i_5]))))));
                    arr_21 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2445621522U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 16106127360LL))))))))) < (((((/* implicit */int) (unsigned short)45606)) - (((/* implicit */int) arr_15 [i_3] [i_3]))))));
                }
            } 
        } 
        arr_22 [i_3] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) > (2445621508U)))) + (((/* implicit */int) var_0))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) var_7);
        var_18 = ((/* implicit */unsigned long long int) (((((-((+(((/* implicit */int) var_4)))))) + (2147483647))) >> (((arr_8 [i_8]) - (16357685786976284169ULL)))));
        arr_25 [i_8] = ((/* implicit */unsigned short) (~(1438179567U)));
    }
    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
    {
        arr_28 [2LL] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_0 [i_9 - 1] [i_9]) < (arr_0 [i_9 - 1] [i_9 - 1])))) % (((/* implicit */int) min((var_1), (var_1))))));
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((max((134217727U), (((/* implicit */unsigned int) 193472825)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_9] [i_10])) || (((/* implicit */_Bool) arr_15 [i_9] [i_10]))))))));
                        arr_38 [(_Bool)1] [(_Bool)1] &= ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                        arr_39 [i_12] [i_11] [(unsigned char)2] [i_11] [i_11] [i_9] = var_4;
                        arr_40 [i_9] [i_11] [i_9] [i_11] [3ULL] [i_12] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (2445621537U)))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_6))) - (15843350404264788876ULL))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_13 = 1; i_13 < 9; i_13 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_12])) ? (var_3) : (arr_4 [i_9 - 2] [i_10]))))));
                            arr_43 [i_9] [i_10] [i_11] [i_11] [i_13] = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (3629612441U)))), (max((((/* implicit */unsigned int) arr_29 [i_11] [i_12] [i_13 - 1])), (3165331211U))));
                            var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_30 [i_10]))) != (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_42 [i_9] [i_10]))))))))) < (((long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)151)))))));
                            arr_44 [i_11] [i_10] [5U] [i_12] [i_13 + 1] = ((/* implicit */signed char) var_7);
                            arr_45 [i_11] [i_11] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_9 [i_12])) - (((/* implicit */unsigned long long int) ((int) ((var_1) ? (4294967295U) : (var_5)))))));
                        }
                        for (unsigned char i_14 = 2; i_14 < 9; i_14 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((((((/* implicit */long long int) 4294967295U)) ^ (var_2))) >> (((((int) arr_10 [i_11] [i_9 - 1] [i_9])) - (59383)))));
                            arr_49 [i_9 + 1] [i_10] [i_11] [i_12] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                        for (unsigned char i_15 = 2; i_15 < 9; i_15 += 3) /* same iter space */
                        {
                            var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_2) + (((/* implicit */long long int) arr_29 [i_9 - 2] [i_11] [i_11])))) >= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_31 [i_12])), (arr_10 [i_9] [i_11] [i_15]))))))))) * (((unsigned int) arr_16 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_11] [i_15 - 2])));
                            arr_54 [i_15] [i_11] [i_12] [i_11] [i_11] [i_10] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_16 [i_15 - 2] [i_15 + 2] [i_15 + 1] [i_11] [i_15 - 1]), ((signed char)62)))) ? (((((/* implicit */_Bool) arr_41 [i_9] [i_10] [i_11] [i_12] [i_15 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (1462999585U) : (((/* implicit */unsigned int) arr_32 [i_9 - 2] [i_10] [i_12] [i_15]))))) : (max((((/* implicit */long long int) 8388607U)), (var_10))))) : (((/* implicit */long long int) -193472823))));
                            arr_55 [i_11] [i_12] [i_15 - 2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_9] [i_10])) + (((/* implicit */int) (unsigned char)0))))) < (max((4294967295U), (((/* implicit */unsigned int) arr_1 [i_12])))))))) != (arr_36 [i_9] [i_9])));
                            var_24 = var_0;
                            arr_56 [i_15] [i_10] [i_11] [i_10] [i_9] = ((/* implicit */unsigned short) arr_5 [i_12] [i_11] [i_11] [i_9]);
                        }
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) var_10);
                            arr_61 [i_11] [i_9] [i_11] [i_12] [i_12] [i_12] = ((/* implicit */signed char) max((436703389U), (arr_48 [i_9] [i_9] [i_11] [i_12] [i_16] [i_9 + 1] [(signed char)4])));
                        }
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) var_4);
        var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) 62503321U)))) ? (((/* implicit */int) (!(var_1)))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_1))))))), (max((-1640399153591189840LL), (((/* implicit */long long int) (unsigned short)24785))))));
        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */int) (((-(((/* implicit */int) arr_52 [i_9] [i_9] [i_9 - 1])))) > (((((/* implicit */int) arr_46 [i_9])) >> (((var_2) - (2028029512583176749LL)))))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)119)) >> (((2445621549U) - (2445621525U)))))) < (((((/* implicit */_Bool) arr_52 [i_9] [i_9 - 2] [i_9])) ? (((/* implicit */unsigned long long int) 4U)) : (var_6))))))));
    }
    var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_9)) | ((-(((/* implicit */int) var_0))))))));
}
