/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233915
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
    var_19 -= ((/* implicit */unsigned char) max((min((((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_2))));
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))));
        var_21 = arr_0 [i_0];
    }
    var_22 = (-(var_11));
}
