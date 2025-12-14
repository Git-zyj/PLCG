/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243281
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
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        var_18 ^= ((((/* implicit */int) arr_1 [i_0 - 2])) / (((/* implicit */int) var_2)));
        var_19 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_17) : (((/* implicit */int) (signed char)(-127 - 1)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(signed char)10] [i_1])) - (var_17))))))) ? (((((((/* implicit */_Bool) 3052104041294951656LL)) ? (((/* implicit */unsigned long long int) var_0)) : (6ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1])), ((unsigned short)61445)))))));
        var_21 = (((-(((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) arr_3 [i_1])))))) / (((/* implicit */int) var_2)));
        var_22 = ((/* implicit */unsigned char) ((max((((unsigned long long int) var_14)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)64))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */unsigned long long int) (unsigned char)144)), (arr_0 [i_2]))), (((/* implicit */unsigned long long int) (short)-22)))) > (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))), (((/* implicit */unsigned int) max((arr_1 [i_2]), (((/* implicit */short) arr_5 [i_2]))))))))));
        arr_7 [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) var_6))), ((~(14768888007537661495ULL)))));
    }
    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_0)), (((long long int) arr_11 [(signed char)2])))))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_9 [i_3] [(unsigned short)4]))));
        var_26 = ((/* implicit */signed char) arr_10 [i_3]);
        var_27 ^= ((/* implicit */unsigned int) ((int) (signed char)-112));
    }
}
