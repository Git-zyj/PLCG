/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190625
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((min((max((arr_3 [i_0]), (arr_3 [i_0 + 1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))))) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_18 = ((/* implicit */unsigned char) ((8ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_16)))))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (+(arr_3 [i_0 + 1]))))) & (((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */short) ((unsigned short) ((unsigned long long int) (-(arr_3 [i_0 - 1])))));
    }
    var_21 += ((/* implicit */unsigned char) var_4);
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_16)), (((var_12) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) : (((unsigned long long int) var_5))))));
    var_23 = ((/* implicit */unsigned int) var_1);
}
