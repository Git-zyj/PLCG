/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237835
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) 12653961327266132010ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))));
    var_18 = ((/* implicit */int) max((var_18), ((~(((/* implicit */int) (unsigned char)218))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 4])) % (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (-1346392644) : (-1346392644))) : ((-(1346392643)))));
        var_19 = ((/* implicit */int) ((unsigned short) (~(11998556303946985460ULL))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 2])) - (-1346392644)));
        arr_5 [i_0] = ((/* implicit */signed char) (short)23288);
    }
}
