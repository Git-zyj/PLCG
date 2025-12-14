/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249706
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)142)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) var_10)))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_1 [i_0]))))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_0 [i_0])))));
        var_21 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_17)))))));
}
