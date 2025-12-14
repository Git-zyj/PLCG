/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19669
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)0))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)102))))) : (((long long int) var_7)))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((long long int) arr_5 [6])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [1LL]))) : (max((2999266592U), (((/* implicit */unsigned int) var_2))))))))))));
            var_21 = ((/* implicit */int) arr_4 [i_0]);
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) min((((long long int) 6322749786377622760ULL)), (((/* implicit */long long int) var_2))));
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)85))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-103)), (-4713954435199246004LL)))) : (((unsigned long long int) (_Bool)1)))))));
                            arr_19 [(unsigned short)6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_18 [i_4] [(_Bool)1] [i_4] [i_4 - 1] [i_3]), (((/* implicit */unsigned char) (signed char)32))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_4] [i_4] [i_4] [i_4 + 1] [i_3])), (753113728U)))) : (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_4] [i_4 + 1] [1LL])) ? (2291776377185417648ULL) : (arr_12 [(_Bool)1] [i_4] [i_4 - 1] [9LL])))));
                            arr_20 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)31135)) && (((/* implicit */_Bool) 2999266592U)))))) > ((~(var_8))));
                            arr_21 [i_0] [i_2] [0ULL] [(short)2] [0ULL] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) 753113728U)), (((long long int) min((1045370778U), (753113736U))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_6 = 4; i_6 < 7; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((int) var_12)) : (((((((/* implicit */_Bool) (unsigned short)2712)) ? (arr_23 [i_6] [i_0]) : (((/* implicit */int) arr_26 [i_7] [i_6 + 3] [i_0] [i_0])))) | (((/* implicit */int) arr_16 [i_6 - 1] [(signed char)2] [i_0] [i_7] [(signed char)2]))))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((12U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-112)))))))) ? ((-(((unsigned int) arr_26 [i_0] [i_0] [i_6 - 1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) var_19)), (arr_9 [i_0] [7ULL]))))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) & (((((/* implicit */_Bool) arr_10 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) arr_5 [i_0]))))));
                        var_26 = ((/* implicit */unsigned short) (+(1295700683U)));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29594)) ? (3541853560U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65513)))))) / (max((((/* implicit */unsigned long long int) var_16)), (2291776377185417651ULL)))));
        var_28 = ((/* implicit */long long int) ((int) (+(((/* implicit */int) (short)6601)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        {
                            arr_43 [i_8] [i_9] [i_10] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) var_16)) | (arr_35 [i_8] [(short)17] [i_8] [i_8])));
                            arr_44 [i_8] [(signed char)2] [i_10] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)112))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3468862767745040243ULL)) ? (((/* implicit */int) var_10)) : (arr_38 [i_10] [i_9] [(signed char)3] [i_10] [10LL])));
                            arr_45 [i_8] [i_9] [i_8] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_29 [i_8] [i_8]) >= (((/* implicit */int) var_5)))))));
                            arr_46 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_8] [i_10] [i_11] [i_12] [i_12])) ? (arr_42 [i_8] [i_8] [i_10] [i_10] [i_11] [i_10] [i_12]) : (arr_42 [i_10] [i_12] [0LL] [i_10] [i_10] [i_9] [(unsigned char)0])));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */long long int) ((var_9) ? (((/* implicit */int) arr_41 [i_8] [i_8] [i_9] [i_9] [13] [i_8])) : (((/* implicit */int) arr_41 [i_9] [i_8] [i_9] [i_8] [i_8] [i_8]))));
            var_31 ^= arr_39 [i_9] [i_9] [i_9] [i_8];
            arr_47 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_35 [i_8] [i_9] [i_8] [i_8]) : (((/* implicit */int) (short)-21045))));
        }
        for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) ((signed char) (+((-2147483647 - 1)))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (short)25779))));
        }
        var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)22))));
    }
    for (int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_4)))))) : (-3286974392252083822LL)))));
        var_36 = ((/* implicit */unsigned long long int) (short)31162);
    }
    for (int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_16 = 1; i_16 < 13; i_16 += 4) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                {
                    arr_62 [6LL] [i_16] [i_16] [i_15] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) var_12)), (var_19))));
                    var_37 = ((/* implicit */short) ((unsigned short) min((var_1), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_4)), (var_14)))))));
                    var_38 = ((/* implicit */signed char) max((max((((/* implicit */int) var_14)), (arr_29 [i_16] [i_17]))), (((/* implicit */int) ((var_8) < (((/* implicit */long long int) (+(((/* implicit */int) (short)12073))))))))));
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned int) (signed char)-87);
    }
}
