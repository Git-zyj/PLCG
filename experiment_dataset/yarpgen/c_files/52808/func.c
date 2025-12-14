/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52808
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
    var_14 = ((/* implicit */unsigned short) var_8);
    var_15 &= ((/* implicit */unsigned int) ((-706069839555048575LL) / (((/* implicit */long long int) max((((/* implicit */int) var_13)), (((int) var_10)))))));
    var_16 *= ((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) != (235952224)))), (max((((/* implicit */unsigned int) var_7)), (var_5))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (-(arr_1 [i_0])));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [8U])))) ? (max((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4)))))))) || (((/* implicit */_Bool) ((short) arr_2 [i_0 - 3])))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_2 [i_0 - 2]))));
    }
}
