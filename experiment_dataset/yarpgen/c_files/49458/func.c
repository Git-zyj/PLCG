/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49458
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned int) (!(((_Bool) 18446744073709551615ULL))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (signed char)55);
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [(short)8])) : (((/* implicit */int) arr_6 [i_1] [i_1])))) == (((/* implicit */int) max((((/* implicit */short) (signed char)-50)), (var_0)))))), (((arr_6 [i_1 - 1] [i_1 - 1]) || (arr_6 [i_1] [i_1])))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)-109)) ^ (492876317))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-22104)) == (((/* implicit */int) (signed char)108))))) : (((/* implicit */int) var_9)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -25)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)116)) * (((/* implicit */int) (_Bool)0))))) : (4227604781316844024LL)));
    }
    /* LoopSeq 2 */
    for (int i_2 = 4; i_2 < 19; i_2 += 2) 
    {
        var_15 -= (!(((/* implicit */_Bool) arr_9 [i_2 - 3])));
        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3 - 1])) ? (arr_10 [i_3 - 1]) : (arr_10 [i_3 + 1]))))));
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-86))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) <= (4253984204649973587ULL)))) : ((~(((/* implicit */int) (signed char)109))))));
    }
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_10))));
    var_20 *= ((/* implicit */_Bool) var_5);
}
