/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196640
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (unsigned char)161))))) : (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)116)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10))))))))))));
    var_20 = ((unsigned char) (signed char)7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        var_21 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)21522))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)94)), (var_11)))), (min((((/* implicit */int) arr_0 [i_0])), (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)11])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)94)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = min((((-498219997) & (((/* implicit */int) (unsigned char)84)))), (min((((int) arr_0 [i_0])), ((-(1500606192))))));
    }
    var_23 = ((/* implicit */long long int) ((_Bool) var_13));
}
