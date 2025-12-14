/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220792
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
    var_19 = ((short) (+((-(var_17)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) max((2253232532317338579LL), (arr_0 [i_0]))))), (max((((((/* implicit */_Bool) -2253232532317338568LL)) ? (arr_1 [i_0]) : (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-58)), (arr_0 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */long long int) 0)) / (2253232532317338591LL))), (((/* implicit */long long int) var_0))));
    }
    var_21 = ((/* implicit */int) ((unsigned int) var_16));
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)19564)), (((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-414839964429249842LL)))));
}
