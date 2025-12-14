/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207632
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_18))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)6144))))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10060976397925900197ULL)) ? (((/* implicit */long long int) -1352320348)) : (var_1)));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22818))))))));
    }
    var_23 = ((/* implicit */int) (~(((((((/* implicit */_Bool) (short)-31117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31117))) : (var_0))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_19)) : (var_15)))))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */int) var_9)), (min((var_3), (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_11))));
}
