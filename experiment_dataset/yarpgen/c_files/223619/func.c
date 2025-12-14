/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223619
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
    var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)10803)) % (1549956275))))) && (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_17))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3407578382U)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((signed char) var_1)))) ? (((((/* implicit */unsigned int) arr_3 [i_0])) % (((((/* implicit */_Bool) var_17)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10803))))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (unsigned short)10803)) : (-803881397))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))))) >> (((((((/* implicit */int) (short)-32753)) / (((/* implicit */int) (short)27700)))) + (16)))));
        arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) -803881388)) ? (-2560712194683089590LL) : (((/* implicit */long long int) -1568638142)))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_10)))))))));
    }
}
