/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199971
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                {
                    var_12 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) * (arr_11 [i_1] [i_2 + 1] [i_2 + 1] [i_2] [i_3]));
                    arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 1] [i_0])) ? (arr_10 [i_0] [i_1] [i_2 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13395)))));
                    arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (short)-131)) ? (((/* implicit */int) arr_3 [i_3] [16U] [i_1])) : (((/* implicit */int) (short)122))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [i_2] [i_5]))));
                        var_13 = ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_4]);
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)130)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1]))))) != (arr_17 [i_2 + 1] [i_2] [i_2] [i_4]))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_1] [i_2 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [(unsigned short)10] [i_2 + 1]))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)131)) << (((var_9) - (2555992489U)))))) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_2 + 1] [i_6] [i_4])) : (arr_22 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((var_2) << (((arr_7 [i_0] [i_2 + 1] [i_2 + 1] [i_2 + 1]) - (1184756193U))))))));
                        var_18 &= ((/* implicit */short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2 + 1] [i_4]))));
                    }
                    var_19 = ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1] [7ULL] [i_2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [(signed char)11]))));
                    arr_23 [2U] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) var_9);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])) == (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                    var_21 = ((/* implicit */_Bool) var_4);
                }
                var_22 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_2 + 1]))));
            }
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) var_5)) ^ (var_7))))) > (((((/* implicit */_Bool) (short)111)) ? (((/* implicit */int) (short)-131)) : (((/* implicit */int) (short)-136))))));
            var_23 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_1] [i_1])), (arr_17 [i_0] [i_0] [i_1] [i_0])))), ((~(arr_10 [i_0] [i_0] [i_1] [i_1])))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            arr_29 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_7])) ? (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_7] [i_0] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_0] [i_7]))))), (arr_7 [i_7] [i_0] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 3; i_8 < 23; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (min((arr_17 [i_0] [i_8 - 3] [i_7] [i_0]), (arr_17 [i_0] [i_7] [i_8] [i_0]))) : (arr_17 [i_0] [i_7] [i_8] [i_7])));
                        arr_35 [i_0] [i_7] [i_7] [(signed char)8] |= ((/* implicit */_Bool) (-(min((arr_7 [i_8 - 3] [i_8 - 2] [i_8] [i_8 + 1]), (((/* implicit */unsigned int) (short)131))))));
                        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [i_0] [i_7] [17ULL] [17ULL] [i_9])), (var_9)))), (((((/* implicit */_Bool) (short)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-131))) : (arr_11 [i_0] [i_7] [i_7] [i_9] [i_8 - 3]))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((arr_30 [i_0] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_7] [(signed char)15]))))))))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) ((arr_31 [i_0] [i_10] [18LL]) & (arr_31 [i_10] [i_10] [i_0])));
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                for (short i_12 = 1; i_12 < 23; i_12 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_11] [i_12 - 1])) ? (((var_6) ^ (arr_21 [(signed char)16] [(signed char)16] [i_11] [i_10] [12] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-120)))));
                        arr_44 [i_10] [i_10] [i_12] = ((/* implicit */unsigned long long int) (short)130);
                        /* LoopSeq 3 */
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            var_29 = ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_10] [i_10] [20U] [i_13])) : (((/* implicit */int) var_10)));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 714786721)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-118)))) : (var_5)));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_12 - 1] [i_12] [i_12 + 1])) ? (arr_31 [i_12 - 1] [i_12] [i_12 + 1]) : (((/* implicit */unsigned long long int) -9LL))));
                        }
                        for (unsigned long long int i_14 = 3; i_14 < 21; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-131))))) ? (((/* implicit */int) arr_42 [i_11] [i_14])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-130)))))));
                            var_33 = ((/* implicit */unsigned short) ((9LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10]))) == (arr_21 [i_0] [i_0] [i_11] [i_0] [i_12 - 1] [i_14 - 3])))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            var_34 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_31 [i_0] [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9)))));
                            arr_53 [i_12] [i_12] [i_11] [i_0] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_45 [i_15] [i_12 - 1] [8] [i_0] [i_10] [i_0])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned long long int) var_6)) % (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-714786737) : (((/* implicit */int) (short)129)))))));
                            arr_54 [i_15] [i_15] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_15] [(_Bool)1] [i_15] [i_12 - 1] [i_11])) >> (((((/* implicit */int) arr_50 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_10])) - (122)))));
                            arr_55 [i_15] [i_12] [i_12] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1586009081U)) : (arr_10 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])));
                        }
                    }
                } 
            } 
        }
        arr_56 [i_0] |= ((/* implicit */unsigned char) ((signed char) min((((int) -2LL)), (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) arr_47 [i_0] [18ULL] [i_0] [(unsigned short)22] [i_0])) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0])))))));
    }
}
