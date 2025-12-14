/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193647
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
    var_17 = (unsigned short)42935;
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) var_6);
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 2])))), (((/* implicit */int) arr_3 [i_0 - 3]))));
        arr_5 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)22606)) % (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned short)22604))));
    }
    var_19 *= ((/* implicit */unsigned long long int) var_16);
}
