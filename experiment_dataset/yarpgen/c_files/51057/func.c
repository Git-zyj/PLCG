/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51057
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
    var_20 = ((/* implicit */int) var_8);
    var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 618954691U)) ? (10253080595439360034ULL) : (((/* implicit */unsigned long long int) 3676012604U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_18))))) : (var_1)));
    var_22 &= ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned long long int) var_13))))))))));
    var_23 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_24 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [3U])) ? (((arr_1 [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((192U) + (var_8))))));
        var_25 = ((/* implicit */unsigned int) (+((~(var_4)))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */long long int) var_11)) & (var_9))) : (((/* implicit */long long int) min((3720951447U), (((/* implicit */unsigned int) arr_5 [i_1] [i_1])))))))) ? ((~(var_9))) : (max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-127))))), (arr_4 [i_1])))));
        var_27 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) ((short) var_7)))), (max((((/* implicit */long long int) var_19)), (arr_4 [i_1])))));
    }
}
