/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199120
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_11))));
    var_20 = ((/* implicit */unsigned long long int) (-(var_14)));
    var_21 = ((/* implicit */unsigned short) (~(var_1)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) (((+((+(arr_0 [i_0] [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)39377)), (438986511)))) ? (((/* implicit */int) (short)17432)) : ((+(((/* implicit */int) (short)-28072)))))))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) (short)-17432);
        var_23 = ((/* implicit */long long int) (((-(arr_4 [i_1]))) | ((+(arr_4 [i_1])))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (7U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-28072)))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) arr_5 [i_1]))))) ^ (((long long int) var_14))));
        var_26 ^= (short)17407;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) var_18);
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_8))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17432)) ? (((/* implicit */long long int) 471557051U)) : (arr_8 [i_3])));
        arr_11 [i_3] = (~(13427918935574358862ULL));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28072)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))) : (var_3)));
    }
}
