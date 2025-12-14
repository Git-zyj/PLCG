/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243402
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
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
        arr_4 [i_0 + 2] = ((/* implicit */long long int) arr_0 [(short)3]);
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? ((-(arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))))) : (8217296870552749762LL)));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0 - 3]) >= (arr_1 [i_0 + 1])))) >> (((max((arr_1 [i_0 + 1]), (((/* implicit */long long int) (_Bool)1)))) - (3753492840419641454LL)))));
        var_12 += 5718984171570865ULL;
    }
    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
    var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) var_0)), (8217296870552749781LL)));
    var_15 |= ((/* implicit */long long int) ((max(((+(4294967265U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
}
