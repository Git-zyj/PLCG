/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52932
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 746132216)) / (6477545186139801590LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)29479)))) : (min((((/* implicit */unsigned int) 1614521386)), (1965370284U)))))) ? ((+((+(((/* implicit */int) var_12)))))) : (((/* implicit */int) (unsigned short)36056))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6491780793312747137LL)) ? (((/* implicit */int) (unsigned char)89)) : (794790473)));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_20 += ((/* implicit */unsigned int) 6577682630102121542LL);
        arr_4 [i_1] = ((/* implicit */long long int) 1863685821);
        var_21 = ((long long int) (+(4908630552363539960LL)));
        arr_5 [i_1] [4] = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_12)) : (var_14)))), ((~(-6577682630102121543LL))))));
        arr_6 [i_1] [i_1] = (((!(((var_12) && (((/* implicit */_Bool) var_8)))))) ? (var_9) : (((/* implicit */long long int) min((((var_12) ? (3680638995U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), ((~(var_7)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((var_10) >> (((1614521386) - (1614521362)))));
        arr_10 [1] = ((/* implicit */unsigned char) ((int) ((var_0) ? (((/* implicit */int) (unsigned char)89)) : (var_8))));
    }
    var_23 = ((/* implicit */int) var_9);
    var_24 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) | (var_9)))) ? (((/* implicit */int) ((_Bool) var_2))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_3) : (var_2))))) & (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_14)), (0ULL)))))));
    var_25 -= max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))))), ((unsigned char)182));
}
