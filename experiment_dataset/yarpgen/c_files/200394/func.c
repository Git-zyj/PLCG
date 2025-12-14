/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200394
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
    var_11 = ((/* implicit */_Bool) 2001373176U);
    var_12 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) : (4294967295U)))) ? (((((/* implicit */_Bool) (unsigned short)17510)) ? (((/* implicit */int) (unsigned short)48051)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (unsigned short)48018))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((short) ((signed char) arr_0 [i_0]))))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((unsigned int) (unsigned short)11)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
}
