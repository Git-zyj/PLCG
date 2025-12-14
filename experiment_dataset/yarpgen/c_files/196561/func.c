/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196561
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)39149)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)227)) <= (var_4)))))) : (((/* implicit */int) var_10)))))));
    var_17 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)29524), ((short)-8003))))) - (var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) (~(((-1337238125013291449LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234)))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14032)) ? (((/* implicit */int) min((max((var_13), (((/* implicit */short) (unsigned char)42)))), (((/* implicit */short) ((signed char) arr_3 [i_1 + 1] [i_0] [i_0])))))) : (((((/* implicit */int) (signed char)117)) * (((/* implicit */int) (unsigned short)15991))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-29499))))) : (min((((/* implicit */unsigned long long int) (unsigned char)192)), (arr_2 [i_0]))))))))));
            }
        } 
    } 
}
