/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40652
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
    var_20 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) min((12945480689044321712ULL), ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31)))))))));
        var_21 = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)104))))) ? (arr_3 [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : ((-(arr_3 [i_0])))));
    }
    var_22 *= ((/* implicit */unsigned int) (+(((/* implicit */int) max((var_16), ((_Bool)1))))));
}
