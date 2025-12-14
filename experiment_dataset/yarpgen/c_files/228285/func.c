/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228285
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
    var_12 *= ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_3 [(unsigned char)8] [i_0 + 1]))) | (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))))))));
            arr_4 [(short)2] [(short)2] [i_0 - 3] = ((/* implicit */unsigned long long int) 1061564584635274131LL);
        }
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((((long long int) min((1061564584635274131LL), (1061564584635274137LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) (short)-22632)) : (((/* implicit */int) arr_8 [i_0] [i_2])))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_7 [i_0 + 1] [i_2] [i_2] [3ULL]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_0 - 2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_3])))))) : (((((/* implicit */_Bool) 0)) ? (arr_7 [i_3 - 1] [i_3 + 3] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_16 = ((((/* implicit */unsigned long long int) arr_2 [(unsigned char)5])) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1]))) & (max((((/* implicit */unsigned long long int) var_0)), (arr_7 [(short)9] [i_3] [i_2] [i_0 + 1]))))));
                        var_17 -= ((/* implicit */signed char) var_10);
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        var_18 &= ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((+(((/* implicit */int) arr_5 [i_5] [i_5])))) : (((/* implicit */int) arr_5 [i_5] [i_3])));
                        var_19 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3 + 4] [i_2])) ? (var_9) : (var_9))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)22631)))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_2])) ? (((/* implicit */int) arr_8 [i_0 - 3] [9LL])) : (((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 3]))));
                        var_21 -= ((/* implicit */signed char) (_Bool)1);
                    }
                }
            } 
        } 
        var_22 *= (!(((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (short)1382))))))))));
    }
}
