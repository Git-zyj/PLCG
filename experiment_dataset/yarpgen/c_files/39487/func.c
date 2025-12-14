/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39487
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
    var_20 = min((((unsigned int) (-(471964435510588681ULL)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (412372528U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (412372504U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) 3627764747U);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((signed char) var_18));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-2269837162395255906LL)))) ? (1227308508) : (((((/* implicit */_Bool) 2084241455)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) var_19))))))) ? (((min((4294967295U), (arr_0 [i_0]))) - (arr_1 [i_0]))) : (var_2));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (arr_0 [i_0])))) ? (min((4294967295U), (((/* implicit */unsigned int) var_6)))) : (arr_0 [i_0])))));
    }
}
