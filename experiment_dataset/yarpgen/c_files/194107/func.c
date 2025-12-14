/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194107
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
    var_10 = ((/* implicit */short) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (max((((/* implicit */int) ((5504999894687374548LL) != (((/* implicit */long long int) 536870911))))), (var_9)))));
    var_11 |= ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */_Bool) ((min((var_6), (((/* implicit */long long int) arr_0 [i_0])))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) arr_0 [i_0])))))));
                var_13 *= ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) ((long long int) ((12ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
            }
        } 
    } 
}
