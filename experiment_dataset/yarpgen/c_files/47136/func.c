/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47136
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
    var_20 = ((/* implicit */long long int) max((((/* implicit */signed char) var_14)), (var_4)));
    var_21 = ((/* implicit */short) var_17);
    var_22 += ((/* implicit */unsigned int) min((((/* implicit */int) ((max((((/* implicit */long long int) var_16)), (var_11))) == (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (var_7)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((signed char) max(((_Bool)0), (((((/* implicit */int) var_9)) == (((/* implicit */int) var_9)))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11))))))) + (((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_0 [i_0] [0U]))))) % (((/* implicit */int) arr_0 [(short)6] [(short)6])))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_25 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -124163515)))))));
        var_26 = ((/* implicit */long long int) var_8);
    }
    for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) arr_0 [6] [6])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-2)) : (var_12))) <= (((/* implicit */int) var_8))))), ((signed char)41)));
    }
}
