/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205188
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_4 [i_1 + 1]))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_5 [i_0] [2LL])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-63)) <= (((/* implicit */int) arr_1 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1 - 1] [i_1 - 1]))) / (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) - (var_17)))) ? (((long long int) var_14)) : (((/* implicit */long long int) ((unsigned int) arr_6 [10U] [i_1] [i_2] [i_1])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (signed char i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_20 [i_5] [i_6 + 3]), (arr_19 [i_5] [i_6 + 1])))) ? (((((/* implicit */_Bool) arr_19 [i_5] [i_6 + 1])) ? (arr_19 [(signed char)17] [i_6 + 1]) : (arr_19 [i_6] [i_6 + 1]))) : (((/* implicit */int) ((arr_20 [i_5] [i_5]) == (arr_20 [i_5] [i_5]))))));
                var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(short)3])) ? (((/* implicit */int) ((unsigned short) ((arr_17 [i_5]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-36)) : (arr_20 [i_5] [i_6])))) > ((~(arr_17 [i_6]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        {
                            var_21 *= ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7]))) : (arr_28 [i_7 + 1]));
                            var_22 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29265))) : (((long long int) (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7 + 2] [i_8] [i_9] [i_10]))))))));
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_7 + 3])) ? (arr_29 [i_7] [i_8] [i_9] [i_10] [i_9] [18LL]) : (arr_23 [i_7] [i_8] [i_10])))) : ((-(var_16)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 658938726)) && (((((/* implicit */_Bool) 1965181548U)) || ((_Bool)1)))))) : (max((((/* implicit */int) arr_26 [i_10] [i_7 - 1] [i_10])), (arr_23 [i_7] [i_7 + 3] [i_9])))));
                        }
                    } 
                } 
                arr_30 [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [3U])) || (((/* implicit */_Bool) arr_27 [i_7] [i_8] [i_8] [i_8]))))))) ? (((((/* implicit */_Bool) min((arr_22 [i_7] [i_8]), (arr_22 [i_7] [(_Bool)1])))) ? (min((((/* implicit */long long int) arr_21 [i_8])), (var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_7] [i_8])) ? (var_8) : (((/* implicit */unsigned int) arr_23 [i_8] [(signed char)22] [i_7]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63011)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (unsigned short)39631)))))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7] [17] [i_7] [i_7])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [12ULL] [i_8] [12ULL])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_8] [i_11])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7] [i_7] [i_7 - 1] [i_7]))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1648865567)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (var_9)))))))));
                            var_25 *= ((/* implicit */unsigned long long int) ((long long int) 4004401536U));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) max((var_26), (arr_32 [i_7] [i_7] [(unsigned short)12] [i_7])));
                arr_37 [i_7 - 1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_8] [i_7])) ? (-893648835306778937LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_7] [20LL])) && (((/* implicit */_Bool) (unsigned short)26463))))) : (((((/* implicit */_Bool) arr_27 [i_7 + 3] [i_7] [i_7] [i_7])) ? (arr_23 [i_7] [i_7] [i_7]) : (arr_23 [i_7 + 3] [i_7] [i_7])))))) ? (((/* implicit */unsigned long long int) 2792503249U)) : (((((/* implicit */_Bool) var_10)) ? (536870911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)28084)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            {
                arr_43 [i_14] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)33)), (2551443051U)));
                /* LoopNest 2 */
                for (short i_15 = 1; i_15 < 11; i_15 += 4) 
                {
                    for (short i_16 = 2; i_16 < 8; i_16 += 3) 
                    {
                        {
                            var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((~(-1648865568))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_15 - 1])) == (arr_29 [i_13] [i_15 - 1] [i_16 - 2] [i_16 + 3] [i_14] [i_16]))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_17 = 0; i_17 < 12; i_17 += 3) 
                            {
                                arr_52 [i_13] [i_16] [i_16] [i_16] [i_17] = ((/* implicit */long long int) arr_18 [i_13]);
                                var_28 *= ((/* implicit */unsigned char) arr_21 [i_13]);
                                arr_53 [i_15 - 1] [i_16 + 3] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_16] [i_16 + 4] [22ULL] [i_16 + 1] [22ULL])) ? (((/* implicit */int) arr_39 [6U] [i_16 + 1])) : (((/* implicit */int) var_13))));
                            }
                            for (signed char i_18 = 1; i_18 < 11; i_18 += 1) 
                            {
                                var_29 *= (-(min((((/* implicit */unsigned int) ((signed char) var_10))), (((((/* implicit */_Bool) 7980862049238035592LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_16 - 1]))))))));
                                var_30 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) max((var_9), (((/* implicit */unsigned int) var_13))))));
                            }
                        }
                    } 
                } 
                var_31 *= ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) 4004401523U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_17)))))));
                var_32 = ((/* implicit */unsigned char) arr_56 [i_13] [i_13] [i_14] [i_14] [i_13]);
            }
        } 
    } 
}
