/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193331
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
    var_15 &= ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_16 &= ((/* implicit */long long int) var_5);
                    var_17 = ((/* implicit */unsigned int) (-((((+(4611686018427387904LL))) - ((-(-4611686018427387904LL)))))));
                    var_18 = (~(4611686018427387882LL));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) max((-4611686018427387899LL), (4611686018427387899LL)));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            for (int i_4 = 3; i_4 < 6; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_14 [i_6] [i_4] [i_4] [i_3 + 1] [3U])) ? (((/* implicit */long long int) 3894532144U)) : (var_8))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (arr_14 [i_0] [i_3] [i_4] [i_5] [4U])))))), (((long long int) ((1U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [7U]))))))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0]))) : (arr_13 [0U] [0U] [i_4] [i_5 + 2] [0U] [i_5])))) ? (arr_4 [i_6]) : (((/* implicit */long long int) var_1)));
                                var_22 = ((/* implicit */unsigned short) ((unsigned int) ((signed char) 4611686018427387921LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (arr_18 [i_0] [i_3] [i_3] [i_4 - 2] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((var_1) & (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4]))));
                                arr_21 [9LL] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
                                var_24 = ((/* implicit */unsigned char) ((signed char) (+(arr_20 [i_0] [i_3] [i_4] [i_7] [i_8]))));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8752001174572399567LL)) ? (3239984017125042306LL) : (((/* implicit */long long int) 2930018477U))))) ? (-3239984017125042307LL) : (((/* implicit */long long int) (~(-460853463))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 1]))))) : (((((/* implicit */_Bool) arr_19 [i_4] [i_3 + 1] [i_7 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4611686018427387921LL)) ? (((/* implicit */int) arr_19 [i_4] [i_3] [i_4 - 1])) : (((/* implicit */int) var_13))))) : (max((arr_16 [1U] [i_3 + 1] [i_4] [i_7]), (arr_4 [i_7])))))));
                                var_26 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)41040)))), (max((((/* implicit */int) (!(((/* implicit */_Bool) 873244979))))), (var_3)))));
                            }
                        } 
                    } 
                    var_27 *= ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_4])) ? (((/* implicit */int) arr_15 [i_3 - 1] [i_3 + 1] [2U] [i_4] [i_4 + 4] [7U])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        arr_24 [i_9] = ((/* implicit */unsigned char) -4611686018427387905LL);
        var_28 ^= ((/* implicit */long long int) (-((+(((/* implicit */int) ((((/* implicit */long long int) var_5)) == (arr_22 [(signed char)22] [(signed char)22]))))))));
        var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((4611686018427387918LL), (((/* implicit */long long int) (signed char)107))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_9] [i_9])) ? (((/* implicit */int) arr_23 [i_9] [i_9])) : (((/* implicit */int) arr_23 [i_9] [i_9]))))) : (((unsigned int) var_10))));
    }
}
