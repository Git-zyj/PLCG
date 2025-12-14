/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236984
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((((/* implicit */int) var_3)) % (((/* implicit */int) arr_0 [13LL])))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_0 [i_0])), ((signed char)-28)))) && (((/* implicit */_Bool) (unsigned char)214))))))))));
        var_17 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (11324555623314621448ULL)))));
        var_18 = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_2 [i_0] |= (short)-30083;
        arr_3 [i_0] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11470))) : (var_8))), (((/* implicit */unsigned long long int) min((var_12), (arr_1 [i_0])))))) >> ((((~(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (var_13))))) + (64LL)))));
    }
    var_19 = ((/* implicit */short) 7122188450394930168ULL);
}
