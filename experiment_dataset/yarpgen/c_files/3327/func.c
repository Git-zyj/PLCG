/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3327
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
    var_17 = ((((/* implicit */_Bool) max((var_9), (var_6)))) ? (min(((-(18446744073709551615ULL))), (var_15))) : (((max((var_11), (var_15))) >> (((var_1) - (2260691047424226445ULL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = (+(arr_0 [i_0]));
        var_19 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0]));
        var_20 = ((((/* implicit */_Bool) 5328807607709099688ULL)) ? (var_16) : (arr_1 [i_0]));
        var_21 = (-(((4284548579375176820ULL) / (18317409810339758780ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_22 = ((1220621487723647573ULL) << (((5328807607709099674ULL) - (5328807607709099635ULL))));
        var_23 = ((var_8) * (arr_2 [i_1]));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (var_4)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_25 = ((((/* implicit */_Bool) var_2)) ? (((((5203785228466299665ULL) << (((13117936466000451953ULL) - (13117936466000451950ULL))))) & (arr_7 [i_2]))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_5 [16ULL] [1ULL]))) ? (5137171299271799548ULL) : (arr_3 [i_2]))));
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2])))) ? (5328807607709099695ULL) : (((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (arr_7 [i_2])))));
        var_27 = (((+(((var_4) + (arr_6 [i_2]))))) | (var_9));
    }
}
