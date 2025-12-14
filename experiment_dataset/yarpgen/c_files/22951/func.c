/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22951
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
    var_12 = ((/* implicit */signed char) ((var_6) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)32)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((16ULL), (((/* implicit */unsigned long long int) (short)32753)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 3250356830U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) : (((unsigned long long int) (short)32564))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (9223372036854775807LL)))) : (((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) (short)-32254)) + (32282)))))));
        var_14 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) 5660496409732898444ULL)))));
    }
    var_15 = ((/* implicit */signed char) var_4);
    var_16 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)178), (((/* implicit */unsigned char) (signed char)71)))))) | (var_10))) << (((((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) (signed char)-119)), ((unsigned char)78))))) + (139)))));
}
