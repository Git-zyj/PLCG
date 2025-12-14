/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39872
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        var_10 -= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) max((var_0), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_7))))))));
    }
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32755))))) : (((/* implicit */int) (short)512)))) : (((/* implicit */int) (_Bool)1))));
    var_12 = ((/* implicit */unsigned int) (((((~((~(((/* implicit */int) (short)-538)))))) + (2147483647))) << ((((((-(((/* implicit */int) (short)16)))) + (39))) - (23)))));
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_2))))))))));
}
