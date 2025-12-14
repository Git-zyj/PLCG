/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27890
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (unsigned char)152))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)32294)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_3 [i_1 + 4]), (((((/* implicit */_Bool) 663721497)) ? (((/* implicit */int) (short)32288)) : (((/* implicit */int) arr_4 [1U] [i_1 + 2]))))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (short)32757))))), (max((arr_5 [i_1]), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_1 + 4]))))));
        arr_7 [(short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned short)65528)))) & (arr_3 [i_1 + 2])))) ? ((+((+(((/* implicit */int) (short)32761)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 561007787U))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((((((/* implicit */unsigned int) var_9)) - (((((/* implicit */_Bool) (short)32749)) ? (561007787U) : (561007793U))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (min((((/* implicit */unsigned short) (short)-32767)), (var_3)))))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((/* implicit */long long int) 561007796U)), (9223372036854775807LL))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)119)) || (((/* implicit */_Bool) max((var_2), (var_6)))))) ? (1366494306U) : (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (1366494319U))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_16 += ((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_3]);
            arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))) - (4294967287U)));
        }
        arr_14 [i_2] = ((/* implicit */long long int) 2133239512U);
    }
    var_17 = ((/* implicit */unsigned short) (short)-32762);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)-32748))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)))))))));
}
