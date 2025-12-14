/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190229
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [(unsigned char)6])) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) min((arr_1 [(short)7]), (arr_0 [1U])))) : (((/* implicit */int) arr_1 [i_0]))))) ? (max((min((342954148U), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_10))) || (((_Bool) var_11))))))));
        var_16 = ((/* implicit */long long int) min((((short) arr_0 [i_0])), (((/* implicit */short) ((unsigned char) -3200730853477934875LL)))));
        var_17 = ((/* implicit */_Bool) ((unsigned char) ((unsigned int) min((arr_1 [i_0]), (((/* implicit */short) (signed char)127))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) > (((/* implicit */int) (signed char)-118)))))));
        var_18 ^= ((/* implicit */_Bool) min(((+(max((((/* implicit */long long int) arr_3 [7] [7])), (var_13))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (-1827062885) : (((/* implicit */int) var_0)))))));
    }
    var_19 = ((/* implicit */unsigned char) ((_Bool) var_0));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) var_5))), (((13649006575231488900ULL) >> (((((/* implicit */int) var_12)) + (13017)))))))) || (((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_3))))) : (min((var_14), (((/* implicit */unsigned long long int) var_3)))))))));
}
