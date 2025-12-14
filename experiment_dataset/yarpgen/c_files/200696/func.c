/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200696
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+(((var_2) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_3))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */short) var_0))))) || ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (((min((var_2), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) var_3))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) << (((var_2) - (16985791535268589454ULL))))))))));
}
