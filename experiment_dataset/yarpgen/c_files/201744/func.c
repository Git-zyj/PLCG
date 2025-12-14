/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201744
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 *= ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */int) (unsigned char)84))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1626555830)) ? (8508995315566870262LL) : (((/* implicit */long long int) 1626555823))));
    }
    for (int i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        arr_4 [i_1] [i_1 + 1] = -1626555844;
        var_14 = ((/* implicit */unsigned long long int) min(((unsigned short)49368), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_1])), (1626555823)))))))));
    }
    var_15 = ((/* implicit */unsigned char) var_0);
}
