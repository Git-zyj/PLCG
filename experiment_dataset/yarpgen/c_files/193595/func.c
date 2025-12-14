/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193595
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) | (arr_0 [i_0])));
        arr_4 [7LL] [i_0] |= ((/* implicit */short) (signed char)-113);
    }
    var_11 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_6)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        for (short i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            {
                arr_11 [(unsigned short)13] [i_1] [7] = arr_1 [i_1];
                /* LoopSeq 2 */
                for (int i_3 = 4; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    var_12 ^= ((/* implicit */signed char) (-(var_1)));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_16 [i_1] [i_2 - 1] [i_3] [i_3 + 1]))));
                        arr_19 [i_2] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_9)) ? (904734572495954629LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1])))))));
                    }
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_22 [i_3] [i_1] = ((/* implicit */unsigned short) ((unsigned int) -1098348281));
                        arr_23 [i_1] [i_2 + 1] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) 1528093656)) < (576459652791795712LL)));
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_26 [i_1] [i_2 + 1] [i_3] [i_2 + 1] = ((/* implicit */unsigned long long int) (unsigned short)25787);
                        arr_27 [i_1] [i_2] [i_2 - 1] [i_3] [i_6] = ((/* implicit */unsigned short) arr_2 [i_6]);
                        arr_28 [i_6] [15] [(unsigned char)9] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)15621)) ? (((/* implicit */int) arr_21 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_21 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))) << ((((((~(((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1])))) + (22676))) - (17)))));
                        arr_29 [(unsigned char)4] [(_Bool)1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) 904734572495954613LL));
                    }
                }
                for (int i_7 = 4; i_7 < 14; i_7 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 4; i_9 < 13; i_9 += 3) 
                        {
                            {
                                arr_39 [i_1] [i_2] [i_7] [i_8] [i_8] [i_8] [i_7 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 643994345779156990LL)) || (((/* implicit */_Bool) -1098348281))));
                                arr_40 [i_1] [i_1] [i_7 - 4] [i_1] [i_8] [i_7 - 4] [i_7 - 4] &= ((/* implicit */unsigned long long int) (signed char)100);
                            }
                        } 
                    } 
                    arr_41 [i_1] [i_2 + 1] [(unsigned short)7] [i_1] = ((/* implicit */long long int) var_0);
                    /* LoopSeq 4 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                    {
                        arr_45 [i_10] [(unsigned short)1] [(unsigned short)1] [i_1] = ((/* implicit */int) ((((/* implicit */int) max((arr_12 [i_2 - 1] [i_7 - 3]), (arr_12 [i_2 + 1] [i_7 - 1])))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_37 [i_1] [10] [(unsigned char)13] [1LL] [i_2 - 1] [i_7 + 1] [i_10])), (arr_10 [i_2 - 1] [i_2 + 1]))))));
                        arr_46 [i_10] [i_7] [i_7] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) arr_5 [i_1] [i_2]);
                        var_14 = ((/* implicit */unsigned short) var_2);
                    }
                    for (int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_52 [i_1] [i_1] [i_2] [i_2] [i_7] [i_11] [i_12 - 1] = ((/* implicit */unsigned int) 1098348262);
                            arr_53 [i_1] [i_1] [15LL] [i_2] [i_7] [i_7] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_2 + 1] [i_2 + 1] [i_12 - 1] [i_12])) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_36 [i_1] [i_2 - 1] [i_7 + 2] [9] [i_2 - 1])) + (((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_1] [1] [i_1] [i_1])))))) : (-1098348283)));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 1) 
                        {
                            arr_58 [i_1] [i_2] [i_2] [i_7] [i_11] [i_13] = (unsigned short)52502;
                            var_15 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12330))) - (((((/* implicit */long long int) 1462763173)) * (0LL)))));
                        }
                        arr_59 [i_1] [i_1] [i_1] [i_1] [i_11] = min((var_7), (((/* implicit */long long int) arr_1 [i_2])));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_15 [9LL] [9LL] [i_7 - 4] [7]) - (((/* implicit */long long int) 1098348280))))) - (((((/* implicit */_Bool) arr_15 [8LL] [i_1] [i_7 - 4] [i_7])) ? (((/* implicit */unsigned long long int) arr_15 [i_7 - 2] [(_Bool)1] [i_7 - 4] [i_7 - 4])) : (arr_24 [(unsigned short)9] [(unsigned short)9] [i_7 - 4] [(unsigned short)9] [(unsigned short)9])))));
                    }
                    for (short i_14 = 3; i_14 < 12; i_14 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) min((min((-933216298), (((/* implicit */int) (unsigned short)3)))), (((/* implicit */int) arr_33 [i_1] [i_2] [10U] [10LL] [i_7]))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)51))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
                    }
                    for (short i_15 = 3; i_15 < 12; i_15 += 2) /* same iter space */
                    {
                        arr_64 [i_1] [i_1] [(_Bool)1] [i_15] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-73)) || (((/* implicit */_Bool) arr_43 [i_1] [i_7 - 4] [i_7 - 2] [i_15 - 2] [i_7] [i_7])))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_65 [i_1] [i_7 - 4] [(unsigned char)12] [i_1] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (var_6)));
                    }
                    arr_66 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((arr_32 [i_2] [i_2] [i_2] [i_7 - 2]), ((-(((/* implicit */int) (signed char)-85))))));
                }
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (((~(arr_60 [i_1] [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) | (((arr_60 [i_1] [14ULL] [i_2 + 1] [i_1] [i_2]) ^ (arr_60 [i_1] [i_1] [i_2 + 1] [6LL] [i_1]))))))));
                var_20 = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_5);
}
