/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238807
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
    var_13 = ((/* implicit */unsigned long long int) max((var_4), (((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    var_14 = ((/* implicit */unsigned short) (((-(3051097809U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)43)) == (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) (-(var_8))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_4))))));
        var_16 ^= ((/* implicit */short) var_11);
    }
    var_17 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_3)) : (1243869486U)))))));
    var_18 = ((/* implicit */short) var_6);
}
