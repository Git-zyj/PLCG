/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216933
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [(signed char)7] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned int) var_14)), (arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    }
    var_16 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((1148480504) >> (((562949953421312LL) - (562949953421305LL)))))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) var_7)), (var_0)));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_10))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (min((((/* implicit */unsigned int) max((var_1), ((unsigned char)238)))), (123225941U)))));
}
