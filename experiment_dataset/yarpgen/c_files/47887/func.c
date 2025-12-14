/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47887
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_0))));
    var_15 -= ((/* implicit */long long int) ((var_11) & (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_4))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)243)), (558446353793941504ULL)))) && (((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) var_4))))))))));
        var_16 = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) var_6)))) / (((max((arr_1 [i_0]), (-288531062))) - (((/* implicit */int) arr_3 [i_0])))));
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (var_11)));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) 288531053)) ? (((/* implicit */unsigned int) var_7)) : (var_12)))))), ((+(var_8))))))));
}
