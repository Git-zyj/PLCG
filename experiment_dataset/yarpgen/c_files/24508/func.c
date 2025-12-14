/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24508
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)3)))) || ((_Bool)1)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [6LL])) : (((/* implicit */int) arr_2 [i_0]))))))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) || (((/* implicit */_Bool) (~(arr_1 [i_0]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_8)))))));
    }
    var_12 |= ((/* implicit */unsigned long long int) (unsigned short)32704);
    var_13 = ((/* implicit */unsigned int) var_3);
    var_14 = ((/* implicit */unsigned char) (((((((_Bool)1) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) var_5))));
}
