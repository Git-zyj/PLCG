/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32860
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (var_2))))) == (min((1376027679569617295LL), (((/* implicit */long long int) ((unsigned char) (short)32767))))))))));
    var_16 = ((/* implicit */signed char) 2147483638);
    var_17 ^= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (_Bool)1)))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_12)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((((/* implicit */signed char) var_9)), ((signed char)123))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((max((16891297801514252478ULL), (((/* implicit */unsigned long long int) (signed char)73)))) - (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)73)))), ((~(((/* implicit */int) arr_2 [(short)2])))))))));
        var_19 -= ((/* implicit */long long int) (_Bool)1);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) min((arr_11 [i_3 + 1] [i_1 + 1] [16LL] [i_3 - 1]), (((/* implicit */short) arr_7 [i_0 + 1] [i_0 + 1] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (arr_12 [i_0 + 2] [i_1] [i_2 + 1] [(short)17]) : (arr_12 [i_0 + 2] [i_0 + 2] [16ULL] [15U])))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)113)) ^ (((/* implicit */int) (signed char)66))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)7598)))))) : (arr_10 [i_3 - 1] [i_3] [i_3])))))));
                        var_21 ^= ((/* implicit */short) (signed char)-114);
                        arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_2 - 2] [i_3 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) max(((signed char)127), (max((arr_7 [i_3] [i_1 - 2] [i_0 - 1]), (((/* implicit */signed char) var_8)))))));
                    }
                } 
            } 
        } 
        var_22 *= ((/* implicit */signed char) ((18446744073709551602ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123)))));
    }
}
