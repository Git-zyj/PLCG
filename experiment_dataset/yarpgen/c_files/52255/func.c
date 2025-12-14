/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52255
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_13))));
        arr_4 [15U] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)85), (var_18))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_0 [i_0] [i_0]) - (6933699139276998466ULL)))))), ((~(arr_2 [(signed char)16])))))));
    }
    var_20 = (+(var_1));
}
