/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224792
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551590ULL)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)25)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (unsigned short)33164))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) (short)-22126)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (64U))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */int) var_7);
}
