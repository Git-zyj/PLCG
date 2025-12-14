/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200009
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_15 = min((((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */long long int) arr_0 [i_0] [i_0 + 1])) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) ((unsigned char) max((var_10), (var_5))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) (unsigned char)124);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (long long int i_4 = 4; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_17 = ((long long int) var_1);
                            var_18 = ((/* implicit */long long int) ((unsigned char) (~(arr_10 [i_4 + 1] [i_0 - 1]))));
                        }
                    } 
                } 
            } 
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [2LL] [4ULL])) ? (max((arr_8 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) arr_6 [i_0] [19LL] [i_0])))))))) ? (((/* implicit */long long int) 0U)) : (((long long int) arr_11 [i_0 + 1] [i_0 - 1]))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (int i_7 = 2; i_7 < 14; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_18 [i_7 + 3] [2U] [i_7] [i_7 - 2]) - (arr_18 [i_7 + 2] [i_7 + 1] [8ULL] [i_7 + 1])))) ? (((arr_15 [i_5] [i_6]) << (((arr_11 [i_5] [i_8]) - (1181389465))))) : (min((((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_7] [i_8] [i_8])) || (((/* implicit */_Bool) arr_11 [i_5] [i_5])))))))));
                        var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5])) : (var_6))), (((/* implicit */unsigned int) ((_Bool) ((unsigned short) var_7))))));
                        var_21 = ((/* implicit */int) ((((_Bool) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [(unsigned short)0] [i_7 + 3] [17U] [i_7])) / (((/* implicit */int) arr_22 [i_5] [i_7 + 4] [i_7] [3ULL]))))) : (min((4294967295U), (((/* implicit */unsigned int) var_1))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_7 + 1] [i_6] [i_7 - 2])))) : (((((/* implicit */_Bool) var_5)) ? (((arr_7 [i_7] [i_6] [i_7] [i_6]) ? (var_11) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) var_9))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [22LL] [3U] [i_5] [i_5])) ? (arr_8 [i_5] [i_5] [i_5] [i_5] [2LL] [19LL]) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) max((arr_10 [i_5] [i_5]), (((/* implicit */long long int) ((unsigned short) -9223372036854775792LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2300900480U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_24 += ((/* implicit */_Bool) var_9);
    var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6186921421108423381ULL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))), (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))));
}
