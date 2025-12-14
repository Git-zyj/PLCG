/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42606
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) 380950543U)) ? (((/* implicit */unsigned long long int) -2070439644809810620LL)) : (22ULL))))));
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) arr_2 [(unsigned char)14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1] [i_0 - 3])))) : ((((!(((/* implicit */_Bool) var_0)))) ? (arr_4 [i_1 + 1] [i_0 - 1] [(signed char)21]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_2]))) : (var_11))))))));
                                var_14 = ((/* implicit */unsigned char) arr_7 [i_3] [i_1] [i_2]);
                                var_15 &= ((/* implicit */unsigned int) min((arr_12 [i_1 + 1]), (arr_4 [i_4] [i_2] [i_1 + 1])));
                                var_16 = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) arr_0 [i_5]);
                        var_18 += ((/* implicit */unsigned char) max((max((arr_15 [i_0] [i_0] [i_0 - 3] [i_0] [i_1] [i_1 + 1]), (arr_15 [i_0] [i_0] [i_0 - 3] [i_1 + 1] [(_Bool)1] [i_1 + 1]))), (((arr_15 [i_0] [(signed char)5] [i_0 - 3] [i_0 - 1] [i_0] [i_1 + 1]) || (arr_15 [0U] [i_0] [i_0 - 2] [i_1] [i_1] [i_1 + 1])))));
                        arr_16 [17ULL] [i_1] [(_Bool)1] [i_5] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_1] [10U] [i_5]);
                        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (arr_7 [i_0 - 1] [i_2] [i_5]) : (arr_7 [i_0 + 1] [i_0 - 1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [(unsigned short)7] [(unsigned short)7] [10ULL])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2]))))) ? (((((_Bool) arr_3 [(unsigned char)15])) ? (((/* implicit */int) arr_18 [i_6 + 2] [i_6 + 1] [i_6 + 4] [i_6 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)3] [i_1]))))))) : (((/* implicit */int) min((arr_11 [i_0 - 1] [i_6] [3ULL] [i_6] [4ULL]), (arr_11 [i_0 + 1] [i_6] [i_6 + 4] [i_6] [i_6])))))))));
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_22 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(arr_15 [i_0 - 1] [i_0] [i_1 + 1] [i_2] [i_6 + 1] [18])))), (((((/* implicit */_Bool) arr_12 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [17U] [17U] [i_6] [i_7])))))))), (max(((+(arr_4 [i_1] [i_2] [i_6 - 2]))), (var_4)))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 19; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((unsigned char) arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]));
                            arr_24 [i_0] [i_0 - 3] [i_8] [i_0] [21U] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [15U]);
                        }
                    }
                    for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
                    {
                        var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (signed char)116)) : (-2046140922)))))))));
                        arr_28 [i_0 - 3] [8U] [(_Bool)1] [(_Bool)1] [i_2] [i_2] |= ((/* implicit */short) arr_14 [i_0] [4] [i_0] [i_0 - 2]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 4; i_10 < 21; i_10 += 1) 
                        {
                            arr_31 [i_10] [i_9] [(unsigned char)13] [i_9 + 1] [(_Bool)1] [i_9] [10LL] = ((/* implicit */long long int) arr_4 [i_10 + 1] [i_9] [i_0 - 1]);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -2046140922)) : (380950554U)));
                            arr_32 [i_0 - 1] [4U] [i_0] [i_0] [i_9] [i_0 - 2] [4ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_1 + 1] [i_9 - 2] [i_1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_13 [i_1] [i_1]))))) : (((((/* implicit */_Bool) 3509844793U)) ? (3509844793U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39051)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_9] [i_9] [i_1] [i_1] [4])) : ((+(arr_10 [i_0] [i_1] [i_2] [i_9]))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_0] [i_9] [i_10 + 1])))))))));
                            var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0] [i_0 - 3] [9ULL]))));
                        }
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((~(var_11)))));
}
