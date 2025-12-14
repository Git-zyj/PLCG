/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242238
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
    var_12 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)28)))))))), (12492142024730287330ULL));
    var_13 = ((/* implicit */short) (signed char)52);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) min((var_14), ((~((~(arr_0 [i_0 + 1])))))));
        var_15 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_16 -= (signed char)-110;
    }
    var_17 *= ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) ((short) (unsigned short)4))), ((+(3563474806U)))))));
    var_18 |= ((/* implicit */signed char) var_2);
}
