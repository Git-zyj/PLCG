/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36842
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
    var_12 = ((/* implicit */short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_13 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (3793641503U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : (11567419926999764880ULL)))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0 - 1])))))));
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */signed char) (((-(arr_0 [i_0]))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_11)) : (arr_0 [i_0])))) ? (((/* implicit */long long int) max((501325799U), (((/* implicit */unsigned int) (unsigned char)3))))) : (arr_0 [(_Bool)1])))));
    }
    var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 4294967280U)))) ? (((/* implicit */unsigned int) var_4)) : (((((var_3) * (((/* implicit */unsigned int) var_5)))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
