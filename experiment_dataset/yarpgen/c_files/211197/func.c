/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211197
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
    var_17 = var_7;
    var_18 = ((/* implicit */unsigned short) ((var_10) - (((/* implicit */int) (!(((((/* implicit */int) var_0)) < (((/* implicit */int) var_9)))))))));
    var_19 -= ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) (unsigned short)8191);
            var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 + 2]))))), (((long long int) arr_0 [i_0] [i_1 - 1]))));
        }
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_16))));
    }
    var_23 = ((/* implicit */int) (((!(var_13))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (min((min((((/* implicit */unsigned int) var_15)), (var_11))), (((/* implicit */unsigned int) var_14))))));
}
