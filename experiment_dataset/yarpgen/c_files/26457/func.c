/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26457
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) var_11);
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_1))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0])))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)7891)) ^ (((/* implicit */int) (short)-22683))))) ? (arr_3 [i_0] [i_0]) : (((((/* implicit */_Bool) 0LL)) ? (72057591890444288LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))))));
    }
    var_21 ^= -5457381103216528869LL;
    var_22 *= ((/* implicit */unsigned short) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (5457381103216528868LL)))))))));
    var_23 = ((/* implicit */short) var_12);
}
