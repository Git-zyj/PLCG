/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44567
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
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((2264074519880858166LL) / (((/* implicit */long long int) 1523379634U)))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) * (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_15 = ((/* implicit */unsigned char) ((int) ((var_6) | (((/* implicit */int) ((unsigned char) 9496810448453163666ULL))))));
    var_16 -= max((((((/* implicit */int) var_0)) % (((/* implicit */int) var_0)))), (((/* implicit */int) var_5)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) -2264074519880858167LL)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) arr_1 [i_1])))))) % ((~(((((/* implicit */int) (unsigned char)74)) >> (((((/* implicit */int) arr_0 [i_1])) - (7339))))))))))));
                var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned char)74)))))))) % (((/* implicit */unsigned int) var_6))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
}
