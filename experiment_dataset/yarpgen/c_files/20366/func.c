/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20366
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
    var_19 = ((/* implicit */unsigned char) ((var_9) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */int) (unsigned char)22)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_20 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)64)));
        var_21 |= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (signed char)13)))) + (2147483647))) << ((((-(arr_1 [i_0]))) - (2525265926718945548ULL)))));
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-91)), (((((/* implicit */int) ((_Bool) var_11))) >> (((var_5) - (12789948229621046764ULL)))))));
        var_22 += ((/* implicit */unsigned short) var_9);
    }
}
