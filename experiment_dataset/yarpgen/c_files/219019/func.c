/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219019
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
    var_15 &= ((/* implicit */int) var_13);
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_13))));
    var_17 = ((/* implicit */short) min((max((min((((/* implicit */unsigned int) (signed char)124)), (var_7))), (((/* implicit */unsigned int) ((unsigned char) var_4))))), (((/* implicit */unsigned int) (signed char)112))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 *= ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) var_14))))) : (min((((/* implicit */unsigned int) var_10)), (var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 308848121U)) ? (((/* implicit */int) (unsigned short)17113)) : (((/* implicit */int) (_Bool)1))))))))));
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_13) == (var_7)))), (((unsigned int) var_11))))), (((((/* implicit */_Bool) var_8)) ? (max((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (var_3)))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))));
        var_21 *= ((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((/* implicit */int) ((unsigned char) (_Bool)1)))));
        var_23 *= ((/* implicit */unsigned int) (-(((240937951) / (((/* implicit */int) (signed char)-125))))));
    }
}
