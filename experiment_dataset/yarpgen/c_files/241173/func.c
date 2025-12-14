/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241173
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned short) min((min((var_8), (((/* implicit */unsigned char) var_15)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_0)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
        var_20 = ((/* implicit */unsigned int) (+((+((-9223372036854775807LL - 1LL))))));
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (17844291053512476369ULL)));
        var_22 += ((/* implicit */unsigned short) (~(2538275953U)));
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 5799904284431345593LL)))) : (((((/* implicit */_Bool) var_10)) ? (var_9) : (var_9)))))) ? (var_0) : (var_13))))));
    var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((0U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_11))))) && (var_15)));
    var_25 = ((/* implicit */unsigned int) min((((var_18) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), (var_7)));
}
