/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244818
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) ((arr_2 [3LL]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))))))) | (((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_2 [i_0])))) - (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) 3U)) || (((/* implicit */_Bool) 1429661099U)))))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (var_14)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20)) << (((((/* implicit */int) (unsigned short)18529)) - (18516)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)112)))))))) : (((/* implicit */int) max((var_3), (((/* implicit */short) (_Bool)1)))))));
        var_17 = ((/* implicit */_Bool) max((max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 2957087969758916395ULL)) ? (2147483616) : (((/* implicit */int) var_4)))))), (((/* implicit */int) var_2))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) (signed char)75)))), (var_8))))));
    }
    var_19 = ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0))))) ? (var_10) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)203))))))));
}
