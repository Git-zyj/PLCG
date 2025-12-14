/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45946
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
    var_17 = ((/* implicit */short) var_9);
    var_18 = ((/* implicit */long long int) max((var_16), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((short) (~(arr_1 [i_0]))))) : (((((/* implicit */int) (_Bool)0)) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-7298)) : (((/* implicit */int) (short)-15863)))) + (7307))))));
        var_19 = min(((!(((/* implicit */_Bool) arr_1 [i_0])))), (arr_0 [(short)8]));
        var_20 = ((/* implicit */_Bool) ((((arr_0 [i_0]) ? (var_1) : (((/* implicit */int) (unsigned char)16)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))));
    }
}
