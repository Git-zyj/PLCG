/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200882
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
    var_13 = ((/* implicit */_Bool) var_8);
    var_14 = ((/* implicit */signed char) ((((var_9) & (((/* implicit */int) ((((/* implicit */int) var_8)) == (var_4)))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) == (min((var_1), (((/* implicit */unsigned long long int) (unsigned short)65515)))))))));
    var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((max((((/* implicit */unsigned int) var_11)), (var_3))) - (4294967187U)))))) : (max((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) var_9)))), (max((((/* implicit */unsigned long long int) 4008682289U)), (13554998292328582611ULL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= arr_0 [i_0];
        var_16 &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */long long int) 8388608U)) / (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)18465)) ? (((/* implicit */int) (unsigned short)40900)) : (((/* implicit */int) (unsigned short)0))))))));
    }
}
