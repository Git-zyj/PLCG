/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222821
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
    var_10 = var_1;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))), (min((((/* implicit */long long int) (unsigned char)250)), (528482304LL)))));
        var_11 = ((unsigned char) (~(-2147483643)));
    }
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) min((var_1), (((/* implicit */short) var_3))))))));
}
