/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191463
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
    var_17 = ((/* implicit */unsigned char) (~(2688822630U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(2861244441U)))) % ((-(arr_0 [i_0])))));
        var_18 = ((/* implicit */_Bool) var_15);
        var_19 = ((/* implicit */unsigned int) ((long long int) var_3));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((20LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)122))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (+((+((~(4294967295U)))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((((/* implicit */unsigned int) arr_4 [11U] [11U])) - (var_10))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))) < (((((/* implicit */_Bool) 437518153)) ? (((/* implicit */long long int) var_3)) : (max((-21LL), (((/* implicit */long long int) (signed char)47))))))));
    }
    var_21 = ((/* implicit */long long int) var_5);
    var_22 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_9)), ((-(((unsigned long long int) var_16))))));
}
