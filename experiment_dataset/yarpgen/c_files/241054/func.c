/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241054
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((signed char) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) - (var_12))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (short)32754))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)192))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_1 [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (arr_1 [i_0])))));
    }
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned short)65343), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (var_2)))))))));
}
