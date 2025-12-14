/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191854
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
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 4017181307646413831ULL))))) == (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) arr_1 [i_0]))))))))));
        var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((min((arr_1 [i_0]), (arr_1 [i_0]))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0])))))));
        var_14 = (~((+((+(((/* implicit */int) (unsigned short)65535)))))));
        var_15 *= ((/* implicit */short) ((unsigned long long int) arr_0 [(signed char)2]));
    }
    var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_9)))) ? (max((var_5), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    var_17 = ((/* implicit */short) var_12);
}
