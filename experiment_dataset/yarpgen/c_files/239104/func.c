/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239104
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
    var_18 = ((/* implicit */unsigned char) 882071016U);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned long long int) min((((long long int) 393663739576161195ULL)), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [(unsigned short)14] [i_0])), (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] [7LL] = max((((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) == (((/* implicit */int) var_2))))) == (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))), (((unsigned short) (!(var_1)))));
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1]))))))) == ((+(18053080334133390420ULL)))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)246)) || (((/* implicit */_Bool) 18053080334133390420ULL)))) && (((((/* implicit */_Bool) 393663739576161195ULL)) || (((/* implicit */_Bool) 393663739576161196ULL))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)32767)))) == (16005020661825101799ULL))))) == (max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)560)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))))))));
}
