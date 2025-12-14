/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237209
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
    var_15 = ((unsigned long long int) (+(((((/* implicit */_Bool) var_14)) ? (3742419071399710250ULL) : (((/* implicit */unsigned long long int) var_7))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */short) var_5))))) ? (var_10) : ((-(var_10)))))) && ((!((!(((/* implicit */_Bool) var_9))))))));
    var_17 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (signed char)-82);
    }
}
