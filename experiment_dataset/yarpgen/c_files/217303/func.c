/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217303
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((min((603435990), (((/* implicit */int) var_6)))), (((/* implicit */int) ((_Bool) 14329729021370032112ULL))))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((var_12) != (((/* implicit */unsigned int) (~(var_8)))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_4 [(unsigned short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(603435990)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_13))) : (((((/* implicit */_Bool) -603435990)) ? (((/* implicit */unsigned int) 29360128)) : (var_13)))));
        var_16 |= ((/* implicit */unsigned int) 29360128);
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34083))) : (var_5)))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_7))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (unsigned char)247))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_6)))))));
        var_19 ^= ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) != (((/* implicit */int) (_Bool)1)));
        var_20 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) 2450259304U)) : (9223372036854775807LL)))));
    }
    var_21 = ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)31247)) : (((/* implicit */int) ((signed char) var_1))))))));
}
