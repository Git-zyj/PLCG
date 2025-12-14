/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240959
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned int) var_13)), (var_0))))));
    var_19 = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_1 [i_0]))))) != (((arr_0 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) > (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)-65)))))));
        arr_2 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_7))))) - (((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [i_0])))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)125)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_14) != (((/* implicit */long long int) 112409681)))))) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (1774960542U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123)))))))) ^ (((/* implicit */int) arr_1 [i_0]))));
    }
    var_21 = ((/* implicit */short) ((((_Bool) min((((/* implicit */unsigned int) var_3)), (var_6)))) ? (((((/* implicit */_Bool) 536870912U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_5))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) | (((/* implicit */int) var_5))))))))));
    var_22 -= ((/* implicit */_Bool) var_5);
}
