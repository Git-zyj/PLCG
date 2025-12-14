/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37845
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
    var_14 |= ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 += ((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned short)21]);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_0 [i_0] [4ULL])))) && (((/* implicit */_Bool) var_1))));
        var_17 = (signed char)31;
    }
    for (unsigned long long int i_1 = 3; i_1 < 6; i_1 += 2) 
    {
        var_18 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) var_3)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_4 [i_1 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_3) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) : (((((/* implicit */unsigned int) arr_1 [i_1])) ^ (arr_4 [i_1])))))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 16478050312598115289ULL)))))) >= (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 140733193388032LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-5823))))) ^ (16478050312598115283ULL)))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 521143218589040039ULL)) ? (((/* implicit */unsigned long long int) (~((-(262397355946155112LL)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)30720)) : (arr_1 [i_1])))) ? (min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
        var_21 += arr_1 [i_1 - 3];
        arr_5 [0U] |= ((/* implicit */long long int) arr_1 [i_1]);
    }
    var_22 = ((/* implicit */long long int) var_12);
}
