/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201573
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
    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_9))))) > (((var_17) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), ((!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))));
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-72))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_5 [i_0] [i_0] = (short)14063;
    }
}
