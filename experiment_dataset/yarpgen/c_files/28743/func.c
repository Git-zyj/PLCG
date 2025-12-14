/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28743
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned int) min((min((var_3), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((6216533318592707951ULL), (((/* implicit */unsigned long long int) (short)0)))))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (var_7) : (var_8)));
    var_19 = ((/* implicit */unsigned long long int) var_2);
    var_20 &= ((/* implicit */int) (signed char)-4);
    var_21 = ((/* implicit */signed char) var_6);
}
