/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203871
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
    var_12 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4884))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (2581534887142655370LL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((7U) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (3887930317U) : (3962431214U)))))), (-4856604071166026923LL)));
        var_14 += ((/* implicit */unsigned char) max(((-(((unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) (unsigned short)17373))), ((+(((/* implicit */int) (short)-28460)))))))));
    }
}
