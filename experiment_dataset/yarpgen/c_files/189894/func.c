/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189894
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
    var_16 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), ((signed char)-30)))) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) ((signed char) (~(9223372036854775807LL)))))));
            var_18 -= ((/* implicit */unsigned long long int) (~((+((+(((/* implicit */int) var_3))))))));
        }
        var_19 = var_11;
        var_20 = ((/* implicit */signed char) var_1);
    }
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))), (var_10)));
}
