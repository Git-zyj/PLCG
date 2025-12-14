/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231650
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 *= max((((unsigned int) (+(var_8)))), (max((((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0] [i_0]))), (arr_0 [i_0]))));
        var_18 *= ((/* implicit */short) ((unsigned long long int) var_11));
    }
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        arr_5 [6U] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) < (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_4)))))))), (((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) (unsigned char)11)), (4294967279U))) : (arr_4 [(_Bool)1] [(_Bool)1])))));
        var_19 = ((/* implicit */unsigned char) (+((-((+(4294967279U)))))));
        arr_6 [i_1] [(short)2] = ((/* implicit */signed char) var_3);
    }
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) var_7)), (var_12)))))));
}
