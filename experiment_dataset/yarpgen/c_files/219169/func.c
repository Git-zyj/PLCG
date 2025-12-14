/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219169
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((signed char) max((min((11137912574989602025ULL), (((/* implicit */unsigned long long int) (unsigned short)22785)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42750)) <= (((/* implicit */int) var_12))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((2179736129U) >> (((((/* implicit */int) (short)5485)) - (5477))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
    }
    var_13 = ((/* implicit */unsigned int) var_3);
}
