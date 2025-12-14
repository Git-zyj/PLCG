/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44642
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
    var_11 = ((/* implicit */_Bool) max((max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (short)7849)))), ((+(((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [0U] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), ((+(0ULL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-16)), ((unsigned short)65535)))) : (((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */_Bool) (short)-14428)) ? (((/* implicit */int) (short)-22202)) : (((/* implicit */int) (_Bool)1))))))));
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
    }
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)32767)))))))), (-1321011435)));
}
