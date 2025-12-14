/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196828
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 0U)) >= (15719634711917025677ULL)));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || ((!(((/* implicit */_Bool) arr_1 [i_0]))))))), ((+(((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (unsigned char)162))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 2727109361792525919ULL))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) arr_1 [i_0]);
    }
}
