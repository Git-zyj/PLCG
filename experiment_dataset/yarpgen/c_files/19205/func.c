/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19205
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))))));
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) (~(var_0)))) ? (max((var_5), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (min((((/* implicit */unsigned long long int) var_0)), (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (var_2)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (short)28216)))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-14039))))));
        arr_2 [i_0] [(unsigned short)2] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
}
