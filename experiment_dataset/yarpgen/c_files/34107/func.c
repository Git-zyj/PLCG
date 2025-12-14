/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34107
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (4548733885081005449ULL) : (((/* implicit */unsigned long long int) var_7))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) 17498625704756177187ULL))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -1829255447)) % (((arr_1 [i_0]) ^ (((((/* implicit */_Bool) var_15)) ? (8796093005824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))))))));
        var_19 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), ((unsigned short)8184)))))));
        var_20 = ((/* implicit */unsigned char) (signed char)24);
    }
}
