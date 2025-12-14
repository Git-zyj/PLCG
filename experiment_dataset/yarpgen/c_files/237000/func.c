/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237000
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
    var_10 = ((/* implicit */unsigned long long int) ((unsigned int) var_5));
    var_11 = ((/* implicit */unsigned int) var_2);
    var_12 = ((/* implicit */unsigned short) max(((signed char)-107), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)38677)) ? ((-(6878271518355932007ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) var_2)))))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) var_9);
        arr_5 [i_0] = var_1;
        arr_6 [(short)5] [i_0] = ((/* implicit */unsigned char) (+(-1LL)));
        arr_7 [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0 + 1]) << (((((/* implicit */int) var_4)) - (48)))));
    }
}
