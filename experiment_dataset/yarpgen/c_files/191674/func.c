/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191674
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -287707218)) : (5660131240126528222ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2561835296U)) || (((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) var_9)))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-((+(((/* implicit */int) var_0)))))))));
    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) ((unsigned short) (unsigned short)27844))) : ((~(((((/* implicit */_Bool) (unsigned short)37692)) ? (((/* implicit */int) (unsigned short)24423)) : (((/* implicit */int) (unsigned short)27844))))))));
}
