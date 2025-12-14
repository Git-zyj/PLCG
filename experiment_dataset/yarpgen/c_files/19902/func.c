/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19902
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
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((((arr_0 [i_0]) + (2147483647))) << (((((arr_0 [i_0]) + (1703673155))) - (15)))))));
        var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) ((unsigned char) ((arr_0 [i_0]) % (1759918508)))))))));
        var_17 *= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1759918507)) >= (var_5)))), (((unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [5])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */short) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
    }
    var_19 = ((/* implicit */unsigned long long int) ((int) ((int) var_5)));
}
