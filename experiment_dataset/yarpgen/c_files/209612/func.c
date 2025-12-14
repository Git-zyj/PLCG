/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209612
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (8278380306453818375LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = var_2;
        var_11 -= ((/* implicit */unsigned int) max((-8278380306453818375LL), (((/* implicit */long long int) 1998913245))));
        arr_3 [(short)0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) (~(0U))))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    var_12 |= ((/* implicit */long long int) ((max((((unsigned long long int) -413831991)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_13 ^= var_9;
}
