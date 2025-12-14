/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29911
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
    var_12 -= ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (unsigned char)244)), (5680185693277116978LL))), (((/* implicit */long long int) var_7))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_2 [i_0] &= ((/* implicit */unsigned int) var_5);
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1920674781927626696LL)) ? (1408323547730353672ULL) : (((/* implicit */unsigned long long int) 2147483648U)))))));
    }
}
