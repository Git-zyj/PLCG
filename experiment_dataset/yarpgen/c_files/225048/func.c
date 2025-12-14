/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225048
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
    var_12 -= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) var_0))))) ? (max((((/* implicit */unsigned long long int) var_4)), (4611686018427387904ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_5))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        arr_4 [(signed char)10] = ((/* implicit */int) 575814531U);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32370)) ? (((13835058055282163711ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [(unsigned short)11] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1]))))))) : (max((4611686018427387904ULL), (((/* implicit */unsigned long long int) (short)-19553))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) var_5))), (var_11)))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 1151622416374226050LL)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) var_0)))) != (((((/* implicit */_Bool) (unsigned char)90)) ? (4611686018427387904ULL) : (13835058055282163711ULL))))))));
        arr_5 [i_0] = var_9;
    }
    var_16 -= ((/* implicit */signed char) 16344214375851145332ULL);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_7), (var_3)))), (((long long int) 16344214375851145348ULL))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (var_5)))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (16474849421105681256ULL)))))));
}
