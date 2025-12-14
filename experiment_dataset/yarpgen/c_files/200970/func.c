/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200970
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0)))))));
        arr_3 [(unsigned char)4] = ((/* implicit */unsigned int) (-(13704006286269250406ULL)));
    }
    var_14 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_0))))));
    var_15 -= ((/* implicit */unsigned char) var_1);
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (((int) var_4))));
}
