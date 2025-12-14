/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31976
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
    var_18 = ((/* implicit */short) (_Bool)1);
    var_19 = ((/* implicit */short) ((unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_7)) ? (1606334175) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 += ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned char) (+(-1942625109))));
    }
}
