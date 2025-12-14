/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44674
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(2610363047046496211ULL))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2610363047046496211ULL)))))) : (max((((/* implicit */unsigned long long int) (signed char)-77)), (arr_0 [i_0] [i_0])))))) ? (262142U) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) var_13))))))));
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_20 ^= (+(840127654));
        var_21 = arr_1 [i_0];
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        var_22 += arr_5 [i_1];
    }
    var_23 = ((/* implicit */signed char) (((_Bool)1) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 3171971659U))));
}
