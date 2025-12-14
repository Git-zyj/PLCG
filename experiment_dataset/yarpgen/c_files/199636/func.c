/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199636
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_2)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_7)))))));
        var_13 *= ((/* implicit */unsigned short) (-(-6049059957249278856LL)));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1462809240), (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_9)) ^ (var_11)))) : ((~(7598250870947697531LL)))))) | (var_5)));
}
