/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191487
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) (unsigned char)222);
        var_11 *= ((/* implicit */unsigned char) (+(arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        var_12 -= ((/* implicit */unsigned char) max(((!((_Bool)1))), ((_Bool)1)));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) var_5)) : (-1LL))), (((/* implicit */long long int) (-(3457023677U)))))) : (((/* implicit */long long int) arr_4 [i_1 - 4]))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(4033961827U)))) / (-1LL)));
    }
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        var_13 -= ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            arr_12 [i_3] = ((/* implicit */long long int) (_Bool)0);
            var_14 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2 + 1])) | (((/* implicit */int) arr_8 [i_3]))));
            var_15 = ((/* implicit */unsigned short) ((signed char) var_2));
            var_16 = ((/* implicit */unsigned char) arr_8 [i_3]);
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_7))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            var_18 = ((/* implicit */long long int) (signed char)-62);
            arr_19 [i_4] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_5] [i_5 - 1]))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            arr_23 [i_4] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
            var_19 = ((/* implicit */signed char) ((unsigned char) arr_21 [i_6] [i_4] [13ULL]));
        }
        for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 4) 
        {
            var_20 *= ((/* implicit */short) max((((((/* implicit */_Bool) 2060086118U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)174)))), (max(((-(2147483647))), (((/* implicit */int) ((signed char) (signed char)-127)))))));
            arr_26 [i_4] [i_7] = ((/* implicit */_Bool) arr_8 [i_4]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
            {
                arr_30 [i_4] [i_7 - 1] [(unsigned char)5] = (((_Bool)1) ? (((/* implicit */long long int) arr_15 [i_7 - 2])) : (arr_28 [i_7 + 1]));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 2; i_9 < 15; i_9 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        arr_37 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_10 - 1] [i_9 + 1] [i_7 - 2])) ? (((((/* implicit */unsigned long long int) var_1)) % (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226)))));
                        arr_38 [i_4] [i_4] [i_9] [i_9] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_9 - 1] [i_10] [i_10] [i_10] [i_9 - 1])) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) ((_Bool) 2147483647)))));
                    }
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        arr_41 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) ((arr_10 [10LL] [i_4]) / ((+(((/* implicit */int) arr_40 [i_4] [i_7]))))));
                        arr_42 [i_9] [i_9] [i_8] [i_8] [i_11] [i_8] = ((/* implicit */long long int) (-(arr_18 [i_9] [i_9])));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned long long int) (unsigned char)193);
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_8))));
                        arr_46 [7LL] [(unsigned char)4] [(unsigned char)4] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_24 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (arr_44 [i_12] [i_9] [i_8] [i_7 - 1] [i_4])));
                    }
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((arr_20 [i_7 - 2]) > (((var_7) | (((/* implicit */long long int) var_3))))));
                        arr_51 [i_4] [i_9] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)215)) < (((/* implicit */int) (unsigned char)40))));
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-127)))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        arr_55 [i_9] [i_9] [i_8] [i_7] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_4] [i_7 - 1]))));
                        arr_56 [i_9] [i_4] [i_7] [i_8] [i_9 - 1] [i_8] [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9] [i_9 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (arr_44 [i_9] [i_9 + 1] [i_9 - 2] [i_9] [i_9])));
                    }
                    for (long long int i_15 = 2; i_15 < 12; i_15 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                        var_26 = ((/* implicit */signed char) (+(arr_10 [i_9 + 1] [i_15 + 1])));
                        arr_60 [i_9] [i_7] [i_9] [i_9] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_9 - 1] [i_7 - 2]))));
                        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_34 [i_7 + 2] [i_7] [i_4] [i_9])) | (((/* implicit */int) arr_34 [i_7 + 2] [i_7 - 1] [i_8] [i_7 + 2]))));
                    }
                    for (unsigned short i_16 = 1; i_16 < 13; i_16 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((arr_43 [i_4] [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_49 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
                        arr_65 [(_Bool)1] [(short)13] [i_8] [i_8] [i_9] = ((/* implicit */long long int) arr_31 [(unsigned char)14] [i_7 - 1]);
                    }
                }
                var_29 = ((/* implicit */unsigned long long int) (unsigned char)255);
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)23)) ? (arr_53 [i_4] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_4] [i_7 - 1] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    arr_68 [i_17] [i_8] [i_8] [i_7] [i_4] = ((/* implicit */unsigned long long int) arr_28 [i_4]);
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_7] [i_7] [(unsigned char)9] [i_17] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_53 [2LL] [2LL] [i_8] [2LL] [12LL] [i_4] [i_17]))))));
                    var_32 += ((/* implicit */int) (-(4294967287U)));
                    arr_69 [i_4] [2ULL] [i_8] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (arr_24 [i_7]) : (((/* implicit */long long int) arr_62 [i_4] [i_4] [i_7] [i_7] [i_8] [i_17] [i_17]))))) ? (((/* implicit */long long int) 230764728U)) : (9223372036854775807LL)));
                }
            }
            for (unsigned int i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
            {
                arr_72 [i_18] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)220)), (((arr_43 [i_7 - 2] [i_7] [i_7 - 2]) ? (((/* implicit */int) arr_43 [i_7 + 1] [i_7 + 2] [i_7 + 2])) : (((/* implicit */int) arr_43 [i_7 + 1] [6ULL] [i_7 + 1]))))));
                arr_73 [i_4] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-48)) : (2047)))), (((((/* implicit */_Bool) arr_70 [i_4] [i_4])) ? (((/* implicit */long long int) 3462378202U)) : (-6599627173351283608LL))))) & (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                arr_74 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_36 [i_4] [i_7 + 2] [i_7] [i_7 - 1] [i_4] [(unsigned short)1])), (var_1)))) ? (11130865882531641718ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)63)), ((unsigned char)152)))))));
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116))))))))))));
            }
        }
        var_34 = max((((/* implicit */long long int) (_Bool)1)), (8305500169429676839LL));
        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_4] [(_Bool)1])) ? (((/* implicit */long long int) var_5)) : (arr_24 [i_4])))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) > (8U)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_45 [i_4] [i_4]))))));
    }
}
