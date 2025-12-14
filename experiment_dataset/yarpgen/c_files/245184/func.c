/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245184
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((-250904483), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_5)) : (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (12ULL)));
    var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */_Bool) -1490425716322879585LL)) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1))))))))));
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 31ULL))) ? (max((max((var_9), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) (signed char)-64)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_18 *= arr_2 [(signed char)10] [(signed char)10];
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned char) ((arr_0 [(short)8] [i_0 - 1]) % (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])));
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1] [i_1])) & (((/* implicit */int) ((unsigned short) (signed char)-75)))));
    }
    for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_2 - 3])))) >= (((unsigned int) -24666569))))), ((~(max((((/* implicit */unsigned long long int) arr_5 [i_2] [(signed char)21])), (18446744073709551573ULL)))))));
        var_21 = ((/* implicit */long long int) (signed char)-107);
    }
    var_22 = ((/* implicit */signed char) min((var_22), ((signed char)64)));
}
