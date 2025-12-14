/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201971
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (+(((unsigned long long int) arr_0 [i_0 - 2]))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [(unsigned char)7]);
        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
        var_14 = arr_0 [i_0];
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) var_5))))) : ((+(((/* implicit */int) arr_0 [13])))))), (max((var_4), (((/* implicit */int) arr_3 [i_0 + 1]))))));
    }
    var_15 = var_5;
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))))) : ((-(((/* implicit */int) var_12))))));
}
