/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41586
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5854606058414738495ULL)) && (((/* implicit */_Bool) 5854606058414738495ULL))))), (((min((((/* implicit */unsigned long long int) var_15)), (12592138015294813121ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_4))))))));
        var_17 += ((/* implicit */signed char) arr_2 [21LL] [i_0]);
    }
    var_18 = ((/* implicit */unsigned int) var_12);
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((~(125829120U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) % (((min((12592138015294813121ULL), (12592138015294813131ULL))) | (((((/* implicit */_Bool) (short)-22558)) ? (12592138015294813129ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96)))))))));
    var_20 = ((/* implicit */unsigned int) var_10);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-96))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (0)))) ? (((/* implicit */unsigned int) (~(-1)))) : (min((((/* implicit */unsigned int) var_10)), (var_15)))))));
}
