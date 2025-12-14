/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239137
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) 0LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55405))))), (((/* implicit */long long int) var_13)))))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)92))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))) : (12132268064324583653ULL)))))));
    var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)-22))))) >= (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_5))))))));
    var_21 = ((/* implicit */unsigned short) ((unsigned int) 14620179551035571123ULL));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_11);
        var_22 = ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 14620179551035571123ULL)));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [8LL])) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 7; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_24 = ((unsigned int) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)104)) || (((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)37))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) arr_6 [i_1] [i_2] [i_2]);
                        arr_13 [i_2] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)7959)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (3826564522673980493ULL)))));
                        arr_14 [i_0] [i_2] [i_2] [i_3 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (arr_2 [i_2 - 2])))) : (min((((/* implicit */unsigned long long int) arr_4 [i_3] [i_3])), ((~(arr_5 [i_0])))))));
                        var_25 *= ((min((arr_6 [i_2 - 2] [i_3 + 1] [i_3 - 1]), (arr_6 [i_2 - 2] [i_3 + 1] [i_3 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [2U] [i_2] [(signed char)2]))) : (((((/* implicit */_Bool) arr_11 [(signed char)8] [i_1] [i_0] [i_2 + 1] [(signed char)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 2] [i_1] [i_3 + 1]))) : (arr_1 [i_0] [(unsigned char)1]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        arr_18 [i_4] = ((unsigned short) 14620179551035571141ULL);
        var_26 = ((/* implicit */unsigned int) ((unsigned long long int) var_12));
        var_27 = ((/* implicit */_Bool) var_14);
    }
    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        arr_22 [(unsigned char)11] = ((/* implicit */unsigned char) arr_21 [i_5]);
        var_28 = ((/* implicit */signed char) max((3826564522673980490ULL), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)6)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)95))))), (((/* implicit */long long int) (unsigned short)37193)))))));
        var_29 = ((((/* implicit */_Bool) ((max((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (arr_20 [i_5]))))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_21 [(_Bool)1])) : (((/* implicit */int) (unsigned short)55539))))) ? (((/* implicit */long long int) arr_20 [i_5 - 1])) : (var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_21 [i_5 + 1]))) ? (((9U) | (11U))) : (arr_20 [i_5 + 1])))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        arr_25 [i_6] [i_6] = arr_24 [i_6] [i_6];
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) ((unsigned int) arr_17 [i_8 - 2]));
                    arr_30 [(unsigned short)3] [i_7] [i_8] = ((/* implicit */unsigned short) arr_17 [i_8 + 1]);
                    arr_31 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_24 [7U] [i_8]) >> (((((/* implicit */int) arr_26 [i_6])) - (25662)))))) || (((/* implicit */_Bool) (signed char)66))));
                }
            } 
        } 
        var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_19 [14LL]))));
    }
}
