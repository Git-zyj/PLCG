/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33476
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((-1728198666), (((/* implicit */int) (unsigned char)101))));
                arr_4 [i_0] = ((/* implicit */unsigned int) var_16);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) (unsigned char)132))))) ? (((((((var_2) + (2147483647))) << (((/* implicit */int) arr_3 [i_0])))) - ((-(((/* implicit */int) (unsigned char)132)))))) : (((((/* implicit */_Bool) ((2050617071080243731ULL) << (((((/* implicit */int) (signed char)82)) - (75)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)124)) - (113)))))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)142)))) == (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) && (((/* implicit */_Bool) ((short) (signed char)22))))))));
}
