/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20358
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-91)) > (var_13))))))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)65535))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_2 [i_0])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)10])) ? (arr_2 [i_0]) : (arr_2 [4LL]))) : (((/* implicit */unsigned long long int) (~(min((var_13), (((/* implicit */int) (signed char)115))))))));
        arr_4 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [16]))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_9)))));
    var_17 = ((/* implicit */signed char) 2251710991163366446ULL);
}
