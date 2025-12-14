/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228654
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned char) var_3));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((+(arr_0 [i_0] [i_0]))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)29845))))))))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (short)29843)) << (((((arr_0 [i_0] [i_0]) + (4250071187532325935LL))) - (15LL))))))));
        var_14 = ((/* implicit */unsigned int) max((((arr_1 [i_0] [i_0]) + (((/* implicit */long long int) (-(((/* implicit */int) (short)-1))))))), ((+(arr_0 [i_0] [i_0])))));
    }
}
