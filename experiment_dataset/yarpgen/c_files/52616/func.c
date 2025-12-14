/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52616
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) < (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned int) var_7)), (1163781405U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65112)) : (((/* implicit */int) var_3))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) ^ (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (1505115671U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27979))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 - 3])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) < (1505115671U))))) : (((1505115671U) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (41397))))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)20))))))))));
    }
}
