/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52234
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((144115188075855872LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))))) <= (((/* implicit */int) (short)-2313))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 += ((/* implicit */unsigned int) (+(((long long int) var_12))));
        var_18 &= ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    var_19 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)10)), (var_0)))) ? (((((/* implicit */int) (unsigned short)12038)) % (((/* implicit */int) (short)-2339)))) : ((+(((/* implicit */int) var_4)))))), ((~(((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)125))))))));
    var_20 = ((/* implicit */unsigned long long int) (+(min((var_3), (((/* implicit */unsigned int) (unsigned short)17392))))));
    var_21 = ((/* implicit */short) 12LL);
}
