/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194546
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
    var_13 = ((/* implicit */long long int) min((var_1), ((short)-27736)));
    var_14 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (~(max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (short)-17291);
        var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
