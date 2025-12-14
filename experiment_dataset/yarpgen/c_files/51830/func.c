/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51830
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
    var_19 -= ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_20 += ((/* implicit */long long int) (((!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_2 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64230))) & (8ULL)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((+((-(((/* implicit */int) (unsigned char)0)))))) - (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) var_0))))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    var_21 = ((/* implicit */_Bool) (-((-(((1035830543U) * (1035830558U)))))));
}
