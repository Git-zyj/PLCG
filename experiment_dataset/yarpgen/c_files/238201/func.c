/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238201
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) min((var_16), (((/* implicit */unsigned short) var_11))))), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned short)54156))))))) <= (max((min((((/* implicit */unsigned int) arr_2 [(_Bool)1])), (var_13))), (((/* implicit */unsigned int) var_10)))))))));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -4988700380259625219LL)) ^ (min((11256831651350113789ULL), (((/* implicit */unsigned long long int) (unsigned char)76))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((511LL), (((/* implicit */long long int) 447676595)))))));
        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)17609)) >> (((((/* implicit */int) (signed char)127)) - (113)))));
        var_22 += ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) arr_2 [i_0]))))), (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_1)))));
    }
    var_23 -= ((/* implicit */_Bool) min((((/* implicit */long long int) max((var_15), (((/* implicit */unsigned short) var_14))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_6))))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_5)))))));
    var_24 += ((/* implicit */signed char) min((((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_13))) << (((var_1) / (((/* implicit */unsigned long long int) -843296414))))))));
}
