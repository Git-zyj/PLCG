/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212551
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-77)) + (((/* implicit */int) (signed char)87))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [18ULL] |= ((/* implicit */unsigned short) (signed char)-77);
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < ((-(var_19)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_1))))) != (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) (signed char)77)))))))));
    }
}
