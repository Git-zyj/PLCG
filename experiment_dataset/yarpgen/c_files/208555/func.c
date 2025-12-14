/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208555
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] [(unsigned short)3] = ((/* implicit */unsigned int) 5002692085468844222ULL);
        var_19 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_1 [i_0]))))));
        var_20 = arr_1 [i_0];
        var_21 = (~(((((/* implicit */_Bool) 5677381695505297881ULL)) ? (arr_2 [i_0]) : (13444051988240707410ULL))));
    }
    var_22 = ((/* implicit */int) min((var_13), (((var_8) && (((/* implicit */_Bool) var_9))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
}
