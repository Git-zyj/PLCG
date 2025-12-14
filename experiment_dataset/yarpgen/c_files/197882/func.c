/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197882
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
    var_18 = ((/* implicit */unsigned char) (~(min((((-9223372036854775806LL) / (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_3)) & (912269615U))))))));
    var_19 = ((/* implicit */long long int) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_1);
        arr_4 [i_0] = (~(3382697686U));
        arr_5 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(var_2))))));
    }
}
