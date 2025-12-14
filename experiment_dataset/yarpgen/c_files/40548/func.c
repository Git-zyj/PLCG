/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40548
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_1 [i_0])), (4294967294U))) >= (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)246)))) ? (((/* implicit */int) (short)-11980)) : (((/* implicit */int) (_Bool)1)))))));
        var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)6995))))))));
    }
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (short)-11980))))))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (short)11980))))))))));
}
