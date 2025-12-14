/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231521
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [(unsigned short)14] [i_0] [i_2] [(unsigned short)14]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 + 1] [i_2]))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1 + 1]))));
                    var_14 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [15ULL] [i_1 - 2] [i_1 - 2] [i_1 + 2])) ? (((((/* implicit */_Bool) 3757212379484780310ULL)) ? (((/* implicit */int) (unsigned short)16352)) : (((/* implicit */int) (short)12723)))) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1] [i_1 - 2] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_3 + 2] [i_3 + 2] [i_4 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_4] [(short)9] [i_3 + 2] [(signed char)4] [i_4 + 2])) : (var_8)))) : (((((/* implicit */_Bool) arr_8 [(unsigned char)7] [i_1] [i_1] [i_1] [i_3 + 1] [i_4 + 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3 + 2] [i_1] [(unsigned char)6] [9LL] [i_3 + 2] [i_3])))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2] [i_4]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [1ULL] [i_1] [1ULL] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) arr_8 [i_0] [(_Bool)0] [i_1] [i_0] [i_1 - 1] [i_2]))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) 14689531694224771308ULL);
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                {
                    var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_6 - 1] [i_0] [i_5 + 2])) && (((/* implicit */_Bool) var_5))));
                    arr_19 [i_6 + 1] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_5]);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-6297))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)8)) : (var_10)))) : (((arr_14 [i_6] [4] [(signed char)15]) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((+(arr_13 [i_7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [3LL])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_7] [i_7]))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31)) + (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) ? (arr_15 [i_7] [i_7] [i_7] [i_7]) : (((((/* implicit */_Bool) var_8)) ? (3757212379484780291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [(signed char)15] [i_7])))))));
    }
    var_23 = ((/* implicit */_Bool) var_11);
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) var_9)) : (var_10))) : (((((/* implicit */_Bool) 14689531694224771305ULL)) ? (var_8) : (((/* implicit */int) (short)21183)))))))));
}
