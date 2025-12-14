/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225963
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
    var_10 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) var_8))))));
    var_11 |= ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) : (2234207627640832ULL)))))));
        var_13 = ((/* implicit */_Bool) (short)17769);
    }
    var_14 -= ((/* implicit */unsigned int) (-(min((max((var_3), (((/* implicit */unsigned long long int) (unsigned char)12)))), (max((var_3), (((/* implicit */unsigned long long int) var_7))))))));
    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (max((var_9), (5106435410935757524ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) 4ULL))))))));
}
