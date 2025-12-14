/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226906
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
    var_10 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)7))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)21))))) ? (((/* implicit */int) arr_1 [i_4] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_8 [i_4 - 1] [i_4] [i_3] [i_2] [(_Bool)1] [i_1] [i_0])), (arr_2 [(short)8] [i_2] [i_2])))))));
                                var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_4 - 1] [i_4 + 2])) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_4 - 1] [i_4 + 3])) : (((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) (-(arr_9 [i_2] [i_1] [i_1] [i_0] [i_0])));
                }
            } 
        } 
        arr_10 [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0]))))));
        var_14 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_5)) ? (-486620570) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
        arr_11 [i_0] = ((/* implicit */short) var_9);
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_4)))) : (-486620554))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_8), (((/* implicit */short) arr_14 [i_5]))))), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)28))))) < (((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_5] [i_5]))) : (var_0))))))) : (max((arr_2 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_12 [i_5]))))));
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_12 [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_7 [i_5] [i_5] [i_5] [i_5])))) ? (((((/* implicit */unsigned long long int) 9223372036854775807LL)) & (arr_2 [i_5] [i_5] [i_5]))) : (min((((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_5] [i_5])), (arr_2 [i_5] [i_5] [i_5]))))) / (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)127)))) ? ((~(arr_13 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_5])) && (((/* implicit */_Bool) var_9)))))))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_5 [i_6] [i_5] [i_5])) : (((/* implicit */int) var_6)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5] [i_6] [i_5])))))));
            var_19 -= ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_6 [i_5])) / (((/* implicit */int) arr_6 [i_5]))))));
            /* LoopSeq 1 */
            for (int i_7 = 2; i_7 < 10; i_7 += 1) 
            {
                var_20 += ((/* implicit */signed char) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) 131613290))))))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_7 - 2] [i_7 - 1] [i_7 - 1])) < (((/* implicit */int) (_Bool)1)))))));
                var_21 -= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))))) - (((unsigned int) var_2)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) arr_21 [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 - 2])) : (((/* implicit */int) arr_21 [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7 + 1])))))));
                var_22 = ((/* implicit */long long int) arr_19 [i_7] [i_7] [i_7] [i_7 + 1]);
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((int) arr_3 [i_5] [i_5] [i_5]));
                            arr_35 [i_5] [i_5] [(short)2] [i_9] [i_5] [i_11] = ((/* implicit */long long int) arr_33 [i_10] [i_9] [i_8] [i_5]);
                            arr_36 [i_5] [i_9] [i_8] [i_11] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(422212465065984LL)))) ? (((((/* implicit */int) (signed char)-29)) & (((/* implicit */int) (signed char)-1)))) : (454917124))) != (((/* implicit */int) (unsigned char)191))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_12 [i_9 - 1])), (var_1)))) ? (((((/* implicit */int) arr_30 [i_9] [i_9 - 1] [i_9] [i_9 - 1])) % (((((/* implicit */int) arr_15 [i_10])) ^ (((/* implicit */int) arr_16 [i_11] [i_9])))))) : (((/* implicit */int) ((signed char) ((signed char) 175458819))))));
                        }
                    } 
                } 
            } 
            var_25 ^= ((/* implicit */unsigned int) -1LL);
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_5] [i_5] [i_8]))))) ? (var_5) : (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)179)) | (((/* implicit */int) arr_24 [2LL] [i_8] [i_8])))))))));
        }
        var_27 = ((/* implicit */short) max((((((/* implicit */_Bool) ((2224090517246640043ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) (signed char)22)))), (min((((/* implicit */int) arr_4 [i_5] [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_28 = ((/* implicit */short) 16222653556462911572ULL);
        var_29 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_38 [6ULL] [6ULL])) ? (arr_38 [i_12] [i_12]) : (((/* implicit */int) (signed char)-1))))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_2)) : (arr_38 [i_12] [i_12])));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16222653556462911573ULL)) ? (((/* implicit */int) (short)17501)) : ((~(((/* implicit */int) (short)-17501))))));
    }
    var_32 = ((/* implicit */_Bool) var_1);
}
