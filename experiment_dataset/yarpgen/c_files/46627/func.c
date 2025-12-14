/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46627
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_9)) + (((/* implicit */int) var_2)))), (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_5)) ^ (((((/* implicit */int) var_9)) + (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) max((3585174056033611009ULL), (((/* implicit */unsigned long long int) ((unsigned int) 3585174056033611010ULL)))));
        arr_2 [i_0] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [(signed char)4])))) - ((+(var_10))))), (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >> (((((/* implicit */int) var_7)) - (141)))))));
    }
}
