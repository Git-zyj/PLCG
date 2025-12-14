/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44352
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
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */long long int) (-(var_4)))) >= (var_3)))), ((+((-(var_12)))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((894753977) << (((((-1723898773) + (1723898802))) - (28))))) : (((var_15) / (((/* implicit */int) var_11))))))) ? (max((11100772701920281276ULL), (((/* implicit */unsigned long long int) (signed char)37)))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) var_11)))))));
    var_18 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
    var_19 += ((/* implicit */short) max((((/* implicit */int) ((signed char) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_1)))))), (var_12)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [(short)5] = ((/* implicit */unsigned long long int) (~(min((arr_1 [i_0]), (((/* implicit */long long int) -1))))));
        var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (max((((/* implicit */long long int) max((2079186015U), (((/* implicit */unsigned int) 2102508380))))), (var_3)))));
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
    }
}
