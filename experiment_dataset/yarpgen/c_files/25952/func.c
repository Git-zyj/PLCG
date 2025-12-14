/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25952
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
    var_10 |= ((int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) + ((~(((/* implicit */int) (unsigned char)253))))));
    var_11 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(unsigned char)6] [i_0])) : (((/* implicit */int) arr_3 [(short)2])))) * (((/* implicit */int) arr_3 [(unsigned short)2]))))))))));
        var_13 |= ((/* implicit */signed char) arr_3 [(_Bool)0]);
    }
    var_14 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_1)))))))));
}
